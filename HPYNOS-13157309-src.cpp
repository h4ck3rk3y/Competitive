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
   lli pn(lli input);
   lli check(vector <lli> v , lli inp);
   int main()
   { 
      lli j;
      cin>>j;
      lli count=0;
      vector <lli> me;
      while(1){
         // cout<<j<<endl;
         if(j==1){
            cout<<count<<endl;
            break;
         }
         else if(check(me,j)==1){
            cout<<-1<<endl;
            break;
         }
         else{
            me.push_back(j);
            j=pn(j);
            count = count + 1;
         }
      }
   }
   lli pn(lli input){
      lli result=0;
      while(input!=0){
         result = result + (input%10)*(input%10);
         input = input/10;
      }
      return result;
   }
   lli check(vector <lli> v,lli inp){
      for(lli i = 0 ;i<v.size();i++){
         if(v[i]==inp){
            return 1;
         }
      }
      return 0;
   }