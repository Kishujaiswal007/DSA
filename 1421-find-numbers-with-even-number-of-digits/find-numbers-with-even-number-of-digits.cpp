class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        for(int num : nums){
            int digits=0;
            int x=num;
            while(x>0){
                digits++;
                x=x/10;
            }
            if(digits%2==0){
                cnt++;
            }
        }return cnt;
    }
};