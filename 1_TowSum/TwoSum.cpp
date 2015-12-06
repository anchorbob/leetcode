#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
      	map<int, int> map;
      	for (int i = 0; i < nums.size(); i++){
      		if (map.find(target - nums[i]) != map.end()){
      			result.push_back(map[target - nums[i]] + 1);
      			result.push_back(i + 1);
      			return result;
      			
      		} else {
      			map[nums[i]] = i;
      		}
      	}
    }
};

int main(void){
	vector<int> v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	Solution S;
	vector<int> ans = S.twoSum(v, 6);
	cout<< ans.size()<<endl;
	for (int i = 0; i < ans.size(); i++){
		cout<< ans[i];
	}
}