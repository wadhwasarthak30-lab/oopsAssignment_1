#include <iostream>
using namespace std;

/*Q8. Implement namespace in a program to illustrate the use of same name variables and
      functions in different sections/libraries of the code.*/

namespace A
{
    int x = 10;

    void display()
    {
        cout << "Namespace A" << endl;
        cout << "x = " << x << endl;
    }
}

namespace B
{
    int x = 20;

    void display()
    {
        cout << "Namespace B" << endl;
        cout << "x = " << x << endl;
    }
}

int main()
{
    A::display();
    B::display();

    cout << "Value of A::x = " << A::x << endl;
    cout << "Value of B::x = " << B::x << endl;

    return 0;
}