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
      lli testcases;
      cin>>testcases;
      while(testcases!=0){
         testcases--;
         lli x,y;
         cin>>x>>y;
         if(x==y && x>=0 && y>=0){
            if(x%2==0){
               cout<<x*2<<endl;
            }
            else{
               cout<<x*2-1<<endl;
            }
         }
         else if(x-y==2 && x>=2 && y >=0){
            if(x%2==0){
               cout<<x+y<<endl;
            }
            else{
               cout<<x+y-1<<endl;
            }
         }
         else{
            cout<<"No Number"<<endl;
         }
      }



   }  
   