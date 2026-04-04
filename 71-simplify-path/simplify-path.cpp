class Solution {
public:
    string simplifyPath(string path) {
        vector<string>v;
        for(int i=0;i<path.length();i++){
            if(path[i]=='/'){
                continue;
            }
            string temp="";
            while(i<path.length() && path[i]!='/'){
                temp+=path[i];
                i++;
            }
            if(temp=="."){
                continue;
            }
            else if(temp==".."){
                if(!v.empty()){
                    v.pop_back();
                }
            }
            else{
                v.push_back(temp);
            }
        }
        string res="";
        for(int i=0;i<v.size();i++){
            res+='/';
            res+=v[i];
        }
        if (res.empty()){
            return "/";
        }
        else{
            return res;
        }
    }
};