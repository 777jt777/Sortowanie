#include <iostream>
#include "cstdlib"
#include "tablica.cpp"


int main(){

const int size=10;

Array<int,size> tmp;

tmp.getRandomArray();
tmp.DisplayArray();
std::cout << std::endl << std::endl << std::endl << std::endl ;
tmp.merge_sorting(0, size);
tmp.check_array();
tmp.DisplayArray();


    return 0;
}




