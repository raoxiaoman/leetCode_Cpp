#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
char * padString(const char *s ,int n){
    int size =  2 * n + 3 ;
    char * ps = new char[size];
    ps[0] = '$';
    for (int i = 1; i < size - 1; i++) {
        if (i % 2 == 0) {
            ps[i] = s[i / 2 - 1];  
        }
        else{
            ps[i] = '#';
        }
    }
    ps[size -1] = '\0';
    return ps;
}

int LongestPalindromeManacher(const char *s,int n){
    int mx = 0;
    int id = 1;
    int max = 0;
    char *ps = NULL;
    ps = padString(s,n);
    int psize = strlen(ps);
    int p[psize];
    memset(p,0,psize);

    for (int i = 1; ps[i]!='\0' ; i++) {
        p[i] = mx > i ?std:: min(p[2*id - i],mx - i) : 1; 
        while(ps[i+p[i]] == ps[i-p[i]]){
            p[i]++;
        }
        if (i+p[i] > mx) {
            mx = i + p[i];
            id = i;

        }
    }

    for (int i = 0; i < psize; i++) {
        if (p[i]>max) {
            max = p[i];
        } 
    }

    free(ps);
    return max - 1;
}



int main(int argc, const char *argv[])
{
    char s[64];
    cin >> s;
    char *ps = padString(s,strlen(s));
    free(ps);
    int length = LongestPalindromeManacher(s,strlen(s));
    cout  << length << endl;

    return 0;
}

