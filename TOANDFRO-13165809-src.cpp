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
    lli inpcs;
    cin>>inpcs;
    while(inpcs!=0){
      string oop;
      cin>>oop;
      lli base = oop.length()/inpcs;
      lli basecounter = 0;
      lli lengthcounter = 0;
      lli counter=0;
      lli oddeve=0;
      while(counter!=oop.length()){
         if(oddeve%2==0){
            if(basecounter==base){
               // cout<<"CONTRUE "<<basecounter<<" "<<base;
               // cout<<"Upar Wala if"<<endl;
               basecounter=0;
               lengthcounter=lengthcounter + 1;
            }
            oddeve=1;
            // cout<<basecounter<<" . ";
            // cout<<basecounter*inpcs + lengthcounter<<endl;
            // <<" basecounter "<<basecounter<<" inpcs "<<inpcs<<" lengthcounter "<<lengthcounter<<endl;
            cout<<oop[basecounter*inpcs + lengthcounter];
            basecounter=basecounter+1;
            
         }
         else{
            if(basecounter==base){
               // cout<<"CONTRUE "<<basecounter<<" "<<base;
               basecounter=0;
               // cout<<"Neeche wal iff"<<endl;
               lengthcounter=lengthcounter + 1;
               oddeve=0;
               continue;
            }
            oddeve=0;
            // cout<<basecounter<<" . ";
            // cout<<(basecounter+1)*inpcs -lengthcounter-1<<endl;
            // <<" basecounter "<<basecounter<<" inpcs "<<inpcs<<" lengthcounter "<<lengthcounter<<endl;
            cout<<oop[(basecounter+1)*inpcs -lengthcounter-1];
            basecounter=basecounter+1;
         }
         counter=counter + 1;
      }
      cout<<endl;

      cin>>inpcs;
    }  
   }