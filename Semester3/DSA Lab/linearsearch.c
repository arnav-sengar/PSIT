#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array\t");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter the element to be searched\t");
    int key;
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key){
        printf("Element is found at index %d\n",i);
        break;
        }
    }
    return 0;
}