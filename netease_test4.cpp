#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[])
{
    int times = 0;
    char direct[] = {'N','E','S','W'};
    char rdirect[] = {'N','W','S','E'};
    string turns;
    cin >> times;
    cin >> turns;
    int change = 0;
    for (auto i : turns) {
        if(i == 'L'){
            --change;
        }else if(i == 'R'){
            ++change;
        }
    }
    if(change>0){
        cout << direct[change%4] << endl;
    }else if(change<0){
        cout << rdirect[abs(change)%4] << endl;
    }else {
        cout << 'N' << endl;
    }
    
    return 0;
}
