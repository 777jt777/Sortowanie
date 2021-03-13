#include "tablica.h"
#include <iostream>

template<typename TYPE, int SIZE>
Array<TYPE, SIZE>::Array()
        {
    arr = new TYPE[SIZE];
        }

template<typename TYPE, int SIZE>
void Array<TYPE,SIZE>::separate_and_merge(int begin, int end)
    {   
    int size_left = middle-begin+1; //rozmair lewej podtablicy
    int size_right = end-middle; // rozmiar prawej podtablicy

    int* arr1 = new int[size_left]; // inicjacja tablic
    int* arr2 = new int[size_right];

/* proba pierwsza, do testow
            // podpisanie wartosci pod tablice
    for(int i=0;i<size_left; i++)
        arr1[i]=arr[begin+i];
    for(int j=end;i<size_right;j--)
        arr2[i]=arr[middle+j+1];
                                   */

            //scalenie wartosci 2 podtablic w 1 tablice
            int i=0;
            int j=0;
            int begin1 = begin;
        while(i<size_left && j<size_right)
            {
                if(arr1[i]<=arr2[j])
                    {
                        arr[begin1]=arr1[i];
                        i++;
                    }        
                        else
                            {
                                arr[begin1]=arr2[j];
                                j++;
                            }
            }
         begin1++
    }

template<typename TYPE, int SIZE>
void Array<TYPE,SIZE>::merge_sorting(int begin, int end, TYPE Array[])
    {
        if(begin < end)
            {   
                int middle = (begin+end)/2; // srodek tablicy   
                    
                


            }   
    }

template<typename TYPE, int SIZE>
TYPE* Array<TYPE,SIZE>::getRandomArray() 
    {
        srand(time(NULL));
    for(int i=0; i<SIZE; i++)
        {
            arr[i]= std::rand();
        }         
        return arr; //zwraca adres poczatku tablicy
    }


template<typename TYPE, int SIZE>
TYPE* Array<TYPE,SIZE>::getRevesedArray()
    {

        return arr; 
    }

template<typename TYPE, int SIZE>
TYPE* Array<TYPE,SIZE>::getArray_25()
    {

        return arr; 
    }
    template<typename TYPE, int SIZE>
TYPE* Array<TYPE,SIZE>::getArray_50()
    {

        return arr; 
    }
    template<typename TYPE, int SIZE>
TYPE* Array<TYPE,SIZE>::getArray_75()
    {

        return arr; 
    }
    template<typename TYPE, int SIZE>
TYPE* Array<TYPE,SIZE>::getArray_95()
    {

        return arr; 
    }
    template<typename TYPE, int SIZE>
TYPE* Array<TYPE,SIZE>::getArray_99()
    {

        return arr; 
    }
    template<typename TYPE, int SIZE>
TYPE* Array<TYPE,SIZE>::getArray_99_7()
    {

        return arr; 
    }

