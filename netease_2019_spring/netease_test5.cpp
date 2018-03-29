#include <iostream>
#include <algorithm>
using namespace std;

int  main(){
    long long k = 0;
    long long n = 0;
    cin >> n;
    cin >> k;
    long long ret = 0;
    //判断k==0的情况
    if(k==0){
        ret = n*n;
    }else{
        //除数y大于余数k,所以只要查找y>k的情况
        for (long long y = k+1;y<= n; y++) {
            int ans = 0;
            //分两部分
            //一部分被除数x<n的情况
            ans = n/y*(y-k);
            //一部分被除数x=n的情况
            if(n%y>=k){
                ans +=n%y-k+1;
            }
            ret+=ans;

        }
    }
    cout << ret<< endl;
    return 0;
}
