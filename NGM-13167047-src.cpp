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
       lli in;
       cin>>in;
       if(in%10==0){
         cout<<2<<endl;
       }
       else{
         cout<<1<<endl;
         cout<<in%10<<endl;
       }
   }  
   