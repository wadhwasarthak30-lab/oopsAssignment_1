#include <iostream>
using namespace std;

/*Q4 Create a structure in C++ containing the details of Students as details below and a
        main function to execute the structure.
        
        Data Members(properties):
            Name
            Roll No
            Degree
            Hostel
            CurrentCGPA

        Member Function(behavior):
            addDetails();
            updateDetails();
            updateCGPA();
            updateHostel();
            displaydetails();*/

struct Student
{
    string name;
    int roll_no;
    string degree;
    string hostel;
    float cgpa;


    void addDetails(string name, int roll_no, string degree, string hostel, float cgpa)
    {
        this->name = name;
        this->roll_no=roll_no;
        this->degree=degree;
        this->hostel=hostel;
        this->cgpa=cgpa;
    }

    void updateDetails(string a, int b, string c, string d, float f)
    {
        name = a;
        roll_no = b;
        degree = c;
        hostel = d;
        cgpa =  f;

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

    s1.updateDetails("Suhana",2026010107, "Pass", "Hostel Q", 9.0);
    s1.displayDetails();

    s1.updateCgpa(10);
    s1.displayDetails();

    s1.updateHostel("Hostel S");
    s1.displayDetails();

    return 0;
}