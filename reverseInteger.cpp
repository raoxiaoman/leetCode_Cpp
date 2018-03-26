#include <iostream>
using namespace std;
class Solution {
    public:
        int reverse(int x) {
            int ret = 0;
            int y = abs(x);
            while(y > 0){
                ret=(y%10)+ret*10;
                y = y/10;
            }

            return x>0?ret:-ret;
        }
};
int main(int argc, char *argv[])
{
    Solution s;
    int ret = s.reverse(-120);
    cout << ret << endl;
    return 0;
}
