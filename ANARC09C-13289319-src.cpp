#include <iostream>
#include <cmath>
#include <vector>
#include <cstdio>
#include <set>
typedef long long int lli;
using namespace std;
static vector <lli> v;
lli p1 = 0;
vector <lli> p_list;
void  seive(lli input){
for(lli i  =  2 ; i<=input;i++){
   v.push_back(i);
}
for(lli i = 2  ; i<=input;i++){
   if (v[i]!=-1) {
      for(lli j = 2*i;j<=input;j=j+i){
         if(v[j]!=-1){
         v[j]=-1;
         }
      }
   }
}
lli count = 0;
for(lli  i= 0 ; i<=input;i++){
   if(v[i]!=-1){
      ++count;
      // printf("%lld\t%lld \n",v[i],count);
      p_list.push_back(i);
      }
}        
}
vector<pair <lli,lli> > isPrime(lli input){
      vector <pair <lli,lli> > a;   
      for(lli i =0 ;i<p_list.size();i++){
         lli count = 0;
         while(input%p_list[i]==0){
            count = count + 1;
            input = input/p_list[i];
         }
         if(count!=0){
            a.push_back(make_pair(p_list[i],count));
         }
         else{
            a.push_back(make_pair(p_list[i],count));  
         } 
         if(input<=1){
            break;
         }
      }
      return a;
   }
lli mod_dif(vector<pair <lli,lli> > a,vector<pair <lli,lli> > b){
   if(a.size()>b.size()){
      lli sum = 0;
      for(lli i = 0 ;i<a.size();i++)
      {  if(a[i].second >0){
          p1 = p1 + 1;
         }
         else if(i<b.size() && b[i].second>0){
          p1 = p1 + 1 ;
         }
         if(i>b.size()-1){
            sum = sum + a[i].second;

         }
         else{
            sum = sum + abs(a[i].second - b[i].second);
         }
      }
      return sum;
   }
   else{
      lli sum = 0;
      for(lli i = 0 ;i<b.size();i++)
      {  if(b[i].second >0){
          p1 = p1 + 1;
         }
         else if(i<a.size() && a[i].second>0){
          p1 = p1 + 1 ;
         }
         if(i>a.size()-1){
            sum = sum + b[i].second;
         }
         else{
            sum = sum + abs(b[i].second - a[i].second);
         }
      }
      return sum;
   }
   
}     
int main()
{
 lli t,n,d,m,i;
 v.push_back(-1);
 v.push_back(-1);
 seive(1000000);
 lli count = 1;
      scanf("%lld %lld",&n,&d);
      while(n!=0 && d!=0){
         vector <pair <lli,lli> > a = isPrime(n);
         vector <pair <lli,lli> > b =isPrime(d);
         lli p2 = mod_dif(a,b);
         lli nd = p1;
         printf("%lld. %lld:%lld\n",count,nd,p2);
         scanf("%lld %lld",&n,&d);
         count++;
         p1 = 0;
      }
}
