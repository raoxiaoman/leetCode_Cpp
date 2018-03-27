#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;
struct compartor{
    bool operator()(const string &s1,const string &s2) const{
        return s1.size() == s2.size()?s1<s2:s1.size() < s2.size();
    }
};
class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            string ret = "";
            if(strs.size()==0){
                return "";
            }
            set<string,compartor> sets;
            bool istrue = true;
            for (auto i : strs) {
                sets.insert(i);
            }
            auto iter = sets.begin();
            ret = *iter;
            for(;iter!=sets.end();iter++){
                if((*iter).find_first_of(ret)==string::npos){
                    istrue = false;
                }

            }
            string last =*(++sets.begin());

            if(istrue){
                return last.substr(0,ret.size());
            }else{
                return "";
            }

        }
};

int main(int argc, char *argv[])
{
    Solution s;
    vector<string> strs = {"ab","abc","abcd","a"};
    cout << s.longestCommonPrefix(strs) << endl;
    return 0;
}
