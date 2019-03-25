#ifndef levelTwo_h
#define levelTwo_h


char levelTwo(char, char *);
char chapters[13] = { 1, 0, 1, 4, 4, 8, 6, 7, 2, 1, 1, 0, 0 };


char levelTwo(char ch, char *lvl) {
	char choice = -2, choice_status = 0; // 0:���Ϸ�/��ʼ̬ 1:�Ϸ�
	char problemNumber = chapters[ch - 1];
	char i;

	if (problemNumber == 0) {
		system("cls");
		printf_s("\t��%hhd��\n", ch);
		printf("   ����û����Ŀ��\n");
		system("pause");

		*lvl = 1;
		return 0;
	}

	/* ��ȡ�û�ѡ�� */
	system("cls");
	choose:
	printf("***** ��ѡ����Ŀ *****\n");
	printf_s("\t��%hhd��\n\n", ch);
	printf("���¹���%d����Ŀ\n\n", problemNumber);
	for (i = 1; i <= problemNumber; i++) printf("   %d. ��%d��\n", i, i);
	printf("\n��������Խ�����Ŀ\n\n\n-1.�����ϼ�\n0.�˳�����\n");
	scanf_s("%hhd", &choice);


	/* �����û�ѡ�� */
	(choice >= -1 && choice <= problemNumber) ? (choice_status = 1) : (choice_status = 0); // �ж������Ƿ�Ϸ�
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
		printf("���� �Ƿ����룡 ����������\n");
		goto choose;
	}
}


#endif // !levelTwo_h