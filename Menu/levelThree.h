#ifndef levelThree_h
#define levelThree_h


void levelThree(char, char, char *);


void levelThree(char ch, char prob, char *lvl) {
	char choice = 3;
	char str[40];


	/* 读取用户选择 */
	system("cls");

	choose:
	printf("第%d章 第%d题\n\n", ch, prob);
	sprintf(str, "type .\\static\\description\\%d_%d.txt", ch, prob);	system(str); //题目描述
	printf("\n\n1.运行程序\n2.查看源码\n-1.返回上级\n-2.返回主菜单\n0.退出程序\n");
	scanf_s("%hhd", &choice);


	/* 传回用户选择 */
	switch (choice) {
		case -2:
			*lvl = 1;
			return;

		case -1:
			*lvl = 2;
			return;


		case 0:
			*lvl = 0;
			return;


		case 1:
			system("cls");
			sprintf(str, ".\\static\\exe\\%d_%d.exe", ch, prob);	system(str); // 运行程序
			system("pause");
			system("cls");
			goto choose;


		case 2: // 需要整理一下
			system("cls");
			sprintf(str, "type .\\static\\codes\\%d_%d.c", ch, prob);	system(str); //输出源码
			printf("\n");
			system("pause");
			system("cls");
			goto choose;


		default:
			system("cls");
			printf("错误！ 非法输入！ 请重新输入\n");
			goto choose;
	}
}
#endif // !levelThree_h