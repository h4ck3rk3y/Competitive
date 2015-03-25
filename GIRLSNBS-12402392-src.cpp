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
   {  double x,y;
      cin>>x>>y;
      while(x!=-1&&y!=-1){
        if(x==0 && y==0){
          cout<<0<<endl;
        }
        else if(x==y){
          cout<<1<<endl;
        }
        else if(x>y){
          cout<<ceil(x/(y+1))<<endl;
        }
        else{
          cout<<ceil(y/(x+1))<<endl;
        }
        cin>>x>>y;
      }    

      
    return 0; 
   }
