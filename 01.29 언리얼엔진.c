#include <stdio.h>

int main()
{
	Example05();
	}

	int Example01() {
		// printf :출력
		//scanf_s : 입력

		// 0을 입력하면 "안녕하세요"
		// 1을 입력하면 "안녕히 가세요"
		// 2을 입력하면 "뭐"

		int input = 0;
	reinput:
		printf("숫자를 입력하세요 : ");
		scanf_s("%d", &input);


		switch (input) //반복문
		{
		case 0:
			printf("안녕하세요");
			break;
		case 1:
			printf("안녕히가세요");
			break;
		case 2:
		case 3:
			printf("뭐");
			break;
		default:
			goto reinput;

		}
	}

	int Example02() {
		//숫자를 입력받아라
		//0,2,4,6,8 입력 시 "짝수"
		//1,3,5,7,9 입력 시 "홀수"
		// 0~9 범위 숫자가 아니라면
		// "숫자 범위를 벗어났습니다." 출력
		// 다시 입력하도록 goto문 사용하기

		int output = 0;
	reoutput:
		printf("0~9중 숫자를 입력하세요 : ");
		scanf_s("%d", &output);

		switch (output) {
		case 0:
			printf("짝수\n");
			break;
		case 1:
			printf("홀수\n");
			break;
		case 2:
			printf("짝수\n");
			break;
		case 3:
			printf("홀수\n");
			break;
		case 4:
			printf("짝수\n");
			break;
		case 5:
			printf("홀수\n");
			break;
		case 6:
			printf("짝수\n");
			break;
		case 7:
			printf("홀수\n");
			break;
		case 8:
			printf("짝수\n");
			break;
		case 9:
			printf("홀수\n");
			break;
		default:
			printf("숫자 범위를 벗어났습니다\n");
			printf("다시 입력해주세요\n");
			goto reoutput;
		}
	}

	int Example03() {
		int input = 1;
		printf("숫자 입력 : ");
		scanf_s("%d", &input);
		for (int standard = 2; standard <= 9; standard++) {
			for (int i = 1; i <= 9; i++) {
				printf("%d * %d = %d\n", standard, i, i *standard);
			}
		}
		//2*1=2
		//2*2=4
		//2*3=6
		//2*4=8
		//2*5=10
		//2*6=12
		//2*7=14
		//2*8=16
		//2*9=18











	}

	int Example04() {
		int size;
		printf("삼각형 크기를 입력해주세요 : ");
		scanf_s("%d", &size);

		for (int x = 0; x < size; x++) {
			for (int y = size - x; y > 0; y--)
			{
				printf("*");
			}
			printf("\n");
		}
		
			
		

        // 가로는 X, 세로는 Y
		//가로 길이를 입력해주세요 : 5
		//세로 길이를 입력해주세요 : 3
		//*****
		//*****
		//*****

		//가로 길이를 입력해주세요 : 8
		//세로 길이를 입력해주세요 : 7
		//*****
		//*****
		//*****
	}

	int Example05() {
		int num;
		printf("숫자를 입력해주세요 : ");
		scanf_s("%d", &num);

		//숫자를 입력해주세요 : -2
		//[-2]의 절댓값은 [2]입니다.

		//숫자를 입력해주세요 : -999
		//[-999]의 절댓값은 [999]입니다.

		//숫자를 입력해주세요 : 50
		//[50]의 절댓값은 [50]입니다.

	}