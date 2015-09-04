#include <iostream>
#include <cstdio>
#include <set>
#define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
typedef long long int lli;
using namespace std;
  int main()
{
    lli n1, n2, a,b,t;
    cin>>n1;
    cin>>n2;
    lli k, m;
    cin>>k>>m;
    lli i ;
    for(i=1;i<=n1;i++){
        if(i==k)
            cin>>a;
        else
        	cin>>t;
    }
    for(i=1;i<=n2;i++){
        if(i==n2-m+1)
         	cin>>b;
    	else
    		cin>>t;
    }
    if(a<b){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
