#ifndef levelTwo_h
#define levelTwo_h


char levelTwo(char, char *);
char chapters[13] = { 1, 0, 1, 4, 4, 8, 6, 7, 2, 1, 1, 0, 0 };


char levelTwo(char ch, char *lvl) {
	char choice = -2, choice_status = 0; // 0:不合法/初始态 1:合法
	char problemNumber = chapters[ch - 1];
	char i;

	if (problemNumber == 0) {
		system("cls");
		printf_s("\t第%hhd章\n", ch);
		printf("   本章没有题目！\n");
		system("pause");

		*lvl = 1;
		return 0;
	}

	/* 读取用户选择 */
	system("cls");
	choose:
	printf("***** 请选择题目 *****\n");
	printf_s("\t第%hhd章\n\n", ch);
	printf("本章共有%d道题目\n\n", problemNumber);
	for (i = 1; i <= problemNumber; i++) printf("   %d. 第%d题\n", i, i);
	printf("\n输入题号以进入题目\n\n\n-1.返回上级\n0.退出程序\n");
	scanf_s("%hhd", &choice);


	/* 传回用户选择 */
	(choice >= -1 && choice <= problemNumber) ? (choice_status = 1) : (choice_status = 0); // 判断输入是否合法
	if (choice_status) {
		if (choice == 0) {
			*lvl = 0;
			return 0;
		} else if (choice == -1) {
			*lvl = 1;
			return 0;
		} else {
			*lvl = 3;
			return choice;
		}
	} else {
		system("cls");
		printf("错误！ 非法输入！ 请重新输入\n");
		goto choose;
	}
}


#endif // !levelTwo_h