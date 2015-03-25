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
      lli testc;
      cin>>testc;
      while(testc!=0){
         lli arr[2][testc];
         lli flag=0;
         for(lli i = 0 ;i<testc;i++){
            lli in;
            cin>>in;
            arr[0][i]=in;
            arr[1][in-1]=i+1;
         }
         for(lli i =0;i<testc;i++){
            // cout<<arr[0][i]<<" "<<arr[1][i]<<endl;
            if(arr[0][i]!=arr[1][i]){
               cout<<"not ambiguous"<<endl;
               flag = 1;
               break;
               
            }
            
         }
         if(flag != 1){
            cout<<"ambiguous"<<endl;
         }
         cin>>testc;
      }



   }  
   