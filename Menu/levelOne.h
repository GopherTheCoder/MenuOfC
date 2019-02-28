#ifndef levelOne_h
#define levelOne_h


char levelOne(void);


char levelOne() { // return用户选项，改变lvl全局变量
	extern char lvl;
	char choice = -1, choice_status = 0; // 0:不合法/初始态 1:合法


	/* 读取用户选择 */
	system("cls");
	choose:
	printf("~~~~~~~~~~请选择章节~~~~~~~~~~\n");
	printf("共13章\n");
	printf("输入0退出程序\n");
	scanf_s("%hhd", &choice);


	/* 传回用户选择 */
	(choice >= 0 && choice <= 13) ? (choice_status = 1) : (choice_status = 0); // 判断输入是否合法
	if (choice_status) {
		if (choice == 0) {
			lvl = 0;
			return 0;
		} else {
			lvl = 2;
			return choice;
		}
	} else {
		system("cls");
		printf("Fail! Input illegal.\n");
		goto choose;
	}
}


#endif // !levelOne_h