#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>
#include<string.h>
#include<stdio.h>

int main() {
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("warning:��ĵ��Լ����ػ�\nTip�������룺������������ȡ���ػ�\n ");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;

	}
	return 0;


}

