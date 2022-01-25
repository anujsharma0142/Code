// A person is elligible to vote if his/her age is greater than or equal to 18. 
//Define a function to find out if he/she is elligible to vote.
#include <iostream>

using namespace std;

int vote(int a)
{
    if(a>= 18)
        
            cout<<"Congrats you are Elegible for voting ";
        
        else
            cout<<"Go back your ass in your study things ";
            
            return a;
}


int main()
{
    
    int x,vot_age;
    cout<<"welcome our voting portal- Please enter your age : ";
    cin>>x;
    vot_age = vote(x);
    cout<<vot_age;
    return 0;
}
