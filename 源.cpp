//#include<stdio.h>
//#include<easyx.h>
//#include<stdlib.h>
//#include<conio.h>
//#define BOARD_SIZE 800
//#define GRID_SIZE (BOARD_SIZE/16)
//struct piece
//{
//	int x, y;
//};
//int sign = 1;
//piece a[225] = { 0 };
//int len = 0;
//int map[15][15] = { 0 };
//void drawchessboard()
//{
//	BeginBatchDraw();
//	setfillcolor(WHITE);
//	solidrectangle(0, 0, BOARD_SIZE, BOARD_SIZE);
//	setlinecolor(BLACK);
//	line(0, 0, BOARD_SIZE, 0);
//	FlushBatchDraw();
//	setlinestyle(0, 3);
//	for (int i = GRID_SIZE; i < BOARD_SIZE; i += GRID_SIZE)
//	{
//		line(GRID_SIZE, i, GRID_SIZE *15, i);
//		line(i, GRID_SIZE, i, GRID_SIZE * 15);
//	}
//	EndBatchDraw();
//	setlinestyle(0, 1);
//}
//void win(int y, int x,int sign1)
//{
//	int temp[23][23] = { 0 };
//	for (int i = 0; i < 15; i++)
//		for (int j = 0; j < 15; j++)
//			temp[i + 4][j + 4] = map[i][j];
//	x -= 1; y -= 1;
//	sign1 = sign1 > 1 ? 1 : 2;
//
//	for (int i = 0; i < 5; i++)
//	{
//		if (temp[x - i+4][y + 4] == sign1 && temp[x - i + 1 + 4][y + 4] == sign1 && temp[x - i + 2 + 4][y + 4] == sign1 && temp[x - i + 3 + 4][y + 4] == sign1 && temp[x - i + 4 + 4][y + 4] == sign1
//			|| temp[x + 4][y - i + 4] == sign1 && temp[x + 4][y - i + 1 + 4] == sign1 && temp[x + 4][y - i + 2 + 4] == sign1 && temp[x + 4][y - i + 3 + 4] == sign1 && temp[x + 4][y - i + 4 + 4] == sign1
//			|| temp[x - i + 4][y - i + 4] == sign1 && temp[x - i + 1 + 4][y - i + 1 + 4] == sign1 && temp[x - i + 2 + 4][y - i + 2 + 4] == sign1 && temp[x - i + 3 + 4][y - i + 3 + 4] == sign1 && temp[x - i + 4 + 4][y - i + 4 + 4] == sign1
//			|| temp[x + i + 4][y - i + 4] == sign1 && temp[x + i - 1 + 4][y - i + 1 + 4] == sign1 && temp[x + i - 2 + 4][y - i + 2 + 4] == sign1 && temp[x + i - 3 + 4][y - i + 3 + 4] == sign1 && temp[x + i - 4 + 4][y - i + 4 + 4] == sign1)
//		{
//			if (sign1 == 1)
//			{
//				MessageBox(GetHWnd(), "ºÚÆåÊ¤Àû", "¹§Ï²", MB_OK); exit(0);
//			}
//			else 
//			{
//				MessageBox(GetHWnd(), "°×ÆåÊ¤Àû", "¹§Ï²", MB_OK); exit(0);
//			}
//		}
//	}
//}
//void play()
//{
//	MOUSEMSG msg = GetMouseMsg();
//	if (msg.uMsg == WM_LBUTTONDOWN)
//	{
//		int x = (msg.x + 25) / 50;
//		int y = (msg.y + 25) / 50;
//		if (x >= 1 && x <= 15 && y >= 1 && y <= 15 && map[y - 1][x - 1] == 0)
//		{
//			if (sign == 1)
//			{
//				setfillcolor(BLACK);
//				map[y - 1][x - 1] = 1;
//				sign = 2;
//			}
//			else
//			{
//				setfillcolor(WHITE);
//				map[y - 1][x - 1] = 2;
//				sign = 1;
//			}
//			a[len].x = x; a[len].y = y; len++;
//			fillcircle(x * GRID_SIZE, y * GRID_SIZE, GRID_SIZE / 2);
//			win(x, y, sign);
//		}
//	}
//	if (msg.uMsg == WM_RBUTTONDOWN && len > 0)
//	{
//		if (MessageBox(GetHWnd(), "ÊÇ·ñ»ÚÆå", "ÌáÊ¾", MB_YESNO) == IDYES)
//		{
//			sign = sign > 1 ? 1 : 2;
//			len--;
//			map[a[len].y-1][a[len].x-1] = 0;
//			drawchessboard();
//			BeginBatchDraw();
//			setfillcolor(BLACK);
//			for (int i = 0; i < len; i += 2)
//			{
//				fillcircle(a[i].x * GRID_SIZE, a[i].y * GRID_SIZE, GRID_SIZE / 2);
//			}
//			setfillcolor(WHITE);
//			for (int i = 1; i < len; i += 2)
//			{
//				fillcircle(a[i].x * GRID_SIZE, a[i].y * GRID_SIZE, GRID_SIZE / 2);
//			}
//			EndBatchDraw();
//		}
//	}
//}
//int main()
//{
//	initgraph(BOARD_SIZE, BOARD_SIZE);
//	drawchessboard();
//	while (1)
//	{
//		play();
//	}
//	getchar();
//	closegraph();
//	return 0;
//}