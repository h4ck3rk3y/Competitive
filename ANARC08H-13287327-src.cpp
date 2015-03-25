   #include <iostream>
   #include <string>
   #include <cstdio>
   #include <algorithm>
   #include <math.h> 
   #include <vector>
   #include <deque>
   #include <set>
   #include <map> 
   #include <string.h>
   #include <cstdlib>
   #include <limits.h>
   #include <tr1/unordered_map>
   #include <tr1/unordered_set>
   #include <functional>
   #include <stack>
   #include <queue>
   #include <stdlib.h>
   using namespace std;
   typedef long long int lli;
   typedef unsigned int ui;
   typedef unsigned long long int ulli;
   #define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
   #define min(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _b : _a; })
   lli finder(lli n,lli d){
      lli a=1,i=1;
      for(;i<=n;i++)
      {
         a= (a+d-1)%i+1;
      }
      return a;
   }
   int main(){
      lli n,d;
      scanf("%lld %lld",&n,&d);
      while(n!=0 && d!=0){
         printf("%lld %lld %lld\n",n,d,finder(n,d));
         scanf("%lld %lld",&n,&d);
      }
   }
