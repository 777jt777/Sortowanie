

template<typename TYPE, int SIZE, int SEC_SIZE> 
class Array
{
private:

TYPE** arr;

public:

void DisplayArray();

void separate_and_merge(int begin, int middle, int end, int count, TYPE** arr1, TYPE** arr2); // podzial i scalenie tablicy

void merge_sorting(int begin, int end, TYPE** arr1, TYPE** arr2); //funkcja sortowania

void getRandomArray(); //funkcja wpisujaca liczby losowe do tablicy

void quickSort(int begin, int end, int count);

void ShellSort(int count);

void reverse_array();

bool check_array();

~Array(); //destruktor
Array(); //konstruktor bezparametryczny


};

template<typename TYPE> 
void DeleteArray(TYPE** arr_, const int size2);

template<typename TYPE> 
TYPE** CreateArray(const int size, const int size2);

















