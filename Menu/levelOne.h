#ifndef levelOne_h
#define levelOne_h
#define levelOneMainMenu "1.��һ��\n2.�ڶ���\n3.������\n0.�˳�����\n"


char levelOne(void);


char levelOne() { // return�û�ѡ��ı�lvlȫ�ֱ���
	extern char lvl;
	char choice = -1, choice_status = 0; // 0:���Ϸ�/��ʼ̬ 1:�Ϸ�


	/* ��ȡ�û�ѡ�� */
	system("cls");
	choose:
	printf("~~~~~~~~~~��ѡ���½�~~~~~~~~~~\n");
	printf(levelOneMainMenu);
	scanf_s("%hhd", &choice);


	/* �����û�ѡ�� */
	(choice >= 0 && choice <= 13) ? (choice_status = 1) : (choice_status = 0); // �ж������Ƿ�Ϸ�
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