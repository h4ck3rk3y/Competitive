#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <set>
typedef long long int lli;
#define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
#define min(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _b : _a; })
using namespace std;
int main(){
	lli input,a,testcases;
	scanf("%lld",&testcases);
	while(testcases!=0){
	scanf("%lld",&input);
		double low = 0.95*input;
		double high = 1.05*input;
		lli inp = input;
		lli  i=0;
		while(inp%10==0){
			inp=inp/10;
			i++;
		}
		// printf("inp %lld\n",inp);
		// printf("i %lld\n",i);
			// if(i==0){
			// 	i = 1;
			// 	if(inp%10<5){
			// 	inp = inp/10;}
			// 	else{
			// 	inp = (inp + 10 - (inp%10))/10;			
			// 	}
			// }
		if(inp%10==5){
			lli num1 = (inp/10)*(lli)pow(10,i+1);
			lli num2 = (inp+5/10)*(lli)pow(10,i+1);
			// printf("num1: %lld num2: %lld low: %lld high: %lld\n",num1,num2,low,high);
			if((num1>=low and num1<=high and num1!=input) || (num2>=low and num2<=high and num2!=input)){
				printf("absurd\n");
			}
			else{
				printf("not absurd\n");
			}


		} 
		else if(inp%10<5){
			lli num1 = (inp/10) * (lli)pow(10,i+1);
			lli num2 = (inp + 5 - (inp%5));
			num2 = (num2) * (lli)pow(10,i); 
			// printf("num2: %lld low: %f high: %f\n",num2,low,high);
			if(num1>=low and num1<=high and num1!=input || (num2>=low and num2<=high and num2!=input) ){
				printf("absurd\n");
			}
			else{
				printf("not absurd\n");
			}
		}
		else {
			lli num1 = inp + 10 - (inp%10);
			num1 = num1 * (lli)pow(10,i);
			lli num2 = (inp - (inp%5));
			num2 = (num2) * (lli)pow(10,i);
			// printf("num1: %lld low: %f high: %f\n",num2,low,high);
			if(num1>=low and num1<=high and num1!=input || (num2>=low and num2<=high and num2!=input)){
				printf("absurd\n");
			}
			else{
				printf("not absurd\n");
			}
		}
		testcases--;
	}
}