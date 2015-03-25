#include <iostream>
#include <cmath>
#include <vector>
#include <cstdio>
#include <set>
typedef long long int lli;
using namespace std;
static vector <lli> v;
vector <lli> p_list;
void  seive(lli input){
input = floor(sqrt(input)) + 1;
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
bool isPrime(lli input){
	for(lli i = 0 ; i<p_list.size();i++ ){
		if(p_list[i]==input){
			return true;
		}
		if(input%p_list[i]==0 || p_list[i]>input) {
			return false;
		}
	}
	return true;
}	
int main()
{
 lli t,n,m,i;
 scanf("%lld",&t);
 v.push_back(-1);
 v.push_back(-1);
 seive(999999999);
 while(t!=0){
 		t--;
 		scanf("%lld %lld",&n,&m);
 		for(i = n;i<=m;i++){
 			if(isPrime(i)==true){
 				printf("%lld\n",i);
 			}
 		}
 		printf("\n");

	}

}
