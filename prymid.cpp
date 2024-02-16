#include<iostream>
using namespace std;
int main()
{
    int n,count=1,i,j,k;
    printf("enter number of rows:-");
    scanf("%d",&n);

for(i=1;i<=n;i++)
{
    for(j=1;j<=n-i;j++)
    {
        cout<<" ";
    }
for(k=1;k<=i;k++)
{
    cout<<count<<" ";
    count++;
}
cout<<endl;
}
return 0;
}