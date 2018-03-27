#include <iostream>

using namespace std;
int main(){
    int times = 0;
    int n = 0;
    int nums = 0;
    cin >> times;
    char need[1000];
    while(times > 0){
        cin >> n;
        cin >> need;
        if(n <=3 ) {
            cout << 1 << endl;
            continue;
        }
        for (int i = 0; i < n; ++i) {
            if(need[i] == '.'){
                nums++;
            }
        }
        cout << nums / 3 +1 << endl;
        nums = 0;
    }
    return 0;

}
