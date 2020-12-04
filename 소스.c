#include<stdio.h>

int main() {
	char a[][30] = { "I am student", "llo" };
	char b[10][30];
	int i = 0;
	
	char* ptr = strtok(a[0], " ");      // " " 공백 문자를 기준으로 문자열을 자름, 포인터 반환

	while (ptr != NULL)               // 자른 문자열이 나오지 않을 때까지 반복
	{
		strcpy(b[i],ptr);
		printf("%s\n", b[i]);
		ptr = strtok(NULL, " ");  
		
		i = i + 1;
	}
	
	
	return 0;
}