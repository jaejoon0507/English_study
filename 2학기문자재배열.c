#define _CRT_SECURE_NO_WARNINGS  //  ���� ���� ���� ������ ���� ����
#include<stdio.h>
#include<time.h>  // Ÿ�� �Լ��� ���Ե� ��� ����
#include<stdlib.h>  //rand�� srand�� ���Ե� ��� ����
#include<string.h>  // strcpy�� strcpy�� ���Ե� ��� ����



int main_a() {
	char propose[10][50] = { "The copy machine is broken", "They are difficult to read", "I don't want to leav here", "She just moved to a new department", "The factory managers insect production every day", "I'm filing the papers right now", "I'm driving down the road", "Food is banned in the library", "I'll check the user's manual", "they bought tow coputer yesterday" };
	char ploblem[10][50];
	char korean[10][50] = { "����Ⱑ ���峵��", "�̰͵��� �бⰡ ��ƴ�","���� ���⸦ ������ ���� �ʴ�","�׳�� ���ο� �μ��� �̵��ߴ�","���� �����ڵ��� ���� ���귮�� �����Ѵ�.","���� ������ ö�ϰ� �ִ�.","���� ���ο��� ���� ���̴�.","���������� ������ �����Ǿ� �ִ�.","���� ����� �ȳ����� Ȯ���ϰڽ��ϴ�.","�׵��� ���� �� ���� ��ǻ�͸� �����Ͽ���." };
	char putE[30] = " ";
	int i = 0;
	srand(time(NULL));  // ������ �� ������ ���� ���� �� ����




	for (int a = 0; a <= 9; a++) {
		char* ptr = strtok(propose[a], " ");   // " " ���� ���ڸ� �������� ���ڿ��� �ڸ�, ������ ��ȯ

		while (ptr != NULL)               // �ڸ� ���ڿ��� ������ ���� ������ �ݺ�
		{
			strcpy(ploblem[i], ptr);
			ptr = strtok(NULL, " ");
			i = i + 1;   // �ܾ� �� ����
		}
		for (int q = 0; q <= i - 1; q++) {    // �ܾ� ���� ����
			int random = rand() % i;  // ���� ����
			strcpy(putE, ploblem[q]);
			strcpy(ploblem[q], ploblem[random]);
			strcpy(ploblem[random], putE);

		}


		for (int q = 0; q < i; q++) {
			printf("%s  ", ploblem[q]);
		}
		printf(":\n");
		printf("(%s) \n", korean[a]);
		printf("\n");
		i = 0;
	}


	return 0;
}
