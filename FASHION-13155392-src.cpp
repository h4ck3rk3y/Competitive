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
   { 
    lli t;
    cin>>t;
    while(t!=0){
      t--;
      lli n ;
      cin>>n;
      vector <lli> men;
      vector <lli> women;
      for(lli i =  0 ; i<n;i++){
        lli m ;
        cin>>m;
        men.push_back(m);
      }
      for(lli i =  0 ; i<n;i++){
        lli w;
        cin>>w;
        women.push_back(w);
      }
      sort(men.begin(),men.end());
      sort(women.begin(),women.end());
      lli sum = 0 ;
      for(lli i =0;i<n;i++){
        sum = sum + (men[i]*women[i]);
      }
      cout<<sum<<endl;
    }
   }