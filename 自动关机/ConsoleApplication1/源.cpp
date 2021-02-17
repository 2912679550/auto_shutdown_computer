#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>
#include<string.h>
#include<stdio.h>

int main() {
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("warning:你的电脑即将关机\nTip：若输入：“我是猪”即可取消关机\n ");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;

	}
	return 0;


}

