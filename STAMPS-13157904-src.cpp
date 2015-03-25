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
      lli cases;
      cin>>cases;
      lli count=0;
      while(cases!=0){
         count = count + 1;
         cases--;
         lli a,b;
         cin>>a>>b;
         vector<lli>v;
         lli temp;
         for(lli i = 0 ;i<b;i++){
            cin>>temp;
            v.push_back(temp);
         }
         if(a==0){
            cout<<"Scenario #"<<count<<":"<<endl;
            cout<<0<<endl;
            continue;
         }
         lli sum=0;
         lli nump=0;
         sort(v.begin(),v.end()); 
         // cout<<"sorted and set"<<endl;
         for(lli i  = b - 1;i>=0;i--){
            // cout<<v[i]<<endl;
            nump = nump + 1;
            sum = sum + v[i];
            if(sum>=a){
               cout<<"Scenario #"<<count<<":"<<endl;
               cout<<nump<<endl;
               break;  
            }
            
         }
         
         if(sum<a){
            cout<<"Scenario #"<<count<<":"<<endl;
            cout<<"impossible"<<endl;   
         }
      }
   }