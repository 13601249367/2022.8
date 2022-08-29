#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    //判断输入的一个数是否为偶数
    int num = 0;
    scanf("%d\n", &num);
    if (num % 2 != 0)
        printf("是\n");
    else
        printf("否\n");

    //列出1-100的所有奇数
    int a = 1;
    while (a <= 100)
    {
        if (a % 2 != 0)
            printf("%d\n", a);
        a++;
    }

    //基础练习：输出1-100所有数字
    int i = 1;
    while (i <= 100)
    {

        if (i >= 100)
            printf("%d\n", i);
        else
            printf("%d\n", i);
        i++;
    }

    //列出1-100的所有偶数
    int b = 1;
    while (b <= 100)
    {
        if (b % 2 != 1)
            printf("%d\n", b);
        b++;
    }

    //输入年龄判断
    int age = 0;
    scanf("%d",& age);
    if (age <= 18)
    {
        printf("未成年");
    }
    else if (age > 18 && age <= 30)
    {
        printf("青年");
    }
    else if (age > 30 && age <= 60)
    {
        printf("中年");
    }
    else
    {
        printf("老年");
    }
    return 0;
}