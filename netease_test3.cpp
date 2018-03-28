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
    }

    for (auto people : peoples) {
        size_t max = 0;
        auto iter2 = maps.begin();
        for(;iter2 != maps.end();iter2++){
            if(iter2->first <= people){
                temp = iter2->second;
                //cout << "temp:" << temp << endl;
                if(max < temp){
                    max = temp;
                } 
            }else{
                cout << max << endl;
                break;
            }
        }
        if(iter2 == maps.end()){
            cout  << max << endl;
        }
    }
    return 0;
}
