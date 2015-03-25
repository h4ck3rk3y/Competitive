    #include <iostream>
    #include <cmath>
    #include <vector>
    #include <set>
    #include <cstdio>
    #include <queue>
    typedef long long int lli;
    using namespace std;

    int main(){
        lli t,n,i=0,temp,flag=0;
        scanf("%lld",&t);
        while(t!=0){
        scanf("%lld",&n);            
        flag=0;    
        t--;
        lli arr[n],refarr[n];
        for(i =0;i<n;i++){
            arr[i]=0;
            scanf("%lld",&temp);
            refarr[i] = temp;
            }
        i=0;
        while(n!=i){
            temp = refarr[i];
            i++;            
            if(temp>n-1){
                printf("NO\n");
                flag=1;
                break;
            }
            else{
                if(arr[temp]==0){
                    arr[temp]= 1;
                }    
                else if(arr[n-temp-1]==0){
                    arr[n-temp-1] = 1;
                }
                else{
                    flag =1;
                    printf("NO\n");
                    break;
                }
            }
        }
        if(flag==0){
            printf("YES\n");
        }
        }
    
    }
