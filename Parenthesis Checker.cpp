
/*In this code using reverse approach instead of pushing the opening braces I am pushing closing braces for the opening ones 
like I ha {[()]}
{->}
[->]
(->)
now at the top of the atck their is currently ')' thi brace
and iteration in string  also reaches this position we hit default case where we pop that closing brace if condition in Line 24 not satisfied*/
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
   int  n = size(s);
    if(n==1||(n%2!=0)||s[0]=='}'||s[0]==']'||s[0]==')'){
        return false;
    }
    for(int i=0;i<n;i++){
        char c=s.at(i);
        switch(c){
            case '{':  stk.push('}'); break;
            case '[':  stk.push(']'); break;
            case '(':  stk.push(')'); break;
            default:
                if(stk.size() == 0 || c != stk.top()) return false;
                else stk.pop();
        }
    }
    return stk.size() == 0;
} 

};
