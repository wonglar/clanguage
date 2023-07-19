#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("*****************************\n");
	printf("******      1.play     ******\n");
	printf("******      0.exit     ******\n");
	printf("*****************************\n");
}

void game()
{
	// 定义棋盘
	char board[ROW][COL] = { 0 };
	// 初始化棋盘
	InitBoard(board, ROW, COL);
	// 打印棋盘
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		// 玩家下棋
		PlayerMove(board, ROW, COL);
		// 打印棋盘
		DisplayBoard(board, ROW, COL);

		// 电脑下棋
		ComputerMove(board, ROW, COL);
		// 打印棋盘
		DisplayBoard(board, ROW, COL);
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择有误！请重新选择！\n");
			break;
		}
	} while (input);

	return 0;
}

