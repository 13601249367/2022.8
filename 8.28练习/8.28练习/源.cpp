#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    //�ж������һ�����Ƿ�Ϊż��
    int num = 0;
    scanf("%d\n", &num);
    if (num % 2 != 0)
        printf("��\n");
    else
        printf("��\n");

    //�г�1-100����������
    int a = 1;
    while (a <= 100)
    {
        if (a % 2 != 0)
            printf("%d\n", a);
        a++;
    }

    //������ϰ�����1-100��������
    int i = 1;
    while (i <= 100)
    {

        if (i >= 100)
            printf("%d\n", i);
        else
            printf("%d\n", i);
        i++;
    }

    //�г�1-100������ż��
    int b = 1;
    while (b <= 100)
    {
        if (b % 2 != 1)
            printf("%d\n", b);
        b++;
    }

    //���������ж�
    int age = 0;
    scanf("%d",& age);
    if (age <= 18)
    {
        printf("δ����");
    }
    else if (age > 18 && age <= 30)
    {
        printf("����");
    }
    else if (age > 30 && age <= 60)
    {
        printf("����");
    }
    else
    {
        printf("����");
    }
    return 0;
}