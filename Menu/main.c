/*
	AUTHOR:Gopher
	Creat Date:2019/2/27
*/


#include"levelOne.h"
#include"levelTwo.h"
#include"levelThree.h"
#include<stdio.h>


void exit(void);
void welcome(void);
char lvl = 1;


void main(void) {
	char chapter = 0, problem = 0;


	welcome();
	while (lvl!=0) { //菜单
		switch (lvl) {
			case 1:
				chapter = levelOne();
				break;


			case 2:
				problem = levelTwo(chapter);
				break;


			case 3:
				break;


			default:
				break;
		}
	}


	system("cls");
}


void welcome() {
	system("cls");
	printf("~~~~~~~~~~Welcome~~~~~~~~~~\n");
	printf("Press ENTER to start.\n");
	getchar();
}

//程序结束时必然会执行exit方法 可重写
void exit() {
	char confirm=1;


	printf("确定要退出吗？ Y/N\n");
	confirm = getchar(); // 需要清除屏幕缓冲区
	switch (confirm) {
		case 'Y':
			break;


		case 'N'://返回上一页面
			break;


		default:
			system("cls");
			printf("Fail! Input illegal.\n");
			exit(); //尾递归漏洞？
	}
}