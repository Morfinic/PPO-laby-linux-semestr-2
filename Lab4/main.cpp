#include <iostream>
#include "include/stack.hpp"
#define tabSize 10

void tableFill(int *table, int size)
{
    for(int i = 0; i < size; i++)
    {
        table[i] = rand() % (100 - 1) + 1;
    }
}

void tableFill(char *table, int size)
{
    for(int i = 0; i < size; i++)
    {
        table[i] = rand() % (122 - 97) + 97;
    }
}

void tableFill(float *table, int size)
{
    for(int i = 0; i < size; i++)
    {
        table[i] = (rand() % (1000 - 100) + 100) / 10.0;
    }
}

template <class T>
void tablePrint(T *table, int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << table[i] << " ";
    }
    std::cout << "\n";
}

template <class T>
void bubbleSort(T *table, int size)
{
    T temp;

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(table[j] > table[j + 1])
            {
                temp = table[j];
                table[j] = table[j + 1];
                table[j + 1] = temp;
            }
        }
    }
}

template <class T>
int partition(T *table, int start, int end)
{
    int pivot = end;
    int j = start;

    for(int i = start; i < end; i++)
    {
        if(table[i] < table[pivot])
        {
            std::swap(table[i], table[j]);
            j++;
        }
    }
    std::swap(table[pivot], table[j]);
    return j;
}

template <class T>
void quickSort(T *table, int start, int end)
{
    if(start < end)
    {
        int pivot = partition(table, start, end);
        quickSort(table, start, pivot - 1);
        quickSort(table, pivot + 1, end);
    }
}

template <class T>
void insertionSort(T *table, int size)
{
    int i, key, j;

    for(i = 1; i < size; i++)
    {
        key = table[i];
        j = i - 1;
    
        while(j >= 0 && table[j] > key)
        {
            table[j + 1] = table[j];
            j = j - 1;
        }
        table[j + 1] = key;
    }
}

int main()
{
    srand(time(NULL));

    int intTab[tabSize];
    float floatTab[tabSize];
    char charTab[tabSize];

    tableFill(intTab, tabSize);
    std::cout << "Table of ints: \n";
    tablePrint<int>(intTab, tabSize);

    tableFill(floatTab, tabSize);
    std::cout << "Table of floats: \n";
    tablePrint<float>(floatTab, tabSize);

    tableFill(charTab, tabSize);
    std::cout << "Table of chars: \n";
    tablePrint<char>(charTab, tabSize);

    std::cout << "\n";

    insertionSort<int>(intTab, tabSize);
    std::cout << "Sorted table of ints: \n";
    tablePrint<int>(intTab, tabSize);

    bubbleSort<float>(floatTab, tabSize);
    std::cout << "Sorted table of floats: \n";
    tablePrint<float>(floatTab, tabSize);

    quickSort<char>(charTab, 0, tabSize - 1);
    std::cout << "Sorted table of chars: \n";
    tablePrint<char>(charTab, tabSize);

    std::cout << "\n\n";

    Stack<int> s1(5);
    s1.push(5);
    s1.push(4);
    s1.push(3);
    std::cout << "s1 top element: " << s1.peek() << "\n";
    std::cout << "s1 stack size: " << s1.size() << "\n";
    int temp{s1.pop()};
    std::cout << "s1 top element: " << s1.peek() << "\n";
    std::cout << "s1 stack size: " << s1.size() << "\n";
    std::cout << "Popped element: " << temp << "\n";
    s1.push(10);
    s1.push(11);
    s1.push(12);
    // Should overflow
    s1.push(13);
    std::cout << "s1 top element: " << s1.peek() << "\n";
    std::cout << "s1 stack size: " << s1.size() << "\n";

    Stack<char> s2(2);
    std::cout << "Is s2 empty: " << s2.isEmpty() << "\n";
    s2.push('s');
    s2.push('q');
    std::cout << "s2 top element: " << s2.peek() << "\n";
    std::cout << "s2 stack size: " << s2.size() << "\n";
    std::cout << "Is s2 full: " << s2.isFull() << "\n";
    s2.push('c');

    return 0;
}
