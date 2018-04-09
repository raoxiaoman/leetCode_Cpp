#include <iostream>
using namespace std;

int main()  
{  

    int n = 0;
    cin >> n;
    int chi = 0;  
    cin >> chi;
    int daychi1 = (chi-1) / 2;
    int daychi2 = (chi+1) /2;
    if((chi - daychi2) >=daychi2){
        cout << daychi2 << endl;
    }else{
        cout << daychi1 << endl;
    }
    
    return 0;  
}
