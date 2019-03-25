#ifndef levelOne_h
#define levelOne_h


char levelOne(char *);


char levelOne(char *lvl) {
	char choice = -1, choice_status = 0; // 0:不合法/初始态 1:合法
	char i;

	/* 读取用户选择 */
	system("cls");
	choose:
	printf("***** 请选择章节 *****\n\n");
	for (i = 1; i <= 13; i++)
		printf("    %d.\t第%d章\n", i, i);
	printf("\n输入数字以选择对应章节\n");
	printf("输入0退出程序\n");
	scanf_s("%hhd", &choice);


	/* 传回用户选择 */
	(choice >= 0 && choice <= 13) ? (choice_status = 1) : (choice_status = 0); // 判断输入是否合法
	if (choice_status) {
		if (choice == 0) {
			*lvl = 0;
			return 0;
		} else {
			*lvl = 2;
			return choice;
		}
	} else {
		system("cls");
		printf("错误！ 非法输入！ 请重新输入\n");
		goto choose;
	}
}


#endif // !levelOne_h