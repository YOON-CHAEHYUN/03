#include <stdio.h>

int main(void)
{
	float a, b;
	
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%f", &a);
	printf("�и� �Է��ϼ���: ");
	scanf("%f", &b);

	
	printf("�������� ����� %f �Դϴ�.", (float)a/b);
	
	return 0;
}
