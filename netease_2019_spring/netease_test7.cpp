#include <iostream>
#include <map>
#include <set>

using namespace std;
int main(){
    int n = 0;
    cin >> n;
    map<int,pair<int,int>,greater<int>> clock;
    
    int a = 0;
    int b = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        cin >> b;
        pair<int,int> temps({a,b});
        clock.insert({a*60+b,temps});
    }

    //for (auto i : clock) {
        //cout << i.first << endl;
    //}

    int x= 0;
    cin >> x;

    int at = 0;
    int bt = 0;
    cin >> at;
    cin >> bt;
    int time = at*60+bt -x;
    for (auto i : clock) {
        if(time>=i.first){
            cout << i.second.first << " " << i.second.second << endl;
            break;
        }
    }
    return 0;
}
