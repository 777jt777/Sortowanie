#include "tablica.h"
#include <iostream>

template<typename TYPE, int SIZE>
Array<TYPE, SIZE>::Array()
        {
    arr = new TYPE[SIZE];
        }

template<typename TYPE, int SIZE>
Array<TYPE,SIZE> Array<TYPE,SIZE>::divideLeftArray()
    {   
       for(int i=0;i<SIZE/2;i++)
            
            




    }

template<typename TYPE, int SIZE>
Array<TYPE,SIZE> Array<TYPE,SIZE>::divideRightArray()
    {   
        int a = sizeof(arr)/sizeof(*arr); // zliczenie elementow tablicy
        a = a/2; //polowa tablicy
        int* tmp = arr[a]; //wskaznik na element polowy tablicy
        




    }



template<typename TYPE, int SIZE>
TYPE* Array<TYPE,SIZE>::getRandomArray() 
    {
        srand(time(NULL));
    for(int i=0; i<SIZE; i++)
        {
            arr[i]= std::rand();
        }   
        return arr; //zwraca adres pcozatku tablicy
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

