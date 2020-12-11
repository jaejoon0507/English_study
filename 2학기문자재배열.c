#define _CRT_SECURE_NO_WARNINGS  //  보안 경고로 인한 컴파일 에러 방지
#include<stdio.h>
#include<time.h>  // 타임 함수가 포함된 헤더 파일
#include<stdlib.h>  //rand와 srand가 포함된 헤더 파일
#include<string.h>  // strcpy와 strcpy가 포함된 헤더 파일



int main_a() {
	char propose[10][50] = { "The copy machine is broken", "They are difficult to read", "I don't want to leav here", "She just moved to a new department", "The factory managers insect production every day", "I'm filing the papers right now", "I'm driving down the road", "Food is banned in the library", "I'll check the user's manual", "they bought tow coputer yesterday" };
	char ploblem[10][50];
	char korean[10][50] = { "복사기가 고장났다", "이것들은 읽기가 어렵다","나는 여기를 떠나고 싶지 않다","그녀는 새로운 부서로 이동했다","공장 관리자들은 매일 생산량을 조사한다.","나는 서류를 철하고 있다.","나는 도로에서 운전 중이다.","도서관에서 음식은 금지되어 있다.","제가 사용자 안내서를 확인하겠습니다.","그들은 어제 두 대의 컴퓨터를 구입하였다." };
	char putE[30] = " ";
	int i = 0;
	srand(time(NULL));  // 컴파일 할 때마다 난수 기준 값 변경




	for (int a = 0; a <= 9; a++) {
		char* ptr = strtok(propose[a], " ");   // " " 공백 문자를 기준으로 문자열을 자름, 포인터 반환

		while (ptr != NULL)               // 자른 문자열이 나오지 않을 때까지 반복
		{
			strcpy(ploblem[i], ptr);
			ptr = strtok(NULL, " ");
			i = i + 1;   // 단어 수 세기
		}
		for (int q = 0; q <= i - 1; q++) {    // 단어 순서 변경
			int random = rand() % i;  // 난수 생성
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
