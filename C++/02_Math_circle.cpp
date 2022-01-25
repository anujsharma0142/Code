//find out the circumference and area of circle
#include <iostream>
using namespace std;
#define PI 3.14
    
    float circum(float r)
    {
        float res = 2*PI*r;
        return res;
    }
    float area(float r)
    {
        float res = PI*r*r;
        return res;
    }

int main() {
    
    float circ,r,ar;
    cin>>r;
    circ = circum(r);
    cout<<"Your Answer : "<<circ<<endl;
    ar = area(r);
    cout<<"Area of a circle : "<<ar;
    return 0;

}