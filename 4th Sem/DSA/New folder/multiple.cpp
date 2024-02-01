
//multilevel Inheritance in C++ Programming

#include <iostream>
#include <conio.h>

using namespace std;

class A
{
  public:
    void display()
    {
        cout <<"This is method of A";
    }
};

class B
{
  public:
    void display()
    {
        cout <<"This is method of B";
    }
};

class C: public A, public B

{
  public:
};

int main()
{
    C sample;
    sample.display();  /*causes ambiguity*/
    getch();
    return 0;
}