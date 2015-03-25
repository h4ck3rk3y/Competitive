   #include <iostream>
   #include <string>
   #include <cstdio>
   #include <algorithm>
   #include <math.h> 
   #include <vector>
   #include <deque>
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
   #include <stdlib.h>
   using namespace std;
   typedef long long int lli;
   typedef unsigned int ui;
   typedef unsigned long long int ulli;
   #define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
   #define min(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _b : _a; })
   int main(){
   lli size,i=0,temp,key;
   cin>>size;
   lli arr[size];
   while(size!=i){
      cin>>temp;
      arr[i]=temp;
      i = i + 1;  
   }
   scanf("%lld",&key);
   deque <lli> dq;
   dq.push_front(-100);
   for(lli i =  0 ; i <size;i++){
         while (!dq.empty() && dq.front() <= i-key)
            {dq.pop_front();}
         while(!dq.empty() && arr[i]>arr[dq.back()]){
            dq.pop_back();  }
         dq.push_back(i);
         if(i>=key-1 && i!=size-1){
            cout<<arr[dq.front()]<<" ";
         }
      }
      if(size>=1){   
      cout<<arr[dq.front()];
      }
   }
