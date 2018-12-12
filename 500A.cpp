#include <cstdio>
int main()
{
    int n,m,a[30010];
    scanf("%d%d", &n, &m);
	int sum=1,flag=0;//flag标记是否能到达t那个房子 ，sum初始化为1 
    for(int i=1; i<n; i++)
    {
   		scanf("%d",&a[i]);//输入第i个房子能往后到达的指定距离 
	}
	int i=1;
	while(i<n)
	{
		sum=sum+a[i];
    	i=sum;
        if(i==m)//一旦到达了这个房子，那么标记一下，跳出 
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
