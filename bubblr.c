#include<stdio.h>
int main()
{
int a[20],n,i,j,temp,key,first,mid,last;
//Accept array size 
printf("enter the number of elements : ");
scanf ("%d",&n);
//accept n elements into the array
printf ("enter %d into the integers : ",n);
for (i=0;i<n;i++);
{
scanf ("%d",&a[i]);
}
// sort the array elements 
for (i =0;i<n-1;i++)
{
for (j=0;j<n-1-i;j++)
{
if (a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf (" sorted array is..");
for (i=0;i<n;i++)
{
 printf ("%d\t",a[i]);
}
printf ("enter the key value to be searched")
scanf("%D",&key);
first=0;
last =n-1;
while (first<=last)
{
mid =(first + last)/2;
if (key==a[mid])
{
printf ("element is %d found at location %d \n",key,mid+1);
return 0;
}
else if (key<a[mid])
{
last=mid-1;
}
else if (key>a[mid])
{
first=mid+1;
}
}
printf("\n element %d not found in given array ",key);
return (1);
}

