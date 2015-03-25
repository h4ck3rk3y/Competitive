#include <iostream>
#include <cmath>
#include <vector>
#include <cstdio>
#include <set>
typedef long long int lli;
using namespace std;
vector <lli> v;
vector <lli> seq;
lli count = 2;
void  seive(lli input){
for(lli i  =  2 ; i<=input;i++){
	v.push_back(i);
	seq.push_back(i);
}
for(lli i = 2  ; i<=input;i++){
	if (v[i]!=-1) {
		for(lli j = 2*i;j<=input;j=j+i){
			if(v[j]!=-1){
			v[j]=-1;
			seq[j]=i;
			}
		}
	}
}			
}	
void seqequnce(lli input){
	if(count>input){
		cout<<seq[input]<<endl;
	}
	else{
		for(lli j = count;j<=input;j++){
			seq[j]=seq[j]+seq[j-1];
			count = count + 1;
			}
	cout<<seq[input]<<endl;
	}
	
}
int main()
{
 lli t,n;
 scanf("%lld",&t);
 v.push_back(-1);
 v.push_back(-1);
 seq.push_back(0);
 seq.push_back(0);
 seive(9999999);
 	while(t!=0){
 		t--;
 		scanf("%lld",&n);
 		seqequnce(n);
 	}


}
