#include <iostream>

using namespace std;
int main(){
    int l = 0;
    int  r = 0;
    cin >> l;
    cin >> r;
    unsigned long long num = 0;
    int ret = 0;
    for(int i = 1 ;i<=r;++i){
        num = num + i;
        if((i>=l) && (num % 3 == 0)){
            ++ret;
        }
    }
    cout << ret << endl;
    return 0;

}
