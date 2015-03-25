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
   int main()
   {  lli x,y,i;
      cin>>x;
      while(x!=0){
         cin>>y;
         lli j=0;
         lli arr[y];
         lli diff=0;
         for(i=0;i<y;i++){
            cin>>arr[i];
         }
         for(i=0;i<y/2;i++){
            diff +=((y- 2*i -1)*(arr[y-i-1] - arr[i]));
         }
         cout<<diff<<endl;
         x--;
      } 

      return 0;

   }
