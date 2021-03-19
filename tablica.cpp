#include "tablica.h"
#include <iostream>
#include <stdlib.h>


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

    bool is_truth=true;
    for(int j=0; j<SEC_SIZE; j++)
        {
        for(int i=0;i<SIZE;i++)
            {
                if(arr[j][i]<=arr[j][i+1])
                    is_truth;
                        else
                            {
                                std::cerr <<"Zle posortowana tablica!";
                                is_truth = !is_truth;
                                exit(EXIT_FAILURE);
                            }
            }
        }
    return is_truth;
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
void Array<TYPE,SIZE, SEC_SIZE>::quickSort(int begin,int end)
{
int pivot = end;


}


template<typename TYPE, int SIZE, int SEC_SIZE>
void Array<TYPE,SIZE, SEC_SIZE>::divideArray(int begin, int end)
{





}





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
    int size = SIZE-1;
    TYPE tmp[SEC_SIZE][SIZE];    //tymczasowa tablica


    for(int j=0; j<SEC_SIZE; j++)
            {    
                for(int i=0;i<SIZE;i++) //podpisanie wartosci do tamczasowej tablicy
                    tmp[j][i]=arr[j][i];
            }

        for(int j=0; j<SEC_SIZE; j++)
        {
                    for(int i=0;i<SIZE;i++)
                        {
                            arr[j][i]=tmp[j][size];
                                size--;
                        }
        }
}





































