#include <iostream>
using namespace std;

/*Q5 Differentiate between private and public access/scope. Perform the question no. 4
with class instead of structure with having the data members private and some
member functions in private scope and some in public scope.*/

class Student
{
    private:
    string name;
    int roll_no;
    string degree;
    string hostel;
    float cgpa;

    public:
    void addDetails(string name, int roll_no, string degree, string hostel, float cgpa)
    {
        this->name = name;
        this->roll_no=roll_no;
        this->degree=degree;
        this->hostel=hostel;
        this->cgpa=cgpa;
    }

    private:
    void updateDetails(string a, int b, string c, string d, float f)
    {
        name = a;
        roll_no = b;
        degree = c;
        hostel = d;
        cgpa =  f;

    }

    public:
    // Public function calling private function
    void updateStudent()
    {
        updateDetails("Suhana",2026010106,"Pass","Hostel Q", 9.0);
    }
    void updateCgpa(float f)
    {
        cgpa = f;
        cout <<"Updated Cgpa: " <<cgpa <<endl;
    }

    void updateHostel(string d)
    {
        hostel = d;
        cout<< "Updated Hostel: "<<hostel<< endl;
    }

    void displayDetails()
    {
        cout << "Name: "<< name <<"\nRoll Number: " <<roll_no <<"\nDegree: " <<degree <<"\nhostel: " <<hostel <<"\nCgpa: " <<cgpa << endl;
    }
};

int main()
{
    Student s1;
    s1.addDetails("Sarthak", 2026010106, "Pass","Hostel J", 8.0);
    s1.displayDetails();

    //Call Private updateDetails() indirectly
    s1.updateStudent();
    s1.displayDetails();

    s1.updateCgpa(10);
    s1.displayDetails();

    s1.updateHostel("Hostel S");
    s1.displayDetails();

    return 0;
}