#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, char *argv[])
{
    size_t n;
    cin >> n;
    vector<size_t> vects;
    size_t sum1 = 0;
    size_t sum2 = 0;

    size_t temp;
    for (size_t i = 0; i < n; ++i) {
        cin >> temp;
        vects.push_back(temp);
        
    }
    sort(vects.rbegin(),vects.rend());
    for(size_t i=0;i<vects.size();++i){
        if(i%2==0){
            sum1+=vects[i];
        }else{
            sum2+=vects[i];
        }

    }
    cout << sum1 - sum2 << endl;
    
    return 0;
}
