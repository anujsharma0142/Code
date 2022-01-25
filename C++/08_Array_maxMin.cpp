#include <bits/stdc++.h>
using namespace std;
int main()
{   
    
    vector <int> nums = {4,2,3,12,5,1,10,19};
    int i, min=nums[0], max=nums[0];
    for(i=0; i<nums.size(); ++i)
    {
            if(max<nums[i])
            max = nums[i];
        
         if(min>nums[i])
            min = nums[i];
        
    }
    cout<<max<<endl;
    cout<<min;
    
    return 0;
}