// program to add even and odd numbers
#include <iostream>

using namespace std;

int main()
{
    
    int i,even=0,odd=0;
    for(i=1; i<=6; i++)
    {
        if(i%2==0)
        even=even+i;
        else
        odd = odd+i;
    }

    cout<<even<<endl;
    cout<<odd;
    return 0;
}
