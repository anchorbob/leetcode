#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n <= 1){
            return s;
        } 
        string ans;
        for (int i = 0; i < n; ++i){
            for(int j = 0; i+j<n && i-j>=0 && s[j+i] == s[i-j]; j++){
                if (2*j+1 > ans.size()){
                    ans = s.substr(i-j, 2*j+1);
                }
            }
            for(int j = 0; i-j>=0 && j+i+1<n && s[i-j] == s[i+j+1]; j++){
                if (2*j+2 > ans.size()){
                    ans = s.substr(i-j, 2*j+2);
                }
            }
        }
        return ans;
    }
};

int main(){
	Solution soln;
	cout << soln.longestPalindrome("abbbbfabbfbbbfabbbbfabbba") <<endl;
	return 0;
}