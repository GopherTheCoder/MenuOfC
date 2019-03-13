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


void main(void) {
	char chapter = 0, problem = 0;
	char lvl = 1;


	welcome();
	while (lvl!=0) { //菜单
		switch (lvl) {
			case 1:
				chapter = levelOne(&lvl);
				break;


			case 2:
				problem = levelTwo(chapter, &lvl);
				break;


			case 3:
				levelThree(chapter, problem, &lvl);
				break;


			default:
				break;
		}
	}


	system("cls");
}


void welcome() {
	system("cls");
	printf("**********Welcome**********\n");
	printf("C语言程序设计全书编程题答案目录\n");
	printf("按下回车以开始。。。\n");
	getchar();
}

//程序结束时必然会执行exit方法 可重写
void exit() {
	char confirm=1;
	char c;


	printf("确定要退出吗？ Y/N\n");
	while ((c = getchar()) != EOF && c != '\n'); // 清除缓冲区
	confirm = getchar();
	switch (confirm) {
		case 'Y':
			break;


		case 'N'://返回上一页面
			break;


		default:
			system("cls");
			printf("错误！ 非法输入！ 请重新输入\n");
			exit(); //尾递归漏洞？
	}
}