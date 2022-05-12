#include <iostream>

template <class X>
class Stack
{
    private:
        X *tab;
        int top;
        int capacity;
    public:
        Stack(int size);
        ~Stack();
        void push(X elem);
        X pop();
        X peek();
        int size();
        bool isEmpty();
        bool isFull();
};

template <class X>
Stack<X>::Stack(int size): tab(new X[size]), capacity(size), top(-1) {};

template <class X>
Stack<X>::~Stack() { delete[] tab; };

template <class X>
void Stack<X>::push(X elem)
{
    if(isFull())
    {
        std::cout << "Overflow\n";
        return;
    }

    std::cout << "Inserting: " << elem << "\n";
    tab[++top] = elem;
};

template <class X>
X Stack<X>::pop()
{
    if(isEmpty())
    {
        std::cout << "Underflow\n";
        exit(0);
    }

    return tab[top--];
};

template <class X>
X Stack<X>::peek()
{
    if(!isEmpty())
    {
        return tab[top];
    }
    else
        exit(0);
}

template <class X>
int Stack<X>::size() { return top + 1; };

template <class X>
bool Stack<X>::isEmpty() { return top == -1; }

template <class X>
bool Stack<X>::isFull() { return top == capacity - 1; }

