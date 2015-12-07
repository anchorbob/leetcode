#include <string>
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <climits>
using namespace std;
class Solution {
public:
    int reverse(int x) {
    	stringstream ss;
    	ss << x;
    	string xx = ss.str();
    	if (xx[0] == '-'){
    	    string as(xx.size()-1, '0');
    		for (int i = 0; i < xx.size()-1; ++i){
    			as[i] = xx[xx.size()-1-i];
    		}
    		if ((-1)*stol(as)< INT_MIN){
    			return 0;
    		} else {
    			return (-1)*stol(as);
    		}
    	}else {
    	    string as(xx.size(), '0');
    		for (int i = 0; i <xx.size(); ++i){
    			as[i] = xx[xx.size()-1-i];
    		}
    		if (stol(as) > INT_MAX)
    			return 0;
    		else {
    			return stol(as);
    		}
    	}
        
    }
};

int main(){
	Solution soln;
	//string s = "123";
	//int ss = stoi(s);
	//cout << ss <<endl;
	cout<<soln.reverse(1534236469)<<endl;
	cout<<soln.reverse(10)<<endl;
	return 0;
}