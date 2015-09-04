#include <iostream>
#include <cstdio>
#include <string.h>
#include <set>
#define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
typedef long long int lli;
using namespace std;
  int main()
{
    lli t;
    string c1, c2;
    scanf("%lld",&t);
    while(t--){
        cin>>c1;
        cin>>c2;
        lli i;
        for(i=0;i<c1.size();i++){
            if(c1[i] == c2[i] or (c1[i] == '?' or c2[i] == '?')){
            }
            else{
                printf("No\n");
                break;
            }
        }
        if(i== c1.size()){
            printf("Yes\n");
        }
    }
}
