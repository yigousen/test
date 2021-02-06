#include<stdio.h>
int FindNum(int arr[3][3],int k,int *px,int*py)
{//删除整行或者整列 
	int x=0;int y=*py-1;
	while(x<=*px-1&&y>=0)
	{
		if(arr[x][y]>k)
		{
			y--;
		}
		else if(arr[x][y]<k)
		{
			x++;
		}
		else
		{
			*px=x;
			*py=y;
			return 1;
		}
	 } 
	 return 0;
 } 
 int main()
 {
 	int arr[3][3]={{1,2,3},{2,3,4},{4,5,6}};
 	int k=5;
 	int x=3;int y=3;
 	//返回型参数 
 	int ret=FindNum(arr,k,&x,&y);
 	if (ret==1)
 	{
 		printf("找到了\n");
 		printf("下标是：%d %d\n",x,y);
 		
	 }
	 else 
	 {
	 	printf("找不到\n");
	 }
	 return 0; 
 }
