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
      int x,n,m,i,m1,m2,in;
      scanf("%d",&x);
      while(x!=0){
         m1=0;m2=0;
         scanf("%d %d",&n,&m);
         for(i=0;i<n;i++){
            scanf("%d",&in);
            if(in>m1){
               m1=in;
            }
         }
         for(i=0;i<m;i++){
            scanf("%d",&in);
            if(in>m2){
               m2=in;
            }
         }
         if(m1>=m2){
            printf("Godzilla\n");
         }
         else{
            printf("MechaGodzilla\n");
         }
         x--;

      }   
      return 0;
   }