#ifndef levelOne_h
#define levelOne_h
#define levelOneMainMenu "1.��һ��\n2.�ڶ���\n3.������\n0.�˳�����\n"


char levelOne(void);


char levelOne() { //return�û�ѡ��ı�lvlȫ�ֱ���
	extern char lvl;
	char choice = 0;


	system("cls");
	choose:
	printf("~~~~~~~~~~��ѡ���½�~~~~~~~~~~\n");
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