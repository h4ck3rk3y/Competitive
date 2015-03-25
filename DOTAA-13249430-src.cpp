    #include <iostream>
    #include <cmath>
    #include <algorithm>
    #include <vector>
    #include <set>
    #include <cstdio>
    #include <queue>
    typedef long long int lli;
    using namespace std;

    int main(){
        lli t,n,temp,i,m,d;
        scanf("%lld",&t);
        while(t!=0){
            t--;
            scanf("%lld %lld %lld",&n,&m,&d);
            vector <lli> v;
            i=0;
            while(n!=i){
                i++;
                scanf("%lld",&temp);
                v.push_back(temp);
            }
            lli flag =0;
            sort(v.begin(),v.end());
            for(i=0;i<m;i++){
                v[n-1] = v[n-1] - d;
                if(v[n-1]<=0){
                    printf("NO\n");
                    flag = 1;
                    break;
                }
                lli o = n-1;
                while(o-1 > -1 && v[o]<v[o-1]){
                    temp = v[o];
                    v[o] = v[o-1];
                    v[o-1] = temp;
                    o--;
                }
                
            }
            if(flag==0){
                printf("YES\n");
            }
        }    
    }
