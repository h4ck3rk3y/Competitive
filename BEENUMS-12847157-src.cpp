   #include <iostream>
   #include <string>
   #include <cstdio>
   #include <algorithm>
   #include <math.h> 
   #include <vector>
   #include <set>
   #include <map> 
   #include <string.h>
   #include <deque>
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
      lli t;

      cin>>t;
      while(t!=-1){
         lli safe = t;
         safe = safe - 1;
         lli i  = 1;
         while(safe>0){
            safe = safe - 6*i;
            i=i+1;
         }
         if(safe==0){
            printf("Y\n");
         }
         else{
            printf("N\n");
         }
         cin>>t;
      }
   }