#define _CRT_SECURE_NO_WARNINGS //  보안 경고로 인한 컴파일 에러 방지
#include<stdio.h>
#include<time.h> // time 함수가 선언된 헤더 파일
#include<string.h> // strcpy와 strtok 함수가 선언된 헤더 파일
#include<stdlib.h> // rnad와 srand 함수가 선언된 헤더 파일

char question[12][80] = { "When can i a copy?", "What is the best way to go to the food store?","Why are you late?","It's cold isn't it?","Can i fill out this application?","What causing the noise upstairs?","Will you order supplies tommorow?","My laptop won't start?","I'll send you a price list?","How long have you worked at our company?","We have a meeting at two","Escuse me, i'm looking for a book colled communication by Rachel Evans?" };
char r_answer[12][80] = { "On the second floor","Take highway 52","I missed the bus","Yes, you should wear swearter","Sure, no problem","The neighbors are moving the furniture","I did it yesterday","Maybe the battery's out","That'll be great,thank you", "For five years","Realy? I didn't know that","I'm sorry, we don't have that book, I'll order it for you" };
char answer[71] = "", storage[71];


int main_b() {
	
	srand(time(NULL)); // 난수 기준값 변경
	for (int i = 11; i > 0; i--)
	{
		int randdom = rand() % i + 1; // 0~i까지 난수 발생
		strcpy(storage, question[i]);
		strcpy(question[i], question[randdom]);
		strcpy(question[randdom], storage);  // 질문 위치 변경

		strcpy(storage, r_answer[i]);
		strcpy(r_answer[i], r_answer[randdom]);
		strcpy(r_answer[randdom], storage); // 질문과 같은 위치에 답 위치 변경

		printf("%s ", question[i]);
	    fgets(answer, 71, stdin); // 엔터를 제외하고 모든 문자 입력
		answer[strlen(answer) - 1] = 'w0'; // 뛰어쓰기  제거
		printf("%s \n", r_answer[i]);



	}


	printf("\n \n \n \n \n \n");
	return 0;
}
int main_b2() {
	srand(time(NULL)); // 난수 기준값 변경
	for (int i = 11; i > 0; i--)
	{
		int randdom = rand() % i + 1; // 0~i까지 난수 발생
		strcpy(storage, r_answer[i]);
		strcpy(r_answer[i], r_answer[randdom]);
		strcpy(r_answer[randdom], storage);  // 질문 위치 변경

		strcpy(storage, question[i]);
		strcpy(question[i], question[randdom]);
		strcpy(question[randdom], storage); // 질문과 같은 위치에 답 위치 변경

		printf("%s ", r_answer[i]);
		gets(answer); // 엔터를 제외하고 모든 문자 입력
		printf("%s \n", question[i]);

		

	}
	printf("\n \n \n \n \n \n");
}