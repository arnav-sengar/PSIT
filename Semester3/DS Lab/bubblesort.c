#include <stdio.h>
void swap(int* a,int *b)
{
    int temp =*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements :\n");
    for(int i=0;i<n;i++)
      scanf("%d",&arr[i]);
    for(int i=0;i<n-1;i++)
    for(int j=0;j<n-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        swap(arr+j,arr+(j+1));
    }
    printf("The array after applying bubble sort is :\n");
    for(int i=0;i<n;i++)
    printf("%d\n",arr[i]);
}
