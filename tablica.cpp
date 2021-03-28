#include "tablica.h"
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <chrono>
#include <utility>

template<typename TYPE, int SIZE, int SEC_SIZE>
Array<TYPE, SIZE, SEC_SIZE>::~Array()
{
for(int i=0; i<SEC_SIZE;i++)
    delete[] arr[i];

delete[] arr;
}



template<typename TYPE, int SIZE, int SEC_SIZE>
Array<TYPE, SIZE, SEC_SIZE>::Array()
        {
    arr = new TYPE* [SEC_SIZE];
        for(int i=0;i< SEC_SIZE;i++)
            arr[i]= new TYPE[SIZE];
        }



template<typename TYPE, int SIZE, int SEC_SIZE>
bool Array<TYPE,SIZE, SEC_SIZE>::check_array() 
{
    for(int j=0; j<SEC_SIZE; j++)
        {
        for(int i=0;i<SIZE;++i)
            {
                if(arr[j][i-1]>arr[j][i])
                {
                    std:: cerr << "Niepoprawnie posortowana tablica!"<< std::endl;
                    exit(EXIT_FAILURE);
                }
            }
        }      
    std::cout <<"Tablica posortowana poprawnie!" << std::endl;
    return true; 
}



template<typename TYPE, int SIZE, int SEC_SIZE>
void Array<TYPE,SIZE, SEC_SIZE>::separate_and_merge(int begin, int middle, int end, int count, TYPE** arr1, TYPE** arr2)
    {   

    int size_left = middle-begin+1; //rozmair lewej podtablicy
    
    int size_right = end-middle; // rozmiar prawej podtablicy
    
  
    for(int i=0;i<size_left; i++)
    {
        arr1[count][i]=arr[count][begin+i];
    }
    

    for(int j=0;j<size_right;j++)
    {
        arr2[count][j]=arr[count][j+middle+1];
        
    }
  

            //scalenie wartosci 2 podtablic w 1 tablice
            int i=0;
            int j=0;
            int begin1 = begin; //aktualny indeks scalanej tablicy

        while(i<size_left && j<size_right)
            {
                if(arr1[count][i]<arr2[count][j])
                    {
                        arr[count][begin1]=arr1[count][i];
                        
                        i++;
                    }        
                        else
                            {
                                arr[count][begin1]=arr2[count][j];
                                j++;
                                
                            }
                begin1++;
                
            }



        while(i<size_left)
            {
                arr[count][begin1]=arr1[count][i];
                i++;
                begin1++;
            }
              

    while(i<size_right)
            {
                arr[count][begin1]=arr2[count][i];
                j++;
                begin1++;
        }

    }



template<typename TYPE, int SIZE, int SEC_SIZE>
void Array<TYPE,SIZE, SEC_SIZE>::merge_sorting(int begin,int end, TYPE** arr1, TYPE** arr2)
{


            if(begin < end)
                {   
                    int middle = (begin+end)/2; // srodek tablicy   
                    merge_sorting(begin,middle, arr1,  arr2);
                    merge_sorting(middle+1,end, arr1,  arr2);
                        for(int count=0;count<SEC_SIZE; count++)
                    separate_and_merge(begin,middle,end,count,  arr1,  arr2);
                }   
          

}




template<typename TYPE, int SIZE, int SEC_SIZE>
void Array<TYPE,SIZE, SEC_SIZE>::quickSort(int begin, int end, int count)
{

        
int middle = (begin+end)/2;
int pivot = arr[count][middle]; //wartosc srodka
int j = begin;
int marker = end;
int tmp;
//podpisanie pod tablice orginalnej tablicy


while(j<=marker)
    {
        while(arr[count][marker]>pivot) //szuka mniejszej na prawo od pivota
            marker--;
                while(arr[count][j] < pivot ) //szuka wiekszej wartosci na lewo od pivota
                        j++;     
                    if(j<=marker)  //zamienia wyszukane wartosci miejscami
                     {
                        tmp=arr[count][marker];
                        arr[count][marker]=arr[count][j];
                        arr[count][j]=tmp;
                        marker--;
                        j++;
                     }
    }

if(begin < marker) 
quickSort(begin, marker, count); //rekurencyjne wywolanie dla lewej strony od piwota
if(j < end)
quickSort(j, end, count); //rekurencyjne wywolanie dla prawej strony od piwota
}

template<typename TYPE, int SIZE, int SEC_SIZE>
void Array<TYPE,SIZE, SEC_SIZE>::ShellSort(int count)
{
    int distance=SIZE/2;
    int d_tmp;
    int j;
    int tmp;
    while(distance>0)
    {
        d_tmp=distance;
        while( d_tmp<SIZE)      
        {
            tmp=arr[count][d_tmp];
            for(j=d_tmp ; j>=distance && arr[count][j-distance]>tmp;j=j-distance)
                {
                arr[count][j]=arr[count][j-distance];                
                }
            arr[count][j]=tmp;
            d_tmp++;
        }
        distance = distance/2;
    }
}  

/*
template<typename TYPE, int SIZE, int SEC_SIZE>
void Array<TYPE,SIZE, SEC_SIZE>::ShellSort(int begin, int end,int count)
{

int tmp;
int distance=end/2;
int i=begin;
int j = end;
int middle = (begin+end)/2;

while(distance>0)
    {       
    while(i+distance<end)
            {       
                if(arr[count][i]>arr[count][i+distance])
                    {
                    tmp = arr[count][i];
                        arr[count][i] = arr[count][i+distance];
                            arr[count][i+distance] = tmp;
                      
                        while(i-distance>=begin && arr[count][i]<arr[count][i-distance])
                            {
                            tmp = arr[count][i];
                                arr[count][i] = arr[count][i-distance];
                                    arr[count][i-distance] = tmp;
                                        i--;  
                            }
                       i++;   

                    }
                    else
                        i++;
            }
            distance = distance/2;
        i = begin;
    }
}

*/

template<typename TYPE, int SIZE, int SEC_SIZE>
void Array<TYPE,SIZE, SEC_SIZE>::DisplayArray()
{
 for(int j=0; j<SEC_SIZE; j++)
        {   
for(int i=0;i<SIZE;i++)
    {
        std:: cout << arr[j][i] << std::endl;
    } 
     std::cout << std::endl;
     if(j!=SEC_SIZE-1)
     std::cout << "Nastepna podtablica: " << std::endl;
        }  
}



template<typename TYPE, int SIZE, int SEC_SIZE>
void Array<TYPE,SIZE, SEC_SIZE>::getRandomArray() 
    {
        
        srand(time(NULL));
  for(int j=0; j<SEC_SIZE; j++)
            {      
    for(int i=0; i<SIZE; i++)
        {
            arr[j][i]= (std::rand() % 100) +1;
        }         
            }   
    }



template<typename TYPE, int SIZE, int SEC_SIZE>
void Array<TYPE,SIZE, SEC_SIZE>::reverse_array() 
{

int i=0;
int k=SIZE-1;
int middle = SIZE/2;

for(int j=0;j<SEC_SIZE;j++)
    {
        int i=0;
        int k=SIZE-1;
            while(k>=middle && i<middle)
                {
                    std::swap(arr[j][i],arr[j][k]);
                    k--;
                    i++;
                }
        
    }
}




template<typename TYPE>
void DeleteArray(TYPE** arr_, const int size2)
{
for(int i=0; i<size2;i++)
    delete[] arr_[i];

delete[] arr_;

}



template<typename TYPE> 
TYPE** CreateArray(const int size, const int size2)
{

int** arr_;
arr_ = new int*[size2];
        for(int i=0;i< size2;i++)
            arr_[i]= new int[size];

return arr_;
}































