   #include <cstdio>
   typedef long long int lli;
   int main(){
      lli t,n;
      scanf("%lld",&t);
      lli count=0;
      lli r = 0;
      while(t!=count){
         scanf("%lld",&n);
         r=r^n;
         count++;
      }
      printf("%lld",r);
   }
