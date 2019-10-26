#include <string>
#include <iostream>
using namespace std;

class SortStrategy
{
    public:
        SortStrategy() { }
        virtual ~SortStrategy() { }
 
        virtual void Sort(string* array, int size) = 0; // virtualmente pura
};
 
class QuickSortStrategy : public SortStrategy
{
    public:
        QuickSortStrategy() { }
        virtual ~QuickSortStrategy() { }
 
        virtual void Sort(string* array, int size)
        {
            QuickSort(array, size-1, 0);
        }
 
    private:
        void QuickSort(string* array, int top, int bottom)
        {
            int middle;
         
            if (top < bottom)
            {
                middle = Partition(array, top, bottom);
                QuickSort(array, top, middle); //sí, estamos empleando recursión
                QuickSort(array, middle+1, bottom); 
            }
        }
 
        int Partition(string* array, int top, int bottom)
        {
            string x = array[top];
            int i = top - 1;
            int j = bottom + 1;
            string temp;
 
            do
            {
                do { j--; } while ( x.compare(array[j]) > 0);
                do { i++; } while ( x.compare(array[i]) < 0);
 
                if (i < j)
                { 
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            } while (i < j);    
      
            return j;           
        }
};
 
class BubbleSortStrategy : public SortStrategy
{
    public:
        BubbleSortStrategy() { }
        virtual ~BubbleSortStrategy() { }
 
        virtual void Sort(string* array, int size)
        {
          
            int i;
            int j;
            string aux_elem;
            int movs;
 
            movs = 0;
 
            for (int i = 0; i < size - 1; i++)
            {
                for (j = i+1; j < size; j++)
                {
                    if (array[i] > array[j])
                    {   
                        aux_elem = array[i];
                        array[i] = array[j];
                        array[j] = aux_elem;
                        movs++;
                    }
                }
            }
        }
};
 
class InsertionSortStrategy : public SortStrategy
{
    public:
        InsertionSortStrategy () { }
        virtual ~InsertionSortStrategy () { }
 
        virtual void Sort(string* array, int size)
        {
            // implementamos el insertion sort
            int i, j, min;
            string str;
 
            for (i = 0; i < size-1; i++)
            {
                min = i;
                for (j=i+1 ; j < size ; j++){
                	if (array[j] < array[min])
                		min = j;
                }
               
	            str = array[i];
	            array[i] = array[min];
	            array[min] = str;
            }
        }
};
 
class Names
{
    private:
        string* _names;
        int _size;
        SortStrategy* _strategy;
 
    public:
        Names(int size, SortStrategy* strategy) 
        { 
            _size = size; _names = new string[size]; 
            _strategy = strategy; 
        }
 
        ~Names() { delete [] _names; delete _strategy; }
 
        inline int GetSize() const { return _size; }
        string& GetAt(int index) { return _names[index]; }
        string& operator[] (int index) { return GetAt(index); }
 
        void PrintNames(ostream& stream)
        { 
            _strategy->Sort(_names, _size);
            for (int i = 0; i < _size; i++) 
                stream << i << _names[i] << endl;
        } 
};

int main()
{
    SortStrategy* strategy;
    int opt;
 
    cout << "Seleccione una opcion" << endl;
    cout << "1. QuickSort" << endl;
    cout << "2. Metodo de la burbuja" << endl;
    cout << "3. Metodo de insercion" << endl;
    cin >> opt;
 
    switch (opt)
    {
        case 1:
            strategy = new QuickSortStrategy(); break;
 
        case 2:
            strategy = new BubbleSortStrategy(); break;
 
        case 3:
            strategy = new InsertionSortStrategy(); break;
 
        default:
            cout << "Opcion invalida, se usara QuickSort." << endl;
             strategy = new QuickSortStrategy();
            break;
    }
 
    Names names(5,strategy); 
    names[0] = "Fernando";
    names[1] = "Catalina";
    names[2] = "Eduardo";
    names[3] = "Tania";
    names[4] = "Andres";
    names.PrintNames(cout);
 
    return 0;
}

