
template<typename TYPE, int SIZE> 
class Array
{
private:

TYPE* arr;

public:

void separate_and_merge(int begin , int end); // podzial i scalenie tablicy
void merge_sorting(int begin, int end, TYPE Array[]); //funkcja sortowania
TYPE* getRandomArray(); //funkcja wpisujaca liczby losowe do tablicy
TYPE* getRevesedArray(); //funkcja wpisujaca liczby w odwrotnej kolejnosci do kolejnosci sortowania
TYPE* getArray_25(); //funkcja wpisujca liczby w 25 % posortowanych
TYPE* getArray_50(); //funkcja wpisujca liczby w 50 % posortowanych
TYPE* getArray_75(); //funkcja wpisujca liczby w 75 % posortowanych
TYPE* getArray_95(); //funkcja wpisujca liczby w 85 % posortowanych
TYPE* getArray_99(); //funkcja wpisujca liczby w 99 % posortowanych
TYPE* getArray_99_7(); //funkcja wpisujca liczby w 99,7 % posortowanych


void sort(); //algorytm sortowania

Array(); //konstruktor bezparametryczny

};
