#include <iostream>
#include <cmath>
#include <vector>
#include <set>
#include <cstdio>
#include <queue>
typedef long long int lli;
using namespace std;

int main(){
    vector <lli> twotwo;
    lli mod = 1000000007;
    lli r2 = 1;
    for(lli i = 0 ;i<=100000;i++){
        twotwo.push_back(r2);
        r2 = ((r2%mod)*(2)%mod)%mod;
    }
    lli t,n,count=1,r1,r3;
    scanf("%lld",&t);
    while(t!=0){
    t--;    
    scanf("%lld",&n);
    if(n==1){
        printf("Case %lld: %lld\n",count,(lli)1);
        count = count + 1;
        continue;
    }
    n=n-1;
    r1 = (n+2)%mod;
    r2 = twotwo[n-1];
    r3 = (r1*r2)%mod;
    printf("Case %lld: %lld\n",count,r3);
    count = count + 1;
    r2 = 1;

    }
}
