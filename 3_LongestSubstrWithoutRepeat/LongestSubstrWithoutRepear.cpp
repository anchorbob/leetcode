#include <iostream>
#include <string>
#include <unordered_map>
#include <queue>
using namespace std;



//two pointer & vector solution
class Solution {
public:
   int lengthOfLongestSubstring(string s) {
        bool m[256] = {false};
        int rval = 0;
        int head = 0, tail = 0;
        for(int i = 0; i < s.length(); i++){
            if (!m[int(s[i])]){
                m[int(s[i])] = true;
                tail = i;
            } else {
                while(m[int(s[i])]){
                    m[int(s[head])] = false;
                    head++;
                }
                head++;
                tail = i;
            }
            rval = max(rval, tail-head+1);
        }
        return rval;
        
    }
};
int main(){
	Solution soln;
	cout << soln.lengthOfLongestSubstring("ianikjekfbfrllbau") <<" "<<soln.lengthOfLongestSubstring("bbbb") << endl;
	return 0;
}