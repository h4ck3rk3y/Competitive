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
   {  lli j,c;
      string inp;
      cin>>inp;
      lli nono,pop,rem1;
      while(inp.compare("0")!=0){
        vector <lli> v;
        c=1;
        for(j=0;j<inp.length();j++){
        v.push_back(inp[j]-48);
        }
        nono = 0;
        for(j=0;j<inp.length();j++){
          if((j==0 && v[j]==0)||(v[j]==0 && v[j]+10*v[j-1]>26)){
            c=0;
            break;
          }
          else if((j>0 && v[j]==0)&&(v[j]+10*v[j-1]<=26)){
            j++;
            if(pop==1){
            c= rem1;
      		}
      		nono  = c;
      		pop = 7;
          }
          else if(j>0 && (v[j]+v[j-1]*10<=26) &&(j==1||(v[j-1]+v[j-2]*10>26))){
            nono = c;
            rem1 = c;
            c=c*2;
            pop = 1;
             }
          else if(j>1 && (v[j]+v[j-1]*10<=26) && v[j-1]+v[j-2]*10<=26) {
            if(pop!=7){
            nono=c-nono;}
            pop = 1;
            rem1 = c;
            c= c + nono;
          }
         else{
          pop=0;
         }    
          
        }
        cout<<c<<endl;
    cin>>inp;
      }

      
    return 0; 
   }
