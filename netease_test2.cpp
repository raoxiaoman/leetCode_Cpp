#include <iostream>
#include <math.h>

using namespace std;
int main(){
    size_t l = 0;
    size_t  r = 0;
    cin >> l;
    cin >> r;
    int begin = 1 ;
    size_t times = 1;
    unsigned long long num = 0;
    int ret = 0;
    int h = 1;
    while(r){
        num = num*pow(10, h) + begin;
        if((times >= l) && num % 3 == 0){
            ret++;
        }
        cout << num << endl;
        begin++;
        h = (int)log10(begin) + 1;
        times++;
        r--;
    }
    cout << ret << endl;
    return 0;

}
