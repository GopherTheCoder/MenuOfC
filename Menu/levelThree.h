#ifndef levelThree_h
#define levelThree_h


void levelThree(char, char);


void levelThree(char ch, char prob) {
	extern char lvl;
	char choice = 3;
	char str[30];
	char c;


	/* ��ȡ�û�ѡ�� */
	system("cls");
	choose:
	printf("��%d�� ��%d��\n", ch, prob);
	printf("��Ŀ����\n");
	printf("1.���г���\n2.�鿴Դ��\n-1.�����ϼ�\n0.�˳�����\n");
	scanf_s("%hhd", &choice);


	/* �����û�ѡ�� */
	switch (choice) {
		case -1:
			lvl = 2;
			return 0;


		case 0:
			lvl = 0;
			return 0;


		case 1:
			sprintf(str, ".\\static\\exe\\%d_%d.exe", ch, prob);
			system("cls");
			system(str);
			system("cls");
			goto choose;


		case 2: // ��Ҫ����һ��
			system("cls");
			sprintf(str, "type .\\static\\codes\\%d_%d.c", ch, prob);
			system(str);
			printf("\n");
			system("pause");
			system("cls");
			goto choose;


		default:
			system("cls");
			printf("���� �Ƿ����룡 ����������\n");
			goto choose;
	}
}
#endif // !levelThree_h