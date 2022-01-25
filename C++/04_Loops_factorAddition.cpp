//addition of multiple 2,3,5 using loops
#include <iostream>

using namespace std;

int main()
{
    
    int i,a=0,b=0,c=0;
    for(i=1; i<=20; i++)
    {
        if(i%2==0)
            a=a+i;
           if(i%3==0)
                b=b+i;
                    if(i%5==0)
                        c=c+i;
    }
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c;
    
    
   
    return 0;
}
