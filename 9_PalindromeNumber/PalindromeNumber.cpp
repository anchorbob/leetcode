#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int tail;
		int result = 0;
		int tmp = x;
		while(tmp>0) {
		    tail = tmp % 10;
		    result = result*10 + tail;
		    tmp/= 10;
		}
		return (result == x ? true : false);
    }
};