#include <iostream>
#include <string>

using namespace std;
int main(){
    int times = 0;
    int n = 0;
    int nums = 0;
    cin >> times;
    string need;
    for(int i=0;i<times;i++){
        cin >> n;
        cin >> need;
        if(n <=3 ) {
            if(need.find(".")!=string::npos){
                cout << 1 << endl;
            }else{
                cout << 0 << endl;
            }
            continue;
        }
        for (int i = 0; i < n; ++i) {
            if(need[i] == '.'){
                nums++;
                i=i+2;
            }
        }

        cout << nums  << endl;
        nums = 0;
    }
    return 0;

}
