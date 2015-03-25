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
      lli t;
      cin>>t;
      while(t!=0)
        {lli a,b,c;
         cin>>a>>b>>c;
         lli n = ((c*2)/(a+b));
         lli d = (a-b)/(5-n);
         lli f = a - 2*d;
         cout<<n<<endl;
         for(lli i =0;i<n;i++){
            lli term = f + i*d;
            cout<<term<<" ";
         }
         cout<<endl;
         t--;

        } 




      return 0;
   }