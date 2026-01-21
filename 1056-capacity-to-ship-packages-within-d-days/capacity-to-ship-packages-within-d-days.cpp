class Solution {
public:
    int findDays(vector<int> &weights, int cap){
        int d=1, load=0;
        for(int i=0;i<weights.size();i++){
            if(weights[i] > cap) return d+1;
            if(weights[i]+load > cap){
                d++;;
                load=weights[i];
            }
            else{
                load += weights[i];
            }
        } return d;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high= accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            int noOfDays= findDays(weights,mid);
            if(noOfDays <= days){
                high=mid-1;

            }
            else{
                low=mid+1;
            }
        }return low;
    } 
};