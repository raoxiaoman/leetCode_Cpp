#include <iostream>
#include <math.h>
#include <stdio.h>
#include <vector>

using namespace std;
int count  = 0;
void dg(long sum,long index,long &n,long &bv,vector<long>& vec){
    if(index < n){
        if(sum>bv){
            return ;
        }else{
            dg(sum,index+1,n,bv,vec);
            if(sum+vec[index]< bv){
                count++;
                dg(sum+vec[index],index+1,n,bv,vec);
            }
        }

    }

}

int main(){
    long n = 0;
    long bv = 0;
    cin >> n;
    cin >> bv;
    vector<long> vec;
    long temp;
    long sum = 0;
    for (long i = 0; i < n; ++i) {
        cin >> temp;
        sum+=temp;
        vec.push_back(temp);
    }
    if(sum <= bv){
        cout << static_cast<int>(pow(2,n)) << endl;
    }else{
        dg(0,0,n,bv,vec);
        cout << count+1 << endl;
    }

    return 0;
}
