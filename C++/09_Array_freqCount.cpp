//count frequency of a number in array


#include <bits/stdc++.h>
using namespace std;
int count(vector <int> nums,int n)
{
    int zcount=0;
    for(int i =0; i<nums.size(); ++i)
    {
        if (nums[i]==n)
        zcount += 1;
    }
    return zcount;

}
int main(){
    vector <int> nums {1,2,1,2,3,5,8,6,1,1,1,1};
    int x = count(nums,1);
    cout<<x;
    return 0;
}
    
