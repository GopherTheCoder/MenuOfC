/*
	AUTHOR:Gopher
	Creat Date:2019/2/27
*/


#include"levelOne.h"
#include"levelTwo.h"
#include"levelThree.h"
#include<stdio.h>


void exit(void);


void main(void) {
	int lvl;


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
			
		}
	}


	exit();
}


void exit() {
	char confirm;


	printf("确定要退出吗？ Y/N");
	getchar(&confirm);
	switch (confirm)
	{
	case 'Y':
		break;


	case 'N':
		break;


	default:
		break;
	}
}