#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution_normal{
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        for (size_t i = 0; i < nums.size(); ++i){
            for(size_t j=i+1;j<nums.size();j++){
                if(target == (nums[i]+nums[j])){
                    ret.push_back(i);
                    ret.push_back(j);
                    break;
                }

            }
            if(ret.size()>0){
                break;
            }
        }
        return ret;
    }
};

struct more{
    int num;
    int index;
};
bool compare(struct more a, struct more b){
    return (a.num < b.num);
}

class Solution{
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> ret;
            vector<struct more> temps;
            struct more temp;

            for (size_t i = 0; i < nums.size(); ++i) {
                temp.num = nums[i];
                temp.index = i;
                temps.push_back(temp);
            }
            sort(temps.begin(),temps.end(),compare);
            int i = 0,j=temps.size()-1;
            while(i<j){
                if(target>(temps[i].num+temps[j].num)){
                    i++;
                }
                else if(target<(temps[i].num+temps[j].num)){
                    j--;
                }else {
                    ret.push_back(temps[i].index);
                    ret.push_back(temps[j].index);
                    break;
                }
            }
            return ret;
        }


};

int main(int argc, char *argv[])
{
    vector<int> nums ={5,2,3,4};
    Solution s;
    vector<int> ret = s.twoSum(nums, 9);
    for (auto i : ret) {
        cout << i << endl;
    }
    return 0;
}



