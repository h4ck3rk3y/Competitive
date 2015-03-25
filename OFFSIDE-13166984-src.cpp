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
       lli a,b;
       cin>>a>>b;
       while(a!=0 && b!=0){
         vector <lli> f;
         vector <lli> d;
         lli temp;
         for(lli i = 0 ;i <a;i++){
            cin>>temp;
            f.push_back(temp);
         }

         for(lli i = 0 ;i <b;i++){
            cin>>temp;
            d.push_back(temp);
         }
         sort(f.begin(),f.end());
         sort(d.begin(),d.end());
         lli flag = 0;
         lli cn=0;
         while(cn!=a){
            if(f[cn]<d[1]){
               flag=1;
               // cout<<f[cn]<<" "<<d[1]<<endl;
               cout<<'Y'<<endl;
               break;
            }
            else{

            }
            cn = cn + 1;
         }
         if(flag==0){
            cout<<'N'<<endl;
         }
         cin>>a>>b;
       }
   }  
   