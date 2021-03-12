#include "tablica.h"
#include <iostream>

template<typename TYPE, int SIZE>
Array<TYPE, SIZE>::Array()
        {
    arr = new TYPE[SIZE];
        }

template<typename TYPE, int SIZE>
void Array<TYPE,SIZE>::merge(int begin, int end)
    {   
    int middle = (begin+end)/2; // srodek tablicy 
    int* arr1 = new int[SIZE];
    int* arr2 = new int[SIZE];

    if(middle-begin>1)
        merge(begin,middle-1); //koncowy przypadek: middle=1
    if(end-middle>0) //bo middle =1
        merge(middle,end); 
        






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

