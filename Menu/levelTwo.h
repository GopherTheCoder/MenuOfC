#ifndef levelTwo_h
#define levelTwo_h


char levelTwo(char);
char chapters[13] = { 2, 0, 1, 4, 4, 8, 6, 7, 4, 5, 4, 4, 1 };


char levelTwo(char ch) { //return�û�ѡ��ı�lvlȫ�ֱ���
	extern char lvl;
	char choice = -2, choice_status = 0; // 0:���Ϸ�/��ʼ̬ 1:�Ϸ�
	char problemNumber = chapters[ch - 1];


	/* ��ȡ�û�ѡ�� */
	system("cls");
	choose:
	printf("**********��ѡ����Ŀ**********\n");
	printf_s("��%hhd��\n", ch);
	printf("���¹���%d����Ŀ\n", problemNumber);
	printf("��������Խ�����Ŀ\n-1.�����ϼ�\n0.�˳�����\n");
	scanf_s("%hhd", &choice);


	/* �����û�ѡ�� */
	(choice >= -1 && choice <= problemNumber) ? (choice_status = 1) : (choice_status = 0); // �ж������Ƿ�Ϸ�
	if (choice_status) {
		if (choice == 0) {
			lvl = 0;
			return 0;
		} else if (choice == -1) {
			lvl = 1;
			return 0;
		} else {
			lvl = 3;
			return choice;
		}
	} else {
		system("cls");
		printf("���� �Ƿ����룡 ����������\n");
		goto choose;
	}
}


#endif // !levelTwo_h