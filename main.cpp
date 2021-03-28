#include <iostream>
#include "cstdlib"
#include "tablica.cpp"
#include <time.h>
#include <fstream>

int main(){
int num=0;
float a;
//std::ofstream Merge_file;
//std::ofstream Quick_file;

clock_t start,stop;
double czas;

const int size=1000000;
const int size2=100;

Array<int,size,size2> tmp;


//INTERFEJS UZYTKOWNIKA


while(1)
{
std::cout << std::endl;
std::cout <<"Wybierz opcje: "<< std::endl;
std::cout <<"1. Wczytaj losowa tablice"<< std::endl;
std::cout <<"2. Wczytaj czesciowo posortowana tablice"<< std::endl;
std::cout <<"3. Wczytaj odwrotnie posortowana tablice"<< std::endl;
std::cout <<"4. Wyswietl tablice"<< std::endl;
std::cout <<"5. Wykonaj algorytm mergesort"<< std::endl;
std::cout <<"6. Wykonaj algorytm quicksort"<< std::endl;
std::cout <<"7. Wykonaj algorytm shellsort"<< std::endl;
std::cout <<"8. Odwroc tablice"<< std::endl;
std::cout <<"9. Sprawdz poprawnosc tablicy"<< std::endl;
std::cout <<"10. Wyjdz z programu "<< std::endl;
std::cin >> num;
std::cout << std::endl;
switch(num)
  {
case 1:
tmp.getRandomArray();
std::cout << std::endl;
break;
case 2:
std::cout <<"Podaj procent tablicy ktora ma zostac posortowana: " << std::endl;
//std::cin >> a;
//a=a/100;
a=50;
a=a/100;
std::cout << std::endl;
tmp.getRandomArray();
for(int count=0;count<size2;count++)
        tmp.quickSort(0,a*size,count);
break;
case 3:
{
tmp.getRandomArray();
for(int count=0;count<size2;count++)
          tmp.quickSort(0,size-1, count);
tmp.reverse_array();
break;
}
case 4:
tmp.DisplayArray();
break;
case 5:
{
 //pierwsza tablica
int** arr1 = CreateArray<int>(size,size2);
 //druga tablica           
int** arr2 = CreateArray<int>(size,size2);
//operacje
  start = clock();
  tmp.merge_sorting(0,size, arr1, arr2);
  stop = clock();
  czas = (double)(stop-start)/CLOCKS_PER_SEC;
  std:: cout << "Czas operacji: " << czas << std::endl << std:: endl;

//usuniecie 1 tablicy
DeleteArray<int>(arr1,size2);
//usuniecie drugiej tablicy
DeleteArray<int>(arr2,size2);
break;
}
case 6:
{
    start = clock();
      for(int count=0;count<size2;count++)
          tmp.quickSort(0,size-1, count);
  stop = clock();
  czas = (double)(stop-start)/CLOCKS_PER_SEC;
  std:: cout << "Czas operacji: " << czas << std::endl << std:: endl;
 
break;
}
case 7:
{
    start = clock();
  for(int count = 0; count<size2; count++)
    tmp.ShellSort(count);
  stop = clock();
  czas = (double)(stop-start)/CLOCKS_PER_SEC;
  std:: cout << "Czas operacji: " << czas << std::endl << std:: endl;
  break;
 
}
case 8:
{
tmp.reverse_array();
break;
}
case 9:
{
tmp.check_array();
break;
}
case 10:
exit(1); 
  }
}







    return 0;
}






