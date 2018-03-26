#include <iostream>
using namespace std;
class Solution {
    public:
        int reverse(int x) {
            long long ret = 0;
            while(x){
                ret = x%10+ret*10;
                x = x/10;
            }
            return (ret < INT32_MIN || ret > INT32_MAX)?0:ret;
        }
};
int main(int argc, char *argv[])
{
    Solution s;
    int ret = s.reverse(-120);
    cout << ret << endl;
    return 0;
}
