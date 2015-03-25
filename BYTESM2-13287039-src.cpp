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
   lli maxfrom[101][101];
   lli arr[101][101];
   lli recursor(lli row,lli column,lli sum,lli i,lli j);
   int main(){
      lli testcases;
      scanf("%lld",&testcases);
      while(testcases!=0){
         testcases--;
         lli r,i,j,c,temp;
         scanf("%lld %lld",&r,&c);
         for(i=0;i<r;i++){
            for(j=0;j<c;j++){
               cin>>arr[i][j];
               maxfrom[i][j] = -1;
            }
         }
         temp = 0;
         for(i = 0;i<c;i++){
            lli fsum = recursor(r,c,0,0,i);
            if(fsum>temp){
               temp = fsum;
            }
         }
         printf("%lld\n",temp);  
   }

   }
   lli recursor(lli row,lli column,lli sum,lli i,lli j){
      if(i==row-1){
         return sum + arr[i][j];
      }
      else{
         if(maxfrom[i][j]!=-1){
            return maxfrom[i][j] + sum;
         }
         else if(j==0){
         maxfrom[i][j]= max(recursor(row,column,sum + arr[i][j],i+1,j+1),recursor(row,column,sum + arr[i][j],i+1,j))-sum;
         }
         else if(j<column-1){
         maxfrom[i][j]= max(max(recursor(row,column,sum + arr[i][j],i+1,j-1),recursor(row,column,sum + arr[i][j],i+1,j)),recursor(row,column,sum + arr[i][j],i+1,j+1))-sum;
         }
         else{
         maxfrom[i][j]= max(recursor(row,column,sum + arr[i][j],i+1,j-1),recursor(row,column,sum + arr[i][j],i+1,j))-sum;
         }
      }
      return maxfrom[i][j]+sum;
   }  