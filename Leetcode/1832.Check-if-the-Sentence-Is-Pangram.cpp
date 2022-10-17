class Solution {
public:
    int arr[26];
    bool checkIfPangram(string sentence) {
        for(int i=0; i<sentence.length(); i++){
            arr[sentence[i] - 'a']++;
        }
        for(int i=0; i<26; i++){
           if(arr[i] == 0) return false;
        }
        return true;
    }
};
