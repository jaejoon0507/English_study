#define _CRT_SECURE_NO_WARNINGS //  ���� ���� ���� ������ ���� ����
#include<stdio.h>
#include<time.h> // time �Լ��� ����� ��� ����
#include<string.h> // strcpy�� strtok �Լ��� ����� ��� ����
#include<stdlib.h> // rnad�� srand �Լ��� ����� ��� ����

int main_b() {
	char question[12][80] = { "When can i a copy?", "What is the best way to go to the food store?","Why are you late?","It's cold isn't it?","Can i fill out this application?","What causing the noise upstairs?","Will you order supplies tommorow?","My laptop won't start?","I'll send you a price list?","How long have you worked at our company?","We have a meeting at two","Escuse me, i'm looking for a book colled communication by Rachel Evans?" };
	char r_answer[12][80] = { "On the second floor","Take highway 52","I missed the bus","Yes, you should wear swearter","Sure, no problem","The neighbor are moving the furniture","It was a surprise","Maybe the battery's out","That'll be great,thank you", "For five years","Realy? I didn't know that","I'm sorry, we don't have that book, I'll order it for you" };
	char answer[71], storage[71];

	srand(time(NULL)); // ���� ���ذ� ����
	for (int i = 11; i > 0; i--)
	{
		int randdom = rand() % i + 1; // 0~i���� ���� �߻�
		strcpy(storage, question[i]);
		strcpy(question[i], question[randdom]);
		strcpy(question[randdom], storage);  // ���� ��ġ ����

		strcpy(storage, r_answer[i]);
		strcpy(r_answer[i], r_answer[randdom]);
		strcpy(r_answer[randdom], storage); // ������ ���� ��ġ�� �� ��ġ ����

		printf("%s ", question[i]);
		scanf_s("%s", &answer, 71);
		printf("%s \n", r_answer[i]);



	}


	printf("�ȳ�");
	return 0;
}