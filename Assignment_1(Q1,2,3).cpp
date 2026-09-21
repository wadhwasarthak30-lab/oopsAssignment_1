#include <iostream>
using namespace std;

int main(){
    /*Q1 Write a program (WAP) to display "Hello World" on console display. WAP to
        implement the following control characters:
        ‘\n’ is for new line, or you can use endl – cout<<endl<<“message”;
        ‘\t’ is for tab ; ‘\a’ is an alarm sound; ‘\r’ is carriage return to go to the beginning of
        the current line */

    cout<< "Hello World" << endl;

    cout<<"Sarthak"<<endl;

    cout<<"Wadhwa"<<'\n';

    cout<<"Hello"<< '\t' << "World" <<endl;

    cout<<"alarm sound"<< '\a' <<endl;

    cout<<"Hello\rbye"<<endl;


    /*Q2 Write a C++ program that will ask for a temperature in Celsius and display it in
        degree Fahrenheit.[F=9C/5+32]*/

    int cel, fahr;
    cout <<"Write down the temperature: "<<endl;
    cin >> cel;
    fahr = 9*cel/5+32;
    cout<< "Temperature in degree fahrenheit : "<<fahr<<endl;


    /*Q3 WAP to demonstrate for, while, do-while (with all possible variations), like for loop
        can be demonstrated without giving initialization in for construct or without giving
        increment in for construct.*/

    for(int i=0; i<=5;i++)  // for loop 
    {
        cout << i;
    }

    int a = 0;

    for(; a <= 5; a++)      // for loop without initialization
    {
        cout << a << " ";
    }

    int b = 0;
    for(;b<=10;)
    {
        cout<< b <<endl;  // for loop without incriment/decrement
        b++;
    }

    cout << endl;

    int j=10;
    while(j>=0)             // while loop
    {
        cout << j <<endl;
        j--;
    }

    int k=10;
    do                     // do-while loop
    {
        cout<<k <<endl;
        k--;
    }while(k>=0);


        
    return 0;
}

