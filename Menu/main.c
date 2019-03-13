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
	while (lvl!=0) { //�˵�
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
	printf("C���Գ������ȫ�������Ŀ¼\n");
	printf("���»س��Կ�ʼ������\n");
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
			printf("���� �Ƿ����룡 ����������\n");
			exit(); //β�ݹ�©����
	}
}