#include "tablica.h"
#include <iostream>

template<typename TYPE, int SIZE>
Array<TYPE, SIZE>::Array()
        {
    arr = new TYPE[SIZE];
        }

template<typename TYPE, int SIZE>
void Array<TYPE,SIZE>::separate_and_merge(int begin,int middle,int end)
    {   

    int size_left = middle-begin+1; //rozmair lewej podtablicy
    int size_right = end-middle; // rozmiar prawej podtablicy


    TYPE arr1[size_left]; // inicjacja tablic
    TYPE arr2[size_right];

            // podpisanie wartosci pod tablice
    for(int i=0;i<size_left; i++)
    {
        arr1[i]=arr[begin+i];
        
    }

    for(int j=0;j<size_right;j++)
    {
        arr2[j]=arr[j+middle+1];
        
    }

                           for(int i=0;i<SIZE;i++)
                           {

                           }
            //scalenie wartosci 2 podtablic w 1 tablice
            int i=0;
            int j=0;
            int begin1 = begin; //aktualny indeks scalanej tablicy
        while(i<size_left && j<size_right)
            {
                if(arr1[i]<arr2[j])
                    {
                        arr[begin1]=arr1[i];
                        
                        i++;
                    }        
                        else
                            {
                                arr[begin1]=arr2[j];
                                j++;
                                
                            }
                begin1++;
                
            }


        while(i<size_left)
            {
                arr[begin1]=arr1[i];
                i++;
                begin1++;
            }
    while(i<size_right)
        {
            arr[begin1]=arr2[j];
            j++;
            begin1++;
        }

    }





template<typename TYPE, int SIZE>
void Array<TYPE,SIZE>::merge_sorting(int begin, int end)
    {
        if(begin < end)
            {   
                int middle = (begin+end)/2; // srodek tablicy   
                merge_sorting(begin,middle);
                merge_sorting(middle+1,end);
                separate_and_merge(begin,middle,end);
            }   
    }

template<typename TYPE, int SIZE>
void Array<TYPE,SIZE>::DisplayArray()
{
for(int i=0;i<SIZE;i++)
    {
        std:: cout << arr[i] << std::endl;
    }   
}


template<typename TYPE, int SIZE>
void Array<TYPE,SIZE>::getRandomArray() 
    {
        srand(time(NULL));
    for(int i=0; i<SIZE; i++)
        {
            arr[i]= (std::rand() % 100) +1;
        }         
        
    }

template<typename TYPE, int SIZE>
bool Array<TYPE,SIZE>::check_array() 
{
        for(int i=0;i<SIZE;i++)
            {
                if(arr[i]<=arr[i+1])
                    return true;
                    else
                        std::cerr <<"Zle posortowana tablica!";
                            return false;
            }
}





