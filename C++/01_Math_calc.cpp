// addition and multiplication using functions
#include <iostream>
using namespace std;

    int add(int a, int b)
    {
        int res =  a + b ;
        return res;
    }

    int multi(int a, int b)
    {
        int res = a * b;
        return res;
    }
    

int main()
{
    int ad,mult;
    int x,y;
    cin>>x>>y;
    ad = add (x,y);
    cout<<"Addition of two number : "<<ad<<endl;
    mult = multi(x,y);
    cout<<"Multiplication of two numbers : "<<mult;
    return 0;
}
