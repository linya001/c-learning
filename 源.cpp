#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int sum(int num1,int num2)
{
	int sum = num1 + num2;
	return sum;
}
//
//int main()
//{
//	int a=sum(92, 10);
//	int b=sum(86, 9);
//	if (a >= b)
//	{
//		printf("a获得胜利");
//	}
//
////}
//int main()
//{
//	srand(time(NULL));
//	int j;
//	scanf_s("%d", &j);
//	while(1)
//	{   
//		int num = rand() % 100 + 1;
//		printf("%d\n", num);
//		if (num == j)
//		{
//			break;
//		}
//	}
//}
//{
//	int arr[] = { 33,5,22,44,55 };
//	int max1 = arr[0] > arr[1] ? arr[0] : arr[1];
//	int max2 = arr[2] > arr[3] ? arr[2] : arr[3];
//	int max3 = max1 > max2 ? max1 : max2;
//	if (max3 > arr[4])
//	{
//		printf("最大值为%d", max3);
//	}
//	else
//	{
//		printf("最大值为%d", arr[4]);
//	}
//}
//int main()
//{
//	int arr[]= { 33,5,22,44,55 };
//	int max = 0;
//	for (int i = 0; i <= 4; i++)
//	{
//		
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	C
//}

//int aaa(int arr[], int num);
//int main()
//{
//	srand(time(NULL));
//	int arr[10] = { 0 };
//	int sum = 0;
//	int num;
//	
//	for (int i = 0; i < 10;)
//	{
//		num = rand() % 10 + 1;
//		int bbb = aaa(arr, num);
//		if(bbb == 0)
//		{ 
//		arr[i] = num; 
//		 sum = sum + arr[i];
//printf("%d\n", arr[i]);
//i++;
//		}
//		
//		
//	} 
//   
//	printf("为%d\n", sum);
//}
//
//int aaa(int arr[], int num)
//{
//	for (int j = 0; j <10; j++)
//	{
//		if (arr[j] == num)
//		{
//			return 1;
//		}
//		
//			
//		
//	}
//	return 0;
//int ju(int n, int arr[], int le);
//int main()
//{
//	srand(time(NULL));
//	
//	int arr[10] = { 0 };
	//int le = sizeof(arr) / sizeof(int);
//	int sum = 0;
//	for (int i = 0; i < le; )
//	{
//		int n = rand() % 100 + 1;
//		int m =ju(n, arr, le);
//		if (m == 0)
//		{
//        arr[i] = n;
//		sum = sum + arr[i];
//		printf("%d\n", arr[i]);
//		i++;
//		}
//		
//		
//	}
//	printf("和为%d\n", sum);
//	double av = (double)sum / 10;
//	int k = 0;
//	for (int i = 0; i < le; i++)
//	{
//		if (arr[i] < av)
//		{
//			k++;
//		}
//	}
//	printf("数量为%d\n",k);
//}
//
//int ju(int n,int arr[],int le)
//{
//	for (int j = 0; j < le; j++)
//	{
//		if (n == arr[j])
//		{
//			return 1;
//		}
//		
//		
//			
//		
//	}
//return 0;
//}
//int main()
//{
//	int arr[5] = {0};
//	int len = sizeof(arr) / sizeof(int);
//	for (int i = 0; i < len; i++)
//	{
//		printf("请输入数字%d:\n",i+1);
//		scanf_s("%d", &arr[i]);
//	}
//	printf("数组为：\n");
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	int i = 0;
//	int j = len - 1;
//	while (i < j)
//	{
//		int temp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = temp;
//		i++;
//		j--;
//	}
//	printf("数组为：\n");
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int len = sizeof(arr) / sizeof(int);
//	srand(time(NULL));
//	for (int i = 0; i < len;i++)
//	{
//		
//		int num = rand() % len;
//		int temp = arr[i];
//		arr[i] = arr[num];
//		arr[num] = temp;
//	
//	}
//	for (int i = 0; i < len;i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//int getre(int num1, int num2, int* res);
//int main()
//{
//	int a = 10;
//	int b = 0;
//	int res=0;
//	int flag = getre(a, b, &res);
//	printf("%d\n", res);
//}
//
//int getre(int num1, int num2, int* res)
//{
//	if (num2 == 0)
//	{
//		return 1;
//	}
//	*res = num1 % num2;
//	return 0;
//}

//int main()
//{
//    char a = '0';
//    scanf("%c", &a);
//    for (int i = 1; i <= 3; i++)
//    {
//        for (int j = i + 1; j <= 3; j++)
//        {
//            printf(" ");
//        }
//        for (int k = 1; k <= 2 * i - 1; k++)
//        {
//            printf("%c",a);
//        }
//        for (int l = i + 1; l <= 3; l++)
//        {
//            printf(" ");
//        }
//    }
//}
int jug(int x)
{
	for (int y = 2; y < x; y++)
	{
		int z = x % y;
		if (z == 0)
		{
			return 1;
		}
		
	}
	return 0;

}



int main()
{
	int a = 0;
	for (int i = 100; i <= 200; i++)
	{
		int j = jug(i);
		if (j == 0)
		{
			printf("%d ", i);
		}
	}
}