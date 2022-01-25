#include <iostream>
using namespace std;
int main()
{
    int a,b,z;
    cout<<"Please enter values for cal...";
    cin>>a>>b;
    cout<<
        "Enter 1 for addition: \n"
        "Enter 2 for subtraction: \n"
        "Enter 3 for multiplication \n"
        "Enter 4 for division: \n"
        "Enter 5 to check which one is greater: \n"
        "Enter 6 to see which one is odd and which one is even: \n";
        "Enter 7 to print table of any number : \n";
    int choice;
    cin>>choice;
    switch (choice)
    {
    case 1:
        z = a + b;
        break;
    case 2:
        z = a - b;
        break;
    case 3:
        z = a * b;
        break;
    case 4:
        z = a / b;
    case 5:
        if (a>b)
        {
            cout<<"Greater value : "<<a;
        }
        else
            cout<<"Greater value : "<<b;
    case 6:
        if (a % 2 == 0)
        {
            cout<<"A is Even: "<<a;
        }
            else 
            cout<<"A is Odd : "<<a;
        
        if (b % 2 == 0)
        {
            cout<<"B is Even: "<<b;
        }
            else 
            cout<<"B is Odd : "<<b;
    
        
        
    default:
        break;
    }
    
    cout<<"Output"<<z;
    return 0;
}