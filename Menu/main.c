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
	char lvl=0;
	char chapter = 0;


	welcome();
	while (lvl!=0) { //�˵�
		switch (lvl) {
			case 1:
				chapter = levelOne();


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

//�������ʱ��Ȼ��ִ��exit���� ����д
void exit() {
	char confirm=1;


	printf("ȷ��Ҫ�˳��� Y/N\n");
	confirm = getchar();
	switch (confirm) {
		case 'Y':
			break;


		case 'N'://������һҳ��
			break;


		default:
			system("cls");
			printf("Fail! Input illegal.\n");
			exit();
	}
}