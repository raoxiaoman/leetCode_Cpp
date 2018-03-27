#include <iostream>
using namespace std;
class Solution {
    public:
        bool isPalindrome(int x) {
            if(x<0|| (x!=0 &&x%10==0)) return false;
            int y = reverse(x);
            return y==x?true:false;
        }

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
    int num = -2147447412;
    Solution s;
    cout << INT32_MIN << endl;
    cout << s.reverse(num) << endl;
    return 0;
}
