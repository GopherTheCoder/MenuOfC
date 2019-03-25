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
	confirm();
}


void welcome() {
	system("cls");
	printf("**********Welcome**********\n\n");
	printf("C���Գ������ȫ�������\n\n");
	printf("Developed by Gopher\n\n");
	printf("\
  �������[   �������[  �������[  ���[  ���[ ���������[ �������[\n\
 ���X�T�T�T�T�a  ���X�T�T�T���[ ���X�T�T���[ ���U  ���U ���X�T�T�T�T�T�a ���X�T�T���[\n\
 ���U �����[ ���U   ���U �������X�a �� �����U �������[   �������X�a\n\
 ���U   ���U ���U   ���U ���X�T�T�T�a  ���X�T�T���U ���X�T�T�T�a   ���X�T�T���[\n\
 �^�������X�a �^�������X�a ���U      ���U  ���U ���������[ ���U  ���U\n\
  �^�T�T�T�T�T�a   �^�T�T�T�T�T�a  �^�T�a      �^�T�a  �^�T�a �^�T�T�T�T�T�T�T�a �^�T�a  �^�T�a\n\n");
	printf("���»س��Կ�ʼ������\n");
	getchar();
}

//��������
void confirm() {
	char choice=1;
	char c;


	printf("ȷ��Ҫ�˳��� Y/N\n");
	while ((c = getchar()) != EOF && c != '\n'); // ���������
	choice = getchar();
	switch (choice) {
		case 'y':
		case 'Y': //�˳�
			exit();

		case 'n':
		case 'N': //�������˵�
			while ((c = getchar()) != EOF && c != '\n'); // ���������
			main();


		default:
			system("cls");
			printf("���� �Ƿ����룡 ����������\n");
			confirm(); //β�ݹ�©����
	}
}