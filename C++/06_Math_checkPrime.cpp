//Define a function to find out if number is prime or not.

#include <iostream>
using namespace std;
void prime(int n)
{   bool isPrime = true;
    for (int i=2; i<n; ++i) {
        if (n%i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true) cout<<"Prime number";
    else cout<<"Not a Prime number";

}

int main()
{
    int a;
    cout<<"Please enter number for checking prime or not :";
    cin>>a;
    prime(a);
    return 0;
    }