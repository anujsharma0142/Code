class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    int index;
    int n= digits.size()-1;
    if(digits[n]==9){
        index=n;
        while(digits[index]==9)
        {
            digits[index]=0;
            index--;

            if(index==-1){
                break;
            }
        }
            if(index == -1)
            {
                digits.insert(digits.begin(),1);

            }
            else{
                digits[index]+=1;
            }
    }
        else{
            digits[n]+=1;
    }
        return digits;
        }
};