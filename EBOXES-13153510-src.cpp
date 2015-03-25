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
   int main()
  {   lli o ;
      cin>>o;
      while(o!=0){
      lli n,k,t,f;
      cin>>n>>k>>t>>f;
      lli res  =  (f-n)/(k-1)   + f;
      cout<<res<<endl;
      o--;
      }

}