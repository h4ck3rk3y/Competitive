#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <set>
typedef long long int lli;
#define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
#define min(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _b : _a; })
using namespace std;
lli  gcd(lli  m,lli n)
{
if(n==0)
return m;
else if(n>m)
return gcd(n,m);
else
return gcd(n,m%n);
}

int main(){
   lli t,a,b;
   scanf("%lld",&t);
   while(t!=0){
      scanf("%lld %lld",&a,&b);
      lli r = abs((a-b) / gcd(abs(a),abs(b)));
      printf("%lld\n",r);
      t--;
   }
}