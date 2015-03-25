#include<stdio.h>
#include <iostream>
#include <cmath>
#include <vector>
#include <set>
using namespace std;
typedef long long int lli;
void merge_sort(lli a[],lli left,lli right);
void merge(lli a[] , lli left , lli mid , lli right);
lli final;
int main()
{
    lli a[100000];
    lli t,arrsize,i;
    cin>>t;
    while(t--)
    {
        final=0;
        scanf("%lld",&arrsize);
        for(i=0;i<arrsize;i++)
        {
            cin>>a[i];
        }
        
        merge_sort(a,0,arrsize-1);
        cout<<final<<endl;
    }
    
}
void merge(lli a[] , lli left , lli mid , lli right)
{
    lli array[100000];
    lli i=left, j=mid+1 , k=0;
    
    while((i<=mid)&&(j<=right))
    {
        if(a[i]<=a[j])
            array[k++]=a[i++];
    
        else 
        { 
            final=final+mid-i+1;
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


