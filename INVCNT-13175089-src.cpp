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
lli ans;
void merge(lli a[] , lli left , lli mid , lli right)
{
    lli array[200000];
    lli i=left, j=mid+1 , k=0;
    
    while((i<=mid)&&(j<=right))
    {
        if(a[i]<=a[j])
            array[k++]=a[i++];
    
        else 
        { 
            ans=ans+mid-i+1;
            array[k++]=a[j++];
       }
    }
    
    while(i<=mid)
        array[k++]=a[i++];
   
    while(j<=right)
        array[k++]=a[j++];
   
    for(i=0;i<k;i++)
        a[left+i]=array[i];
}

void merge_sort(lli a[],lli left,lli right)
{
    lli mid;
    
    if(left>=right)
        return;
    
    else
    {
        mid=(left+right)/2;
        merge_sort(a,left,mid);
        merge_sort(a,mid+1,right);
        merge(a,left,mid,right);
    }
}


int main()
{
    lli a[200000];
    lli t,n,i;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        merge_sort(a,0,n-1);
        printf("%lld\n",ans);
    }
    return 0;
}
