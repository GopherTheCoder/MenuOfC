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
	while (lvl!=0) { //�˵�
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

//�������ʱ��Ȼ��ִ��exit���� ����д
void exit() {
	char confirm=1;
	char c;


	printf("ȷ��Ҫ�˳��� Y/N\n");
	while ((c = getchar()) != EOF && c != '\n'); // ���������
	confirm = getchar();
	switch (confirm) {
		case 'Y':
			break;


		case 'N'://������һҳ��
			break;


		default:
			system("cls");
			printf("Fail! Input illegal.\n");
			exit(); //β�ݹ�©����
	}
}