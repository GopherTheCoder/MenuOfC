/*
	AUTHOR:Gopher
	Creat Date:2019/2/27
*/


#include"levelOne.h"
#include"levelTwo.h"
#include"levelThree.h"
#include<stdio.h>


void confirm(void);
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
	confirm();
}


void welcome() {
	system("cls");
	printf("**********Welcome**********\n\n");
	printf("C语言程序设计全书编程题答案\n\n");
	printf("Developed by Gopher\n\n");
	printf("\
  ███╗   ███╗  ███╗  █╗  █╗ ████╗ ███╗\n\
 █╔════╝  █╔═══█╗ █╔══█╗ █║  █║ █╔═════╝ █╔══█╗\n\
 █║ ██╗ █║   █║ ███╔╝ █ ██║ ███╗   ███╔╝\n\
 █║   █║ █║   █║ █╔═══╝  █╔══█║ █╔═══╝   █╔══█╗\n\
 ╚███╔╝ ╚███╔╝ █║      █║  █║ ████╗ █║  █║\n\
  ╚═════╝   ╚═════╝  ╚═╝      ╚═╝  ╚═╝ ╚═══════╝ ╚═╝  ╚═╝\n\n");
	printf("按下回车以开始。。。\n");
	getchar();
}

//最后的挣扎
void confirm() {
	char choice=1;
	char c;


	printf("确定要退出吗？ Y/N\n");
	while ((c = getchar()) != EOF && c != '\n'); // 清除缓冲区
	choice = getchar();
	switch (choice) {
		case 'y':
		case 'Y': //退出
			exit();

		case 'n':
		case 'N': //返回主菜单
			while ((c = getchar()) != EOF && c != '\n'); // 清除缓冲区
			main();


		default:
			system("cls");
			printf("错误！ 非法输入！ 请重新输入\n");
			confirm(); //尾递归漏洞？
	}
}