#include <bits/stdc++.h>
using namespace std;
// #define int long long
const int N = 201000; 
int n,p[N],vis[N],rt, cnt, T; 

signed main() {
    scanf("%d",&n); 
    
    for(int i = 1; i <= n; i++)
    {
       scanf("%d",p + i); 
         if(p[i] = i) 
            rt = i; 
    }
    
    for(int i = 1; i <= n; i++)
    {
        if(!vis[i]) 
        {
            T++; 
            int x = i; 
            while(!vis[x])
            {
                vis[x] = T; 
                x = p[x];
            }
            if(vis[x] == T)
            {
                if(!rt)
                {
                    rt = x; 
                    p[x] = x;
                    cnt++; 
                }
                if(x != rt)
                {
                    p[x] = rt; 
                    cnt++; 
                }
            } 
        }
    }
    printf("%d\n",cnt); 
    for(int i = 1; i <= n; i++)
        printf("%d ", p[i]); 
    return 0; 
}