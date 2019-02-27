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
	int lvl=0;


	welcome();
	while (lvl!=0) //菜单
	{
		switch (lvl) {
		case 1:
			break;


		case 2:
			break;


		case 3:
			break;


		default:
			break;
		}
	}


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


	printf("确定要退出吗？ Y/N");
	confirm = getchar();
	switch (confirm)
	{
	case 'Y':
		break;


	case 'N':
		break;


	default:
		system("cls");
		printf("Fail!Wrong input.");
		exit();
	}
}