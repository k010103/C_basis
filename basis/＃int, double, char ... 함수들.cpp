#include <stdio.h>

int main()
{
	int a; // ��2147483647 
	float b; // 0.000000 �Ҽ��� �� ���� ���� 
	double c; // 0.000~ float ���� ū�Ҽ��� ���� ���� ���� 
	char d; // a, b ���� 1�����ִ� ���� , (������ ��°���, codeup 1077 ����) 
	char da[30]; // apple, ���� ���� ���ڿ�, �ܾ ������ ������ ���������  
	unsigned int e; // 0 ~ 4,294,967,295 
	long long int f; // ��9,223,372,036,854,775,807 
	
	printf("%d", a); // %04d ������ ����  
	printf("%f", b);
	printf("%lf", c); // lf : long float float���ε� ���� �� ��� 
	                  // %.11lf ������ ����  
	printf("%c", d);
	printf("%s", da);
	printf("%u", e);
	printf("%lld", f);
	
	
	printf("%o", a); // 8���� ��� 
	printf("%x", a); // 16���� ��� , %X x�� �빮�ڷ��ϸ� 16������ �빮�ڷ� ���  
	
	// �����߰�
	// c���� char�� �ѱ��� ����ϰ� �ʹٸ� 
	char name[20] = "ȫ�浿";
	printf("%c%c", name[0],name[1]); 
//	�������� %c%c �� ������� �ٿ��� ����ؾ� �ѱ���� ����
//	�ѱ��� 2byte�� ����ϱ� ���� 

	return 0;
}
