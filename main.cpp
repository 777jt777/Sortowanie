#include <iostream>
#include "cstdlib"
#include "memory"
#include "tablica.cpp"


int main(){

const int size=100;

Array<int,size> tmp;
int* array= tmp.getRandomArray();
for(int i=0;i<size;i++)
    {
        if(i%10)
        std::cout << i << " " ;
        else
        std:: cout << i << std::endl;
    }   


    return 0;
}




