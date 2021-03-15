class Solution {
public:
  
    bool isAnagram(string s, string t) {
    /*We could also do this using hash maps <char,int>
    where for each char value we could increament or decreamet the corresponding value in and if at the end we get
    each key with 0 value then the given string t is anagram of s 
    but since the question says that we only have lowercase letter we can use array*/
     
        if (s.length() != t.length()) //if length of t string is not equal to length of string s then it cannot be valid angram of the string
          return false;
        int n = s.length();
        int counts[26] = {0};//creating array for 26 lowercse english alphabets
        for (int i = 0; i < n; i++) { 
       
            counts[s[i] - 'a']++;//increament the index s[i]-'a' (For example s[i]='a' in this case 'a'-'a' =0 hence 0th index is increament
          
            counts[t[i] - 'a']--;//in this case we decreament to maintain balance such that if both the strings have this letter they end up setting counter 0
        }
        for (int i = 0; i < 26; i++){
            if (counts[i])//we traverse the array and even if a single non zero index value found then the given string is not an valid anagram 
                return false;//we return false
    
    }
    return true;
  }
    
};
