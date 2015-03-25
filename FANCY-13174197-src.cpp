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
   #define t(c) (c-'0')
   int main(){
       lli cases;
       scanf("%lld",&cases);
       while(cases!=0){
        cases--;
        string input;
        cin>>input;
        lli cn=1;
        lli total=1;
        lli i ;
        for(lli i = 1 ; i < input.length();i++){
          if(input[i]==input[i-1]){
            cn=cn+1;
            // cout<<"cn "<<cn<<endl;
          }
          else{
            // cout<<input[i]<<endl;
            total = total*pow(2,cn-1);
            cn=1;
          }
       }
       total = total*pow(2,cn-1);
        printf("%lld\n",total);
     }


   }  
   