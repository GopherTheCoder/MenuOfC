#ifndef levelOne_h
#define levelOne_h


char levelOne(char *);


char levelOne(char *lvl) {
	char choice = -1, choice_status = 0; // 0:���Ϸ�/��ʼ̬ 1:�Ϸ�
	char i;

	/* ��ȡ�û�ѡ�� */
	system("cls");
	choose:
	printf("***** ��ѡ���½� *****\n\n");
	for (i = 1; i <= 13; i++)
		printf("    %d.\t��%d��\n", i, i);
	printf("\n����������ѡ���Ӧ�½�\n");
	printf("����0�˳�����\n");
	scanf_s("%hhd", &choice);


	/* �����û�ѡ�� */
	(choice >= 0 && choice <= 13) ? (choice_status = 1) : (choice_status = 0); // �ж������Ƿ�Ϸ�
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
		printf("���� �Ƿ����룡 ����������\n");
		goto choose;
	}
}


#endif // !levelOne_h