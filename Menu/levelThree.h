#ifndef levelThree_h
#define levelThree_h


void levelThree(char, char, char *);


void levelThree(char ch, char prob, char *lvl) {
	char choice = 3;
	char str[40];


	/* ��ȡ�û�ѡ�� */
	system("cls");

	choose:
	printf("��%d�� ��%d��\n\n", ch, prob);
	sprintf(str, "type .\\static\\description\\%d_%d.txt", ch, prob);	system(str); //��Ŀ����
	printf("\n\n1.���г���\n2.�鿴Դ��\n-1.�����ϼ�\n-2.�������˵�\n0.�˳�����\n");
	scanf_s("%hhd", &choice);


	/* �����û�ѡ�� */
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
			sprintf(str, ".\\static\\exe\\%d_%d.exe", ch, prob);	system(str); // ���г���
			system("pause");
			system("cls");
			goto choose;


		case 2: // ��Ҫ����һ��
			system("cls");
			sprintf(str, "type .\\static\\codes\\%d_%d.c", ch, prob);	system(str); //���Դ��
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