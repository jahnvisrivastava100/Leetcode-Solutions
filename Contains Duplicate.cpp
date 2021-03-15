class Solution {
public:
bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, bool> myMap;//here creating map with key value of type int and value of bool
    // unordered_map<int, bool> myMap;
    for (auto& num: nums) {
        if (myMap.find(num) != myMap.end())//if we are able to find an element with that key value then we return true
            return true;
        else
            myMap[num] = true;//else if we are not able to find the value for that key we set the value to true(which in a way tell that this has been visited)
    }
    return false;//if throughout we are not able to find one which is visited twice we return false
}

};
