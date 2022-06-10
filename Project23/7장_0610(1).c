//chp.7 �迭
//p.261

#define _CRT_SEUCURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

int main(void)
{
	int i;
	int scores[SIZE];
	scores[0] = 10;
	scores[1] = 20;
	scores[2] = 30;
	scores[3] = 40;
	scores[4] = 50;

	for (i = 0; i < SIZE; i++)
		printf("scores[%d]=%d\n", i, scores[i]);

	return 0;
}

//scores[0] = 10
//scores[1] = 20
//scores[2] = 30
//scores[3] = 40
//scores[4] = 50


p.262
#define _CRT_SEUCURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 26

int main(void)
{
	int i;
	char codes[SIZE];

	for (i = 0; i < SIZE; i++)
		codes[i] = 'a' + i;

	for (i = 0; i < SIZE; i++)
		printf("%c ", codes[i]);
	printf("\n");

	return 0;
}

//a b c d e f g h i j k l m n o p q r s t u v w x y z


#define _CRT_SEUCURE_NO_WARNINGS
#define STUDENTS 5
#include <stdio.h>

int main(void)
{
	int scores[STUDENTS];
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++)
	{
		printf("�л����� ������ �Է��ϼ���: ");
		scanf_s("%d", &scores[i]);
	}

	for (i = 0; i < STUDENTS; i++)
		sum += scores[i];

	average = sum / STUDENTS;
	printf("���� ��� = %d\n", average);

	return 0;
}

//�л����� ������ �Է��ϼ��� : 10
//�л����� ������ �Է��ϼ��� : 20
//�л����� ������ �Է��ϼ��� : 30
//�л����� ������ �Է��ϼ��� : 40
//�л����� ������ �Է��ϼ��� : 50
//���� ��� = 30


//p.266 �迭�� �ʱ�ȭ
#define _CRT_SEUCURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int scores[5] = { 31, 63, 62, 87, 14 };
	int i;

	int size;

	for (i = 0; i < 5; i++)
		printf("scores[%d] = %d\n", i, scores[i]);

	return 0;
}

//scores[0] = 31
//scores[1] = 63
//scores[2] = 62
//scores[3] = 87
//scores[4] = 14


#define _CRT_SEUCURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 4

int main(void)
{
	int att_book[SIZE] = { 0 };
	int i, count = 0;

	double ratio;

	for (i = 0; i < SIZE; i++)
	{
		printf("%d��° ���ǿ� �⼮�ϼ̳���(�⼮�� 1, �Ἦ�� 0):", i + 1);
		scanf_s("%d", &att_book[i]);
	}

	for (i = 0; i < SIZE; i++)
	{
		if (att_book[i] == 0)
			count++;
	}

	for (i = 0; i < SIZE; i++)
	{
		printf("att_book[%d]=%d\n", i + 1, att_book[i]);
	}

	ratio = count / 4.0;

	if (ratio > 0.3)
		printf("���� �ϼ� �����Դϴ�(%f%%).\n", ratio * 100.0);
	else
		printf("���� �ϼ� ����Դϴ�(%f%%).\n", ratio * 100.0);

	return 0;
}

//1��° ���ǿ� �⼮�ϼ̳���(�⼮�� 1, �Ἦ�� 0) :1
//2��° ���ǿ� �⼮�ϼ̳���(�⼮�� 1, �Ἦ�� 0) : 1
//3��° ���ǿ� �⼮�ϼ̳���(�⼮�� 1, �Ἦ�� 0) : 1
//4��° ���ǿ� �⼮�ϼ̳���(�⼮�� 1, �Ἦ�� 0) : 1
//att_book[1] = 1
//att_book[2] = 1
//att_book[3] = 1
//att_book[4] = 1
//���� �ϼ� ����Դϴ�(0.000000 %).


//p.271
#define _CRT_SEUCURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main(void)
{
	int prices[SIZE] = { 12,3,19,6,18,8,12,4,1,19 };
	int i, minimum;

	printf("[");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", prices[i]);
	}
	printf("]\n");

	minimum = prices[0];
	for (i = 1; i < SIZE; i++)
	{
		if (prices[i] < minimum)
			minimum = prices[i];
	}

	printf("�ּڰ��� %d�Դϴ�.\n", minimum);
	return 0;
}

//[12 3 19 6 18 8 12 4 1 19]
//�ּڰ��� 1�Դϴ�.


#define _CRT_SEUCURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main(void)
{
	int key, i;

	int list[SIZE] = { 10,20,30,40,50,60,70,80,90,100 };

	printf("[");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", list[i]);
	}
	printf("]\n");

	printf("Ž���� ���� �Է��ϼ���: ");
	scanf_s("%d", &key);

	for (i = 0; i < SIZE; i++)
	{
		if (list[i] == key)
		{
			printf("Ž�� ���� �ε��� = %d\n", i);
			break;
		}
	}

	return 0;
}

//[10 20 30 40 50 60 70 80 90 100]
//Ž���� ���� �Է��ϼ��� : 60
//Ž�� ���� �ε��� = 5


//p.277 ���� ����
#define _CRT_SEUCURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

int main(void)
{
	int i, k, count;
	int list[SIZE] = { 16,7,9,1,3 };

	for (k = 0; k < SIZE; k++)
	{
		count = 0;
		for (i = 0; i < SIZE - 1; i++)
		{
			if (list[i] > list[i + 1])
			{
				int tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
			count++;
		}
	}
	printf("���� ����: ");

	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", list[i]);
	}
	return 0;
}

//���� ���� : 1 3 7 9 16


#define _CRT_SEUCURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j;
	int a[3][5] = { {0,1,2,3,4},{0,1,2,3,4},{0,1,2,3,4} };

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("a[%d][%d] = %d ", i, j, a[i][j]);
		}
		printf("\n");
	}

	return 0;
}

//a[0][0] = 0 a[0][1] = 1 a[0][2] = 2 a[0][3] = 3 a[0][4] = 4
//a[1][0] = 0 a[1][1] = 1 a[1][2] = 2 a[1][3] = 3 a[1][4] = 4
//a[2][0] = 0 a[2][1] = 1 a[2][2] = 2 a[2][3] = 3 a[2][4] = 4


#define _CRT_SEUCURE_NO_WARNINGS
#include <stdio.h>
#define ROWS 3
#define COLS 3

int main(void)
{
	int r, c;

	int A[ROWS][COLS] = { {1,0,0},{0,1,0},{0,0,1} };
	int B[ROWS][COLS] = { {1,0,0},{0,1,0},{0,0,1} };
	int C[ROWS][COLS];

	for (r = 0; r < ROWS; r++)
	{
		for (c = 0; c < COLS; c++)
		{
			C[r][c] = A[r][c] + B[r][c];
			printf("%d ", C[r][c]);
		}
		printf("\n");
	}

	return 0;
}

//2 0 0
//0 2 0
//0 0 2


//�̴�������Ʈ p.285
#define _CRT_SEUCURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char board[3][3];
	int x, y, k, i;

	for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++)
			board[x][y] = ' ';

	for (k = 0; k < 9; k++)
	{
		printf("(x,y) ��ǥ: ");
		scanf_s("%d %d", &x, &y);
		board[x][y] = (k % 2 == 0) ? 'X' : 'O';

		for (i = 0; i < 3; i++)
		{
			printf("---|---|---\n");
			printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		}
		printf("---|---|---\n");
	}
	return 0;
}

//(x, y) ��ǥ: 2 2
//-- - | -- - | -- -
//|   |
//-- - | -- - | -- -
//|   |
//-- - | -- - | -- -
//|   | X
//-- - | -- - | -- -
//(x, y) ��ǥ: 1 1
//-- - | -- - | -- -
//|   |
//-- - | -- - | -- -
//| O |
//-- - | -- - | -- -
//|   | X
//-- - | -- - | -- -
//(x, y) ��ǥ: 0 0
//-- - | -- - | -- -
//X |   |
//-- - | -- - | -- -
//| O |
//-- - | -- - | -- -
//|   | X
//-- - | -- - | -- -