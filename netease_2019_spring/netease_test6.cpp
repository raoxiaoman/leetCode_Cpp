#include <iostream>
#include <vector>

using namespace std;
int main(int argc, char *argv[])
{
    int n = 0;
    vector<long> vectx;
    vector<long> vecty;
    
    cin >> n;
    long temp;

    for (int i = 0; i < n; ++i) {
        cin >> temp;
        vectx.push_back(temp);
    }
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        vecty.push_back(temp);
    }

    for (int i = 0; i < n; ++i) {
        cin >> temp;
        vectx.push_back(temp);
    }
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        vecty.push_back(temp);
    }

    long max = 1;
    for (auto x : vectx) {
        for (auto y : vecty) {
            long count = 0;
            for (int i = 0; i < n; ++i) {
                if(x > vectx[i]&& y>vecty[i]&& x<=vectx[n+i] && y<=vecty[n+i]){
                    count++;
                }

            }
            if(count>max){
                max=count;
            }
        }
        
    }

    cout << max << endl;

    return 0;
}
