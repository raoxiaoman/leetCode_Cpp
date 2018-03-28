#include <iostream>
#include <map> 
#include <set> 
#include <vector> 
using  namespace std; 
int main(int argc, char *argv[])
{
    int workNum = 0;
    int peoplenum = 0;
    cin >> workNum ;
    cin >> peoplenum;

    map<size_t,size_t> maps;
    vector<size_t> peoples;
    size_t  pay = 0;
    size_t diff = 0;

    for (int i = 0; i < workNum; ++i) {
        cin >> diff;
        cin >> pay;
        auto iter = maps.find(diff);
        if(iter == maps.end()){
            maps.insert({diff,pay});
        }else{
            if(pay > iter->second){
                iter->second = pay;
            }
        }
    }

    size_t  temp;
    for (int kk = 0; kk < peoplenum; ++kk) {
        cin >> temp;
        peoples.push_back(temp);
        auto iter = maps.find(temp);
        if(iter == maps.end()){
            maps.insert({temp,0});
        }
    }

    auto pre = maps.begin();
    auto cur = maps.begin();
    cur++;

    for(;cur!=maps.end();cur++,pre++){
        if(cur->second < pre->second){
            cur->second = pre->second;
        }
    }
    
    for (auto people : peoples) {
        cout << maps[people] << endl;
    }
    return 0;
}
