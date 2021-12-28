#include <iostream>
using namespace std;

class Array
{
private:
    int *A;
    int size;
    int length;
    void swap(int x, int y);

public:
    Array()
    {
        size = 10;
        length = 0;
        A = new int[size];
    }
    ~Array()
    {
        delete[] A;
    }

    void Display();
    void Append(int x);
    void Insert(int index, int x);
    int LinearSearch(int key);
    int BinarySearch(int key);
    int Get(int index, int x);
    int Max();
    int Min();
    int Sum();
    float Avg();
    void Reverse();
    void Reverse1();
    void InsertSort();
    void Rearrange();
    Array *Merge(Array *arr2);
    Array *Union(Array *arr2);
    Array *Intersection(Array *arr2);
    Array *Difference(Array *arr2);
};

void Array ::Display()
{
    cout << "\nElements are \n";
    for (int i = 0; i < length; i++)
    {
        cout << *A[i];
    }
}

void Array ::Append(int x)
{
    if (length < size)
    {
        A[length++] = x;
    }
}

void Array ::Insert(int index, int x)
{
    if (index >= 0 && index < size)
    {
        for (int i = length; i > index; i++)
        {
            A[i]=A[i-1];
        }
        A[index] = x;
        length++;
    }
}



int main()
{
    return 0;
}