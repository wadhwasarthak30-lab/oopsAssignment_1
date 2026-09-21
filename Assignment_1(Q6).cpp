#include <iostream>
using namespace std;

/*Q6. Create a code snippet that illustrates the following:
        a. Calling of private member functions inside public member function
        b. Access private member functions inside public member function */

class Student
{
    string name;
    int age;

    private:
    void updateDetails(string a, int b)
    {
        name = a;
        age = b;
    }

    public:
    void updateStudent()
    {
        updateDetails("Sarthak", 24);
    }

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main()
{
    Student s1;
    s1.updateStudent();
    s1.display();

    return 0;
}
