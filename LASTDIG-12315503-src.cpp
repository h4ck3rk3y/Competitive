	#include <iostream>
	#include <math.h>
	using namespace std;
	typedef long long int lli;
	lli func(lli r,lli s);
	int main()
	{	lli n,r,s;
	 	cin>>n;
		while(n!=0){
			cin>>r>>s;
			n--;
			cout<<func(r,s)%10<<endl;	   }
		}
	lli func(lli a,lli b )
	{	if(b==0){
			return 1 ;
		}
	    else if(b%4==0){
	    	return pow(a,4);
	    }
		else if(b%4==3){
			return pow(a,3);
		}
		else if(b%4==2) {
			return pow(a,2);
		}
		else{
			return pow(a,1);
		}
	} 