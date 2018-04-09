#include <stdio.h> 
#include <iostream> 
#include <map> 
#include <set> 
#include <stack> 
#include <vector> 
#include <math.h> 
#include <string.h> 
#include <queue> 
#include <string> 
#include <stdlib.h> 
#include <algorithm> 
#define LL long long 
#define _LL long long 
#define eps 1e-8 
#define PI acos(-1.0) 
using namespace std; 


struct node 
{ 
    int time,level; 
    bool operator < (const struct node &tmp)const 
    { 
        if(time == tmp.time) 
            return level > tmp.level; 
        return time > tmp.time; 
    } 
}task[100010]; 
int n,m; 


int cnt; 
_LL ans; 


int main() 
{ 
    int x,y; 

    while(~scanf("%d %d",&n,&m)) 
    { 
        multiset <int> mac[110]; 
        int maxlevel = -1; 
        for(int i = 1; i <= n; i++) 
        { 
            scanf("%d %d",&x,&y); 
            mac[y].insert(x); 
            maxlevel = max(maxlevel,y); 
        } 


        for(int i = 1; i <= m; i++) 
        { 
            scanf("%d %d",&task[i].time,&task[i].level); 
        } 
        sort(task+1,task+1+m); 
        cnt = 0; 
        ans = 0; 


        for(int i = 1; i <= m; i++) 
        { 
            x = task[i].time; 
            y = task[i].level; 
            for(int j = y; j <= maxlevel; j++) 
            { 
                multiset<int>::iterator it = mac[j].lower_bound(x); 
                if(it == mac[j].end() || (*it) < x) 
                    continue; 
                cnt++; 
                ans += 200 * task[i].time + 3 * task[i].level; 
                mac[j].erase(it); 
                break; 
            } 
        } 
        printf("%d %I64d\n",cnt,ans); 
    } 
    return 0; 
}
