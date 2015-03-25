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
   {  lli i;
      cin>>i;
      while(i!=0){
        i--;
        lli tobe;
        cin>>tobe;
        lli rem = tobe%4;
        lli quo = tobe/4;
        lli result;
        if(rem==0){
          lli fin = (quo-1)*1000 + 942;
          cout<<fin<<endl;
        }
        else if(rem==1){
          lli fin = quo*1000 + 192;
          cout<<fin<<endl;}
        else if(rem==2){
          lli fin = quo*1000 + 442;
          cout<<fin<<endl;
        }
        else{
          lli fin = quo*1000 + 692 ;
          cout<<fin<<endl;
        }
        //0000,1111,2222,3333,4444,5555,6666,7777,8888,9999,10192
      }
    
   }
//192,442,692,942