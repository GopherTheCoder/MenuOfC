#ifndef levelOne_h
#define levelOne_h
#define levelOneMainMenu "1.第一章\n2.第二章\n3.第三章\n0.退出程序\n"


char levelOne(void);


char levelOne() { //return用户选项，改变lvl全局变量
	extern char lvl;
	char choice = 0;


	system("cls");
	choose:
	printf("~~~~~~~~~~请选择章节~~~~~~~~~~\n");
	printf(levelOneMainMenu);
	scanf_s("%hhd", &choice);


	switch (choice)	{
		case 1:
			lvl = 2;
			return 1;


		case 2:
			lvl = 2;
			return 2;


		case 3:
			lvl = 2;
			return 3;


		case 0:
			lvl = 0;
			return 0;


		default:
			system("cls");
			printf("Fail! Input illegal.\n");
			goto choose;
	}
}


#endif // !levelOne_h