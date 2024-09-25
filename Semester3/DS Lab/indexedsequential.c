#include <stdio.h>
#define block 3
int indexedseq(int *arr,size,key)
{
    int ind[size/block];
    int j=0;
    int start,end;
    for(int i=0;i<size;i+=block)
    ind[j++]=i;
    if(key<arr[index[0]]||key>arr[index[j-1]])
    {
        printf("Element not present");
        exit(0);
    }
    else{
        for(int i=1;i<=j;i++)
        if(key<=arr[ind[i]])
        {
            start=ind[i-1];
            end=start+block;
            break;
        }
    }
    return seqsearch(arr,start,end,key);
}
void seqsearch(int *arr,int start,int end,int key)
{
    int i,flag=0;
    for(i=start;i<=end;i++)
    {w
        if(key==arr[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("Key is found at index --> %d",i);
    else
    printf("Key is not found in the array")
}
int main()
{
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter the element to be searched");
    int key;
    scanf("%d",&key);
    print(indexedseq(arr,n,key));
}