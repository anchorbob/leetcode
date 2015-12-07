#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int myAtoi(string str) {
        	int result;
            stringstream strStream;
            strStream<<str;
            if (str.size()==0)
              return 0;
            strStream>>result;
            return result;
    }
};
int main(){
	string s1 = "-12a46";
	string s2 = "2147483648";
	Solution soln;
	cout<<soln.atoi1(s1)<<" "<<soln.atoi1(s2)<<endl;
	return 0;
}