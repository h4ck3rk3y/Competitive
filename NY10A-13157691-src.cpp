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
   int main(){
      lli cases;
      cin>>cases;
      while(cases!=0){
         cases--;
         lli n;
         cin>>n;
         string seq;
         cin>>seq;
         lli seqcount[8]= {0};
         lli i =0;
         for(i=0;i<38;i++){
            if(seq[i]=='T'){
               if(seq[i+1]=='T'){
                  if(seq[i+2]=='T'){
                     seqcount[0]=seqcount[0]+1;
                  }
                  else {
                     seqcount[1]=seqcount[1]+1;
                  }
               }
               else{
                  if(seq[i+2]=='T'){
                     seqcount[2]=seqcount[2]+1;
                  }
                  else{
                     seqcount[3]=seqcount[3]+1;
                  }
               }
         }
         else{
              if(seq[i+1]=='T'){
                  if(seq[i+2]=='T'){
                     seqcount[4]=seqcount[4]+1;
                  }
                  else {
                     seqcount[5]=seqcount[5]+1;
                  }
               }
               else{
                  if(seq[i+2]=='T'){
                     // cout<<i<<endl;
                     seqcount[6]=seqcount[6]+1;
                     // cout<<seq[i]<<seq[i+1]<<seq[i+2]<<" "<<seqcount[6]<<endl;
                  }
                  else{
                     // cout<<seqcount[7]<<endl;
                     seqcount[7]=seqcount[7]+1;
                  }
               }

         }
      }
      cout<<n;
      for(lli i =0;i<8;i++){
         cout<<" "<<seqcount[i];
      }
      cout<<endl;
   }
}