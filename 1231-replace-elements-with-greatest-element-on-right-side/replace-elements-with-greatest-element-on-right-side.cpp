class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxCurr=-1;
        for(int i=arr.size()-1;i>=0;i--){
            int curElem=arr[i];
            arr[i]=maxCurr;
            if(curElem>maxCurr)
            {maxCurr=curElem;}

        }return arr;
    }
};