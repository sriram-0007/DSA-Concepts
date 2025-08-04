//concepts if opening bracket is >0 push '('
//and closing can be pushed only when closing brackets are more than opening brackets;



class Solution {
public:
    void solve(int o,int c,string& s,vector<string>&ans){
        if(o==0 && c==0){
            ans.push_back(s);
            return;
        }
        if(o>0){
            s.push_back('(');
            solve(o-1,c,s,ans);
            s.pop_back();
        }
        if(c>o){
            s.push_back(')');
            solve(o,c-1,s,ans);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        vector<string> ans;
        solve(n,n,s,ans);
        return ans;
    }
};