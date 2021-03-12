#include <iostream>
#include "cstdlib"
#include "tablica.cpp"


int main(){

const int size=10;

Array<int,size> tmp;
int* array = tmp.getRandomArray();
for(int i=0;i<size;i++)
    {
        if(i%10)
        std::cout << array[i] << " " ;
        else
        std:: cout << array[i] << std::endl;
    }   








    return 0;
}




