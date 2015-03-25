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
   lli poss(lli n);
   int atoi(string s)
   {
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
   }
   int main()
   {  int f;
      cin>>f;
      int r = f;
      while(f!=0){
         string x,y,z,o1,o2;
         cin>>x>>o1>>y>>o2>>z;
         // cout<<x<<" x "<<endl;
         // cout<<y<<" y "<<endl;
         // cout<<z<<" z "<<endl;
         if(z.find("machula")!=-1){
            // cout<<"1"<<endl;
            int a = atoi(x);
            int b = atoi(y);
            int c = a + b;
            cout<<a<<" "<<"+"<<" "<<b<<" = "<<c<<endl;
         }
         else if(y.find("machula")!=-1){
            // cout<<"2"<<endl;
            int a = atoi(x);
            int b = atoi(z);
            int c = b- a;
            cout<<a<<" "<<"+"<<" "<<c<<" = "<<b<<endl;
         }
         else {
            // cout<<"3"<<endl;
            int a = atoi(y);
            int b = atoi(z);
            int c = b-a;
            cout<<c<<" "<<"+"<<" "<<a<<" = "<<b<<endl;
         }
         f--;
      }
      return 0;
   }
