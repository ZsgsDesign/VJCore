#include <cstdio>
int main()
{
    int n,m,a[30010];
    scanf("%d%d", &n, &m);
	int sum=1,flag=0;
    for(int i=1; i<n; i++)
    {
   		scanf("%d",&a[i]);
	}
	int i=1;
	while(i<n)
	{
		sum=sum+a[i];
    	i=sum;
        if(i==m)
		{
            flag = 1;
            break;
        } 
    }
    if(flag==1)
    {
       	printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
    return 0;
}
