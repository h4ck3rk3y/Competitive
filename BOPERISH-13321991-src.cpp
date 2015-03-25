#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <set>
#define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
typedef long long int lli;
using namespace std;
int main(){
   lli n,i=0,temp;
   cin>>n;
   while(n!=0){
   i=0;
   vector <lli> v;
   while(n!=i)
   {cin>>temp;
    v.push_back(temp);
    i= i+ 1;  
   }
   sort(v.begin(),v.end());
  lli result = 0; 
  bool flag = false;
  for (i = n - 1; i >= 0; i--) {
         result ++;
         if (result > v[i]) {
            flag = true;
            cout << result - 1 << endl;
            break;
         }
   }

   if (flag==false) 
   {      
   cout << result << endl;
   }
   cin>>n;
   }

}
