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
   {  lli t;
      // cout<<"Enter the test cases : "<<endl;
      cin>>t;
      while(t!=0){
        t--;
        lli result;
        char op;
        lli flag=0;
        cin>>result;
        // cout<<result<<endl;
        lli cn  =  0;
        while(1==1){
          if(cn==0){
            cin>>op;
            cn = 1;
            // cout<<op<<endl;
          }
          else{
            
            if(op=='+'){
              cin>>flag;
              result = result + flag;
            }
            else if(op=='-'){
              cin>>flag;
              result = result - flag;
            }
            else if(op=='/'){
              cin>>flag;
              result = result / flag;
            }
            else if(op=='*'){
              cin>>flag;
              result = result * flag;
            }
            else if(op=='='){
              // cin>>flag;
              cout<<result<<endl;
              break;
            }
            cn=0;
          }

        }

      } 
   }
