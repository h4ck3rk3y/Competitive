   #include <iostream>
   #include <math.h> 
   #include <string.h>
   using namespace std;
   typedef long long int lli;
   #define t(c) (c-'0')
   int main(){
      lli t;
      cin>>t;
      while(t!=0){
         string a;
         lli b,i,r;
         cin>>a>>b;
         r=a.length()-1 ;
         if(b==0){
            i=1;
         }
         else if(b%4==0){
            i=pow(t(a[r]),4);
         }
         else{
            i=pow(t(a[r]),b%4);
         }
         t--;
         if(i>9){
            cout<<i%10<<endl;
         }
         else{
            cout<<i<<endl;
         }
      }
   }  
   