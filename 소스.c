#include<stdio.h>

int main() {
	char a[][30] = { "I am student", "llo" };
	char b[10][30];
	int i = 0;
	
	char* ptr = strtok(a[0], " ");      // " " ���� ���ڸ� �������� ���ڿ��� �ڸ�, ������ ��ȯ

	while (ptr != NULL)               // �ڸ� ���ڿ��� ������ ���� ������ �ݺ�
	{
		strcpy(b[i],ptr);
		printf("%s\n", b[i]);
		ptr = strtok(NULL, " ");  
		
		i = i + 1;
	}
	
	
	return 0;
}