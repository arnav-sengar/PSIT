#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array\n");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    printf("Enter the element you want to search\n");
    int key;
    scanf("%d",&key);
    int low=0,high=size-1;
    int mid=(low+high)/2;
    while(low<=high)
    {
        if(arr[mid]==key)
        {
            printf("Element found at index-->%d",mid);
            break;
        }
        else if(key>arr[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return 0;
}