#include <iostream>  
using namespace std;  
int Lu(int a, int b)  
{  
    int temp;  
    if (a < b)  
    {  
        temp = a;  
        a = b;  
        b = temp;  
    }  
    if (a%b == 0)  
        return b;  
    else  
        return Lu(b, a%b);  
}  
  
int Zheng(int a, int b)  
{  
    return a/Lu(a, b)*b;  
}  
  
int main()  
{  
    int n , s;  
    cin >> n;  
    s = 1;  
    for (int i = 1; i <= n; i++){
        s = Zheng(s, i);  
    }  
    cout << s << endl;  
    return 0;  
} 
