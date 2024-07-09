// https://leetcode.com/problems/unique-number-of-occurrences/
// unique no. of occurence

// counting the frequency of each element and storing it in array
// comapring the stored count

/*class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int>c;
        int count=1;
        for(int i=1;i<arr.size();i++){
            if (arr[i]==arr[i-1]){
                count++;
            }
            else {
                c.push_back(count);
                count=1;
            }
        }
        c.push_back(count);        //suppose an array:2,2,3,3 here after the last 3 the count=2, the i gets incremented and loop condition met so it get stored by this statement, and if extra element 4 is there in array the count gets stored by above else condition and the count of 4 will get calculated here as loop reaches its upper bound
        sort(c.begin(), c.end());
        for(int i=1; i<c.size();i++){
            if (c[i]==c[i-1]){
                return false;
            }
        }
        return true;
    }
};*/