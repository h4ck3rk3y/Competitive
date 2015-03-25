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
      lli x,y,z,f,d,n;
      scanf("%lld",&x);
      n=((x*x)-x)/2;
      lli arr[n];
      d=0;f=0;
      if(x==2){
         cout<<"1 1";
         cout<<endl; 
      }
      else{
      for(y=0;y<x;y++){
         for(z=0;z<x;z++){
           cin>>f;
           if(z>y){
            arr[d]=f;
            d++;
           }
         }
      }
      d= (arr[0] - arr[x-1] + arr[1])/2 ;
      printf("%lld ",d);
      for(y=0;y<x-1;y++){
         f = arr[y]- d;
         printf("%lld ",f);
      }
      printf("\n");}
      return 0;
}