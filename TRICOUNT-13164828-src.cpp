   #include <iostream>
   #include <string>
   #include <cstdio>
   #include <string.h>
   #include <cstdlib>
   #include <limits.h>
   using namespace std;
   typedef long long int lli;
   int main(){
      lli cases;
      cin>>cases;
      while(cases!=0){
         cases--;
         lli n;
         cin>>n;
         n = (n*(n+2)*(2*n+1))/8;
         cout<<n<<endl;
      }
   }