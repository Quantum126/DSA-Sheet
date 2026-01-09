#include<stdio.h>
void main()
{
    int n=5,m= 3;
int arr[]={1, 2, 3, 4, 6};
int brr[]={1,2,3};
int crr[n+m];

int k=0;
for(int i=0;i<n;i++)
{
 crr[k]=arr[i];
 k++;
}

for(int j=0;j<m;j++)
{
 crr[k]=brr[j];
 k++;
}

for(int i=0;i<n+m;i++)
{
    for(int j=0;j<m+n;j++)
    {   if(i!=j)
        
        if(crr[i]==crr[j]){
           
            crr[j]=0;
        }
    
    }
   // printf("\n");
}

for(int i=0;i<n+m;i++)
{
    printf("%d ",crr[i]);
}
}
