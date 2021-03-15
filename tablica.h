
template<typename TYPE, int SIZE> 
class Array
{
private:

TYPE* arr;

public:

void DisplayArray();
void separate_and_merge(int begin,int middle,int end); // podzial i scalenie tablicy
void merge_sorting(int begin, int end); //funkcja sortowania
void getRandomArray(); //funkcja wpisujaca liczby losowe do tablicy
bool check_array();
Array(); //konstruktor bezparametryczny




};
