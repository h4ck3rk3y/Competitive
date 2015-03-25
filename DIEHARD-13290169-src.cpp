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
lli arr[1050][1050];
lli recsolver(lli h , lli a){
   if(h<=0 || a<=0){
      return -1;
   }
   else{
      if(arr[h][a]==-1){
         arr[h][a] = max(recsolver(h-2,a-8),recsolver(h-17,a+7))+2;
      }
      return arr[h][a];
   }
}
int main(){
   for(lli i = 0 ;i <1050;i++){
      for(lli j=0;j<1050;j++){
         arr[i][j]=-1;
      }
   }
   lli n,h,a;
   scanf("%lld",&n);
   while(n!=0){
      n--;
      scanf("%lld %lld",&h,&a);
      printf("%lld\n",recsolver(h,a));
      }

}
