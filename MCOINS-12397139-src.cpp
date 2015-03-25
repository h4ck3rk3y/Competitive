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
   {  lli k,l,m,i;  
      lli n;
      string ans;
      cin>>k>>l>>m;
      vector <bool> v;
         v.push_back(false);
         v.push_back(true);
         for( i = 2 ; i <= 1000005 ; i++){
           v.push_back(false);
           if(v[i-1]==false){
            v[i]=true;
           }
           else if(i-k>=0 &&(v[i-k]==false)){
            v[i]=true;
           }
           else if(i-l>=0 &&(v[i-l]==false)){
            v[i]=true;
           }
         }
      while(m!=0){
      	 m--;
         cin>>n;
         if(v[n]==true){
            printf("A");
         }
         else{
            printf("B");
         }
      }
      printf("\n");
      
   	return 0; 
   }
