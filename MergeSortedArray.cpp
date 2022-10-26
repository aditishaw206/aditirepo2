#include<stdio.h>
int main()
{
    int n1,n2,i,j;
    printf("Enter length of First Array \n");
    scanf("%d",&n1);
    int a[n1];
    printf("Enter array elements \n");
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
    printf("Enter length of Second Array \n");
    scanf("%d",&n2);
    int b[n2];
    printf("Enter array elements \n");
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
    i=0,j=0;
    int k=0,n=(n1+n2);
    int c[n];
    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j])
        {   c[k]=a[i];
            k++;
            i++;
        }
		else
		{
            c[k]=b[j];
            k++;
            j++;
        }
    }
    if(i>=n1)
	{
        while(j<n2)
		{
            c[k]=b[j];
            k++;
            j++;
        }
    }
	else
	{
        while(i<n1){
            c[k]=a[i];
            k++;
            i++;
        }
    }
    printf("Merged Sorted Array is \n");
    for(i=0;i<k;i++)
        printf("%d ",c[i]);
    return 0;
}
