#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, c, d, e,f;
	float b;
	printf("�@�Ѫ��`���{��:");
	scanf_s("%d", &a);
	printf("�T�o�@���ɦh�ֿ�:");
	scanf_s("%f", &b);
	printf("�����@���ɯ��p�h�֤���:");
	scanf_s("%d", &c);
	printf("�@�Ѫ������O:");
	scanf_s("%d", &d);
	printf("�@�Ѫ��q��O:");
	scanf_s("%d", &e);
	f = a / c * b + d + e;
	printf("���Ѫ���q�O��:%d\n", f);
	system("pause");
	return 0;
}