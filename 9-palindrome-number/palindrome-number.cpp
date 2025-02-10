class Solution {
public:
    bool isPalindrome(int x) {
        int dup=x;
        int sum=0;
        bool isNegative=(x<0);
        if(isNegative){
            return false;
        }else{
        while(x>0){
            int rem=x%10;
             if(sum>INT_MAX/10 || (sum==INT_MAX/10 && rem>7)){
                return 0;
                // break;
            }
            sum=(sum*10)+rem;
            x=x/10;
        }
        if(sum==dup){
            return true;
        }else{
            return false;
        }
        }
    }
};