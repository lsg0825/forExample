#include <stdio.h>

int main()
{
	Example05();
	}

	int Example01() {
		// printf :���
		//scanf_s : �Է�

		// 0�� �Է��ϸ� "�ȳ��ϼ���"
		// 1�� �Է��ϸ� "�ȳ��� ������"
		// 2�� �Է��ϸ� "��"

		int input = 0;
	reinput:
		printf("���ڸ� �Է��ϼ��� : ");
		scanf_s("%d", &input);


		switch (input) //�ݺ���
		{
		case 0:
			printf("�ȳ��ϼ���");
			break;
		case 1:
			printf("�ȳ���������");
			break;
		case 2:
		case 3:
			printf("��");
			break;
		default:
			goto reinput;

		}
	}

	int Example02() {
		//���ڸ� �Է¹޾ƶ�
		//0,2,4,6,8 �Է� �� "¦��"
		//1,3,5,7,9 �Է� �� "Ȧ��"
		// 0~9 ���� ���ڰ� �ƴ϶��
		// "���� ������ ������ϴ�." ���
		// �ٽ� �Է��ϵ��� goto�� ����ϱ�

		int output = 0;
	reoutput:
		printf("0~9�� ���ڸ� �Է��ϼ��� : ");
		scanf_s("%d", &output);

		switch (output) {
		case 0:
			printf("¦��\n");
			break;
		case 1:
			printf("Ȧ��\n");
			break;
		case 2:
			printf("¦��\n");
			break;
		case 3:
			printf("Ȧ��\n");
			break;
		case 4:
			printf("¦��\n");
			break;
		case 5:
			printf("Ȧ��\n");
			break;
		case 6:
			printf("¦��\n");
			break;
		case 7:
			printf("Ȧ��\n");
			break;
		case 8:
			printf("¦��\n");
			break;
		case 9:
			printf("Ȧ��\n");
			break;
		default:
			printf("���� ������ ������ϴ�\n");
			printf("�ٽ� �Է����ּ���\n");
			goto reoutput;
		}
	}

	int Example03() {
		int input = 1;
		printf("���� �Է� : ");
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
		printf("�ﰢ�� ũ�⸦ �Է����ּ��� : ");
		scanf_s("%d", &size);

		for (int x = 0; x < size; x++) {
			for (int y = size - x; y > 0; y--)
			{
				printf("*");
			}
			printf("\n");
		}
		
			
		

        // ���δ� X, ���δ� Y
		//���� ���̸� �Է����ּ��� : 5
		//���� ���̸� �Է����ּ��� : 3
		//*****
		//*****
		//*****

		//���� ���̸� �Է����ּ��� : 8
		//���� ���̸� �Է����ּ��� : 7
		//*****
		//*****
		//*****
	}

	int Example05() {
		int num;
		printf("���ڸ� �Է����ּ��� : ");
		scanf_s("%d", &num);

		//���ڸ� �Է����ּ��� : -2
		//[-2]�� ������ [2]�Դϴ�.

		//���ڸ� �Է����ּ��� : -999
		//[-999]�� ������ [999]�Դϴ�.

		//���ڸ� �Է����ּ��� : 50
		//[50]�� ������ [50]�Դϴ�.

	}