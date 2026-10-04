#include<stdio.h>

int main()
{
    int n;    //输入数据
    scanf_s("%d",&n);//输入一共有多少数据
    int arr[n];//定义一个数组
    for (int i=0;i<n;i++)//输入需要排序的数据
    {
        scanf_s("%d",&arr[i]);
    }

    for (int i=0;i<n;i++)//冒泡排序
    {
        for (int j=i+1;j<n;j++)
        {
            if (arr[j]<arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i=0;i<n;i++)//输出结果
    {
        printf("%d\t ",arr[i]);
    }
    return 0;
}