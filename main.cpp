#include <iostream>
#include "cstdlib"
#include "tablica.cpp"
#include <time.h>

int main(){
int num;




clock_t start,stop;
double czas;

const int size=100000;
const int size2=10;

Array<int,size,size2> tmp;

int** arr1;

arr1 = new int*[size2];
        for(int i=0;i< size2;i++)
            arr1[i]= new int[size];
int** arr2;

arr2 = new int*[size2];
        for(int i=0;i< size2;i++)
            arr2[i]= new int[size];

//INTERFEJS UZYTKOWNIKA


while(1)
{
std::cout << std::endl;
std::cout <<"Wybierz opcje: "<< std::endl;
std::cout <<"1. Podaj rozmiar tablicy"<< std::endl;
std::cout <<"2. Wczytaj losowa tablice"<< std::endl;
std::cout <<"3. Wyswietl tablice"<< std::endl;
std::cout <<"4. Wykonaj algorytm mergesort"<< std::endl;
std::cout <<"5. Odwroc tablice"<< std::endl;
std::cout <<"6. Sprawdz poprawnosc tablicy"<< std::endl;
std::cout <<"7. Wyjdz z programu "<< std::endl;
std::cin >> num;
std::cout << std::endl;
switch(num)
  {
case 1:
break;
case 2:
tmp.getRandomArray();
std::cout << std::endl;
break;
case 3:
tmp.DisplayArray();
break;
case 4:
start = clock();
tmp.merge_sorting(0,size, arr1, arr2);
stop = clock();
czas = (double)(stop-start)/CLOCKS_PER_SEC;
std:: cout << "Czas operacji: " << czas << std::endl << std:: endl;

for(int i=0; i<size2;i++)
    delete[] arr1[i];

delete[] arr1;

for(int i=0; i<size2;i++)
    delete[] arr2[i];

delete[] arr2;

break;
case 5:
tmp.reverse_array();
break;
case 6:
tmp.check_array();
break;
case 7:
exit(1);
  }
}

    return 0;
}






