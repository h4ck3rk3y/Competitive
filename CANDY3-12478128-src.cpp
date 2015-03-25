   #include <iostream>
   #include <string>
   #include <cstdio>
   #include <algorithm>
   #include <math.h> 
   #include <vector>
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
   using namespace std;
   typedef long long int lli;
   typedef unsigned int ui;
   typedef unsigned long long int ulli;
   #define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
   #define min(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _b : _a; })
   #define mod 1000000007
   int main(){
      lli n,x,sum,i,in;
      scanf("%lld",&n);
      while(n!=0){
         sum=0;
         scanf("%lld",&x);
         for(i=0;i<x;i++){
            scanf("%lld",&in);
            sum = sum + in%x;
         }
         if(sum%x==0){
            printf("YES\n");
         }
         else{
            printf("NO\n");
         }
         n--;
      }
   }