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
   #define t(c) (c-'0')
   int main(){
       lli in;
       cin>>in;
       while(in!=0){
              lli n[in];
              lli temp;
              lli cn=0;
              while(in!=cn){
                cin>>temp;
                n[cn]=temp;
                cn= cn+ 1;
              }
              lli flag = 0; 
              stack<lli> s;
              s.push(1001);
              cn = 1;
              lli cou=0;
              while(cn<=in){
                if(s.top()==cn){
                  s.pop();
                  cou = cou-1;
                  cn=cn+1;
                  // cout<<"cou "<<cou<<" cn "<<cn<<endl;
                  // cout<<"1 st condition"<<endl;
                }
                else if(n[cou]==cn){
                  cn = cn+1;
                  // cout<<"cou "<<cou<<" cn "<<cn<<endl;
                  // cout<<"2 shizz"<<endl;
                }
                else if(n[cou]<s.top()){
                  // cout<<n[cou]<<endl;
                  s.push(n[cou]);
                  // cout<<"cou "<<cou<<" cn "<<cn<<endl;
                }
                else{
                  // cout<<n[cou]<<endl;
                  // cout<<cou<<endl;
                  flag =1;
                  cout<<"no"<<endl;
                  // cout<<" cou "<<cou<<" cn "<<cn<<" s.top() "<<s.top()<<endl;
                  break;
                }
                cou=cou+1;
              }
              if(flag==0){
                cout<<"yes"<<endl;
                }




              cin>>in;
         


         }
   }  
   