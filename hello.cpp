/*
Q.���� ������ ���ڿ��� ����ڷκ��� �Է� �޴´�. �Է� �� �� ������ ���� ���̿� ','�� �־��ֵ���
�Ѵ�. �Է��� ������ �Է� ���� �� ������ ���ڸ� ���Ͽ� �� ������� ����ϴ� ���α׷��� �ۼ��϶�.
(strtok)
*/

#include<stdio.h>
#include<string.h>

int main(void)
{
	FILE* file; 
	char buf[256];
	memset(buf, 0, 256);
	printf("���ڿ��� �Է��Ͻÿ�: ");

	fgets(buf, sizeof(buf), stdin);

	fopen_s(&file, "c:\\Temp.txt", "wt");

	if(file == NULL)
	{
		printf("������ �������� �ʽ��ϴ�.\n");
	}
	else
	{
		fwrite(buf, 1, 256, file);
		printf("������ ������ ���Ͽ� ���������ϴ�.\n");
		fclose(file);
	}
	return 0;
}
	


/*
#include(stdio.h>

int main()
{
	printf("Hello World\n");
	return 0;                   // 0�� y����
}

#include<stdio.h>
int main(void)
{
	int input1, input2, input3;
	int multi;
	printf("ù ��° ������ �Է��Ͻÿ�.");
	scanf_s("%d", &input1);
	printf("�� ��° ������ �Է��Ͻÿ�.");
	scanf_s("%d", &input2);
	printf("�� ��° ������ �Է��Ͻÿ�.");
	scanf_s("%d", &input3);
	multi = input1 * input2 * input3;
	printf("�� ���� ���� %d�̴� \n", multi);
	return 0;
}

#include<stdio.h>
int main(void)
{
	char input;
	printf("���ĺ��� �Է��Ͻÿ�.");
	scanf_s("%c", &input);
	printf("�ƽ�Ű�ڵ尪�� %d�Դϴ�\n", input);
	return 0;
}

#include<stdio.h>
int main(void)
{
	int a;
	int b;

	a = 5;
	printf("++a�� ó�� ���: %d\n", ++a);

	a = 5;
	printf("a++�� ó�� ���: %d\n", a++);
	printf("a�� �ٽ� ���: %d\n", a);

	b = 10;
	printf("--b�� ó�� ���: %d\n", --b);

	b = 10;
	printf("b--�� ó�� ���: %d\n", b--);
	printf("b�� �ٽ� ���: %d\n", b);
	return 0;
}

#include<stdio.h>
int main(void)
{
	int a = 10;
	int b = 11;
	int c = 12;
	int d = 10;

	printf("!(a==10)�� ����� : %d\n", !(a == 10));
	printf("(a<b)&&(a<c)�� ����� : %d\n", (a < b) && (a < c));
	printf("(a>=c)||(a==d)�� ����� : %d\n", (a >= c)||(a == d));
	return 0;
}

#include<stdio.h>
int main(void)
{
	int A, B;
	int sum, min, multi, div;
	printf("ù ��° ������ �Է��Ͻÿ� : \n");
	scanf_s("%d", &A);
	printf("�� ��° ������ �Է��Ͻÿ� : \n");
	scanf_s("%d", &B);
	sum = A + B;
	printf("�� ���� �� : %d\n", sum);
	min = A - B;
	printf("�� ���� �� : %d\n", min);
	multi = A * B;
	printf("�� ���� �� : %d\n", multi);
	div = A / B;
	printf("�� ���� ������ : %d\n", div);
}

#include<stdio.h>
int main(void)
{
	int a,b,c;
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &a);
	if(a > 5)
	{
		printf("�Է°��� 5���� Ů�ϴ�\n");
	}
	else
	{
		printf("�Է°��� 5���� ũ�� �ʽ��ϴ�\n");
	}
	return 0;
}

#include<stdio.h>
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	scanf_s("%d%d%d", &a, &b, &c);

	if (a > b)
	{
		if (b > c)
		{
			printf("�ּҰ� : %d", c);
		}
		else
		{
			printf("�ּҰ� : %d", b);
		}
	}
	else   // b���� a�� �۴�
	{
		if (a > c)
		{
			printf("�ּҰ� : %d", c);
		}
		else
		{
			printf("�ּҰ� : %d", a);
		}
	}
	return 0;
}

#include<stdio.h>
int main(void)
{
	int a = 0;
	int b = 0;
	printf("�� ���� ������ �Է��Ͻÿ� : \n");
	scanf_s("%d%d", &a, &b);
	printf("�Է��� ������ %d�� %d�Դϴ�\n", a, b);
	return 0;
}

#include<stdio.h>
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("�� ���� ������ �Է��Ͻÿ�. : \n");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("�� ������ �� : %d\n�� ������ ��� : %d ", a+b+c, (a+b+c)/3);

	return 0;
}

#include<stdio.h>
int main(void)
{
	int a = 0;
	printf("������ �Է��Ͻÿ�. : \n");
	scanf_s("%d", &a);
	if ((a >= 60) && (a<=100))
	{
		printf("�հ��Դϴ�.\n");
		if ((a >= 90))
		{
			printf("���д���Դϴ�.\n");
		}
	}
	else
	{
		printf("���հ��Դϴ�.\n");
	}
	return 0;
}

#include<stdio.h>
int main(void)
{
	int age = 0;
	printf("���̸� �Է����ּ��� : \n");
	scanf_s("%d", &age);

	if ((age < 13) && (age >= 1))
	{
		printf("����Դϴ�.\n");
	}
	else if ((age >= 13) && (age < 19))
	{
		printf("û�ҳ��Դϴ�.\n");
	}
	else if (age >= 19)
	{
		printf("�����Դϴ�.\n");
	}
	else
	{
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}
	return 0;
}

#include<stdio.h>
int main(void)
{
	int month;
	printf("���� �Է��Ͻÿ�. : \n");
	scanf_s("%d", &month);
	switch(month)
	{
	case 12:
	case 1:
	case 2:
		printf("�ܿ��̱���.\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("���̱���.\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("�����̱���.\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("�����̱���.\n");
		break;
	default:
		printf("���� �߸��Է��ϼ̽��ϴ�.\n");
		break;
	}
	return 0;
}

#include<stdio.h>
int main(void)
{
	int num;
	printf("�ϳ��� ������ �Է��Ͻÿ�. : \n");
	scanf_s("%d", &num);

	int val = num % 2;   // switch(num%2)�� ����
	switch (val)
	{
	case 0:
		printf("�Է��� ���� ¦���Դϴ�.\n");
		break;
	case 1:
		printf("�Է��� ���� Ȧ���Դϴ�.\n");
		break;
	default:
		printf("���� �߸��Է��ϼ̽��ϴ�.\n");
		break;
	}
	return 0;
}

#include<stdio.h>
int main(void)
{
	int score;
	printf("������ �Է��ϼ���. : \n");
	scanf_s("%d", &score);

	if (score >= 0)
	{
		int num = (score - 1) / 10;

		switch (num)
		{
		case 9:
			printf("������ A�Դϴ�.\n");
			break;
		case 8:
			printf("������ B�Դϴ�.\n");
			break;
		case 7:
			printf("������ C�Դϴ�.\n");
			break;
		case 6:
			printf("������ D�Դϴ�.\n");
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
			printf("������ F�Դϴ�.\n");
			break;
		default:
			printf("������ �߸� �Է��ϼ̽��ϴ�.\n");
			break;
		}
	}
	else
	{
	printf("������ �߸� �Է��ϼ̽��ϴ�.\n");
	}
	return 0;
}


Q. �ݺ����� �̿��ؼ� 1���� 10������ ¦���� ����Ͽ���.
#include<stdio.h>
void main()
{
	int num = 1;
	while (num < 11)
	{
		if (num % 2 == 0)
		{
			printf("%d\n", num);
			num ++;
		}
		else
		{
			num ++;
		}
	}
	return;
}

Q.������ 2�ܸ� ����ϱ�.(while�� ���)
#include<stdio.h>
void main()
{
	int num = 1;
	while(num <10)
	{
		printf("2*%d = %d\n", num, 2*num);
		num ++;
	}
	return;
}

#include<stdio.h>
int main(void)
{
	int i = 1;
	int sum = 0;
	while (i < 6)
	{
		sum = sum + i;
		i++;
	}
	printf("%d\n", sum);
	return;
}

#include<stdio.h>
int Add(int i, int j)
{
	return i + j;
}

int main(void)
{
	int a;
	int b;
	int hap;
	printf("�� ���� ������ �Է��Ͻÿ�. : ");
	scanf_s
	("%d%d", &a, &b);
	hap = Add(a, b);
	printf("�� ������ ���� : %d�Դϴ�.\n", hap);
	return 0;
}

#include<stdio.h>
int Add(int i, int j);
void print_Start()
{
	printf("======Programming Start =====\n");
	printf("�� ���� ������ �Է��Ͻÿ� : ");
}
void print_Hap(int result)
{
	printf("�� ���� ���� %d�Դϴ�.\n", result);
	printf("=====Programming End=====\n");
}
int main(void)
{
	int a;
	int b;
	int hap;

	print_Start();
	scanf_s("%d%d", &a, &b);
	hap = Add(a, b);
	print_Hap(hap);
	return 0;
}
int Add(int i, int j)
{
	return i + j;
}

#include<stdio.h>
int Add(int i, int j);
int Minus(int i, int j);
int Multiple(int i, int j);
int Divide(int i, int j);

void print_Start()
{
	printf("�� ���� ������ �Է��Ͻÿ� : ");
}
void print_Hap(int result)
{
	printf("�� ���� ����� %d�Դϴ�.\n", result);
}

int main(void)
{
	int a;
	int b;
	int hap;
	int MINUS;
	int MULTIPLE;
	int DIVIDE;

	print_Start();
	scanf_s("%d%d", &a, &b);
	hap = Add(a, b);
	print_Hap(hap);

	hap = Minus(a, b);
	print_Hap(hap);

	hap = Multiple(a, b);
	print_Hap(hap);

	hap = Divide(a, b);
	print_Hap(hap);

	return 0;
}
int Add(int i, int j)
{
	return i + j;
}
int Minus(int i, int j)
{
	return i - j;
}
int Multiple(int i, int j)
{
	return i * j;
}
int Divide(int i, int j)
{
	return i / j;
}

#include<stdio.h>
int Max(int a, int b);
int Min(int a, int b);

int Max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int Min(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int main(void)
{
	int a = 0;
	int b = 0;
	int imax = 0;
	int imin = 0;

	printf("�� ������ �Է��Ͻÿ�. : \n");
	scanf_s("%d%d", &a, &b);

	imax = Max(a,b);
	imin = Min(a,b);

	printf("�ִ밪 : %d �ּҰ� : %d", Max(a,b), Min(a,b));
	return 0;
}

#include<stdio.h>
void func1();
void func2();
void main(void)
{
	int val = 0;
	printf("ù ��° �޸� �Ҵ� : val = 0\n");
	func1();
	printf("�� ��° �޸� �Ҹ� : local = 10\n");
}
void func1()
{
	int local = 10;
	printf("�� ��° �޸� �Ҵ� : local = 10\n");
	func2();
	printf("ù ��° �޸� �Ҹ� : local = 20\n");
}
void func2()
{
	int local = 20;
	printf("�� ��° �޸� �Ҵ� : local = 20\n");
}

#include<stdio.h>
int global;
void Add(int i, int j);
int main(void)
{
	int a;
	int b;
	printf("�� ���� ������ �Է��Ͻÿ� :");
	scanf_s("%d%d", &a, &b);
	Add(a, b);
	printf("�� ������ ���� : %d�Դϴ�\n", global);
	return 0;
}
void Add(int i, int j)
{
	global = i + j;
} // �� �Լ��� ������ i�� j�� �����  global������ ���α׷��� ����� �� ����

#include<stdio.h>
void func(void);
int main(void)
{
	int i = 0;
	while (i < 5)
	{
		func();
		i++;
	}
	return 0;
}
void func(void)
{
	static int value = 0;
	value ++;
	printf("%d\n", value);
}

Q. ���� å�� ���� ������ ���� ����ϴ� �Լ��� ������.
#include<stdio.h>
void func(int input);
int main(void)
{
	int i = 0;
	int j = 0;

	while (1)
	{
	printf("���� å�� ������ ���� �Է��Ͻÿ� : \n");
	scanf_s("%d", &i);

		if(i == -1)
		{
			break;
		}

		func(i);
	}

	printf("�� �й��ϼ���");
}
void func(int input)
{
	static int value = 0;
	value = value + input;
	printf("���� ���� ������ : %d\n\n", value);
}

#include<stdio.h>
void func(int page);
int main(void)
{
	while (1)
	{
		int page = 0;
		printf("���� å�� ������ ���� �Է��Ͻÿ� : \n");
		scanf_s("%d", &page);

		if (page == -1)
			break;
		func(page);
	}

	printf("�� �й��ϼ���");
}
void func(int page)
{
	static int sum_page = 0;
	sum_page = sum_page + page;
	printf("���� ���� ������ : %d\n\n", sum_page);
}

Q.������ ���� 1���� �������ڷ� �޴� �Լ��� �����.�� �Լ��� �����
���޹��� ������ ������ 2�� ���Ͽ� �����ϴ� ���̴�.�� �Լ��� main����
ȣ���Ͽ� ����غ���.

#include<stdio.h>
int gop(int a)
{
	return a * 2;
}

void main()
{
	int i = 0;                    // i�� �ǸŰԺ���
	scanf_s("%d", &i);
	printf("%d", gop(i));
}

Q.�簢���� ���̸� ���ϴ� �Լ��� �ۼ��غ���. ����ڷκ��� �� ����(������
����, ������ ����)�� ���� �Է� �޾� �Լ��� �������ڷ� �����ϰ�, �簢����
���̸� ����ϴ� �Լ��� �ۼ�����. �׸��� �� �Լ��� main���� ȣ���Ͽ�
����غ���.

#include<stdio.h>
void extent(int width, int height)
{
	printf("�簢���� ���� : %d", width * height);    //���� return�� �ʿ����
}

void main()
{
	int width = 0;
	int height = 0;
	scanf_s("%d%d", &width, &height);
	extent(width, height);
}


Q.���� ���̸� ���ϴ� �Լ��� �ۼ��Ͻÿ�. ����ڷκ��� �Ǽ�(�������� ����)
�� �Է� �޾� �Լ��� �������ڷ� �����ϰ�, ���� ���̸� ����ϴ� �Լ���
�ۼ��Ͻÿ�. �׸��� �� �Լ��� main���� ȣ���Ͽ� ����Ͻÿ�.


#include<stdio.h>
void Circle(int r)
{
	printf("���� ���� : %f", r * r * 3.14);
}

void main()
{
	int r = 0;
	scanf_s("%d", &r);
	Circle(r);
}

==

#include<stdio.h>
void Circle(double r)
{
	printf("���� ���� : %f", r * r * 3.14);
}

void main()
{
	double r = 0;
	scanf_s("%f", &r);
	Circle(r);
}



Q.����ڷκ��� �� ������ �Է� �޾� �ִ밪�� �ּҰ��� ���ϴ� �Լ��� ����
�ۼ��ϰ�, main�Լ����� ȣ���Ͽ� ����Ͻÿ�.


#include<stdio.h>
int Max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int Min(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

void main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d%d", &a, &b);
	printf("�ִ밪 : %d �ּҰ� : %d", Max(a, b), Min(a, b));
	return 0;
}


Q Ŀ�� ���ǱⰡ �ִ�. 100�� ������ '��Ŀ��', 200���� ������ '��ũĿ��'
�� ���´�. ���Ǳ⸦ �Լ��� �����غ���.
����ڷκ��� ������ ����(100,200)�� �Է� �޾� 100�� �Է� ������ '��Ŀ��'
�� ����ϰ�, 200�� �Է� ������ '��ũĿ��'�� ����ϸ� �ȴ�.


#include<stdio.h>
void CoffeeMachine(int price)
{
	if (price == 100)
		printf("��Ŀ��");
	else if (price == 200)
		printf("��ũĿ��");
	else
		printf("�߸� �Է��ϼ̽��ϴ�.");
}

void main()
{
	int input = 0;
	scanf_s("%d", &input);
	CoffeeMachine(input);
}


Q.���̰� 3�� ������ �迭�� �ִ�.
������ �迭�� ��ҿ� 10,20,30�� ������� �����ϰ�, �迭�� ��Ұ��� �״�� ����϶�.


#include<stdio.h>
void main()
{
	int arr[3];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr[i]);
	}
}


#include<stdio.h>
int main(void)
{
	int total = 0;
	int array[5] = { 1,2,3,4,5 };
	total = array[0] + array[1] + array[2] + array[3] + array[4];
	for (int i = 0; i < 5; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("�迭 ����� �� ���� %d�Դϴ�.\n", total);
	return 0;
}

/*
Q.�迭�� ���̺��� �ʱⰪ�� ������ ���� ���


#include<stdio.h>
int main(void)
{
	int total = 0;
	int array[] = { 1,3,5,7,9 };
	total = array[0] + array[1] + array[2] + array[3] + array[4];
	printf("�迭 ����� �� ���� %d�Դϴ�.\n", total);
	return 0;
}

/*
Q.���̰� 3�� �迭 arr1�� arr2�� �����Ѵ�. arr1�迭�� ����� ���ÿ� {1,2,3}���� �ʱ�ȭ
�Ͽ���. arr1�� arr2�� �����ϰ�, arr2 �迭�� ��Ҹ� ��� ����϶�.


#include<stdio.h>
int main(void)
{
	int arr1[3] = { 1,2,3 };
	int arr2[3];
	int i = 0;

	arr2[0] = arr1[0];
	arr2[1] = arr1[1];
	arr2[2] = arr1[2];

	printf("arr2�� �迭 ��Ҵ� %s �̴�", arr2[]);
}

/*
Q.������ ������ �� �� ���� ��, 'A'���� �Է��ϰ�, �̸� �̿��Ͽ� A���� Z����
�������. �������� char�� �����ϰ�, ���� ��½� ���Ĺ��ڴ� %c�� �Ѵ�.


#include<stdio.h>
int main(void)
{
	char ch = 'A';  // ch 'A' = 65    ch 'A' + 1 = B = 66
					// %c => 'A'  %d => 65

	for (int i = 0; i < 26; i++)
	{
		printf("%c ", ch + i);
	}
}

/*
Q.���̰� 100�� ������ �迭�� ������ ��, ����ڷκ��� �ݺ��Ͽ� ���� �Է� �޾�,
�迭�� ��ҿ� ���������� �����Ѵ�. �Է°��� -1�̸� �ݺ����� ������������ �ϰ�,
���ݱ��� �Է��� �迭�� ���� ��� ����غ����� ����.


#include<stdio.h>
void main()
{
	int arr[100];
	int i = 0;

	for (i = 0; i < 100; i++)
	{
		printf("������ �Է��ϼ���.");
		scanf_s("%d", &arr[i]);
		if (arr[i] == -1)
			break;
	}

	printf("����� ����մϴ�.\n");
	for (int k = 0; k < i; k++)
	{
		printf("%d\n", arr[k]);
	}
}

/*
Q.�� ���� ������ ���� a,b�� �����Ѵ�. ���� a�� b�� ���� ���� 2�� 3�̴�.
�� �� ���� ������ ���� ��ȯ�Ͽ�, a�� 3, b�� 2�� ���� ������ �ٲپ��.


#include<stdio.h>
void main()
{
	int a = 2;
	int b = 3;
	int temp = 0;

	printf("a = %d, b = %d\n", a, b);

	int 

	printf("a = %d, b = %d", a, b);

}

/*
Q.�� ���� ������ ���� a,b�� �����Ѵ�. ���� a�� b�� ���� ���� 2�� 3�̴�.
�� �� ���� ������ ���� ��ȯ�Ͽ�, a�� 3, b�� 2�� ���� ������ �ٲپ��.
(Swap�Լ� �����ؼ�)


#include<stdio.h>
void Swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	printf("a = %d, b = %d\n", a, b);
}

void main()
{
	int a = 2;
	int b = 3;
	int temp = 0;

	printf("a = %d, b = %d\n", a, b);
	Swap(a, b);
}

/*
Q.

#include<stdio.h>
int main(void)
{
	int b = 100;
	int* pB = &b;

	printf("b = %d\n", b);
	printf("&b = %x\n", &b);
	printf("*pB = %d\n", *pB);
	printf("pB = %x\n", pB);
	return 0;
}

/*
Q.�� ���� ������ ���� a,b�� �����Ѵ�. ���� a�� b�� ���� ���� 2�� 3�̴�.
�� �� ���� ������ ���� ��ȯ�Ͽ�, a�� 3, b�� 2�� ���� ������ �ٲپ��.
(Swap�Լ� �����ؼ�)

#include<stdio.h>
int main(void)
{
	int b = 100;
	int* pB = &b;

	printf("b = %d\n", b);
	printf("&b = %x\n", &b);
	printf("*pB = %d\n", *pB);  // *pB => pB�� ����Ű�� �ִ� �޸��� ���� �� = 100
	printf("pB = %x\n", pB);
	return 0;
}

/*
Q.�����ͳ��� �� �� �ִ�.


#include<stdio.h>
int main(void)
{
	char str[] = "Programming";
	char* ptr1, * ptr2;

	ptr1 = &str[0];
	ptr2 = &str[7];

	printf("�� ������ ���� ���� %d�Դϴ�.\n", ptr2 - ptr1); // �޸� ���̴� 7�̴�
	return 0;
}

/*
Q.�����ͳ��� �� �� �ִ�.


#include<stdio.h>
int main(void)
{
	char str[] = "Programming";
	char* ptr1;

	ptr1 = &str[0];

	printf("%x\n", ptr1);
	printf("%x\n", ptr1 + 1);
	printf("%c\n", *(ptr1 + 1));
	printf("%x\n", ptr1 + 3);
	printf("%c\n", *(ptr1 + 3));
	return 0;
}

/*
Q.�ڷ����� ������ int�̰�, ũ�Ⱑ 5�� �迭 arr�� �ִ�. �׸��� ������ ptr�� �ִµ�,
�� �迭�� ù ��° ����� �ּҰ��� ������ �ִ�. �����͸� �̿��Ͽ� �� �迭�� �����
�̵��� �� �� ����� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.


#include<stdio.h>
int main(void)
{
	int str[] = { 1,2,3,4,5 };
	int* prt1; = &arr[0];

	ptr1 = &str[0];

	printf("%d\m", ptr1);
	printf("%d\m", ptr1 + 1);
	printf("%d\m", *(ptr1 + 3));
	printf("%d\m", ptr1);
	printf("%d\m", ptr1);


	return 0;
}

/*
Q.char�� ���� a, int�� ���� b, double�� ���� c�� ����� ���ÿ� ���� 'C', 10,3.14��
�ʱ�ȭ�Ѵ�. �׸��� ������ ������ ������ �����ϵ� char�� ����pA�� ���� a��, int��
���� pB�� ���� b��, double�� ���� pC�� ���� c�� ����Ű�� �Ѵ�. �� ��, ������ ������
�̿��ؼ� ������ ���� a,b,c�� ���� 1�� �������� ����Ͻÿ�.


#include<stdio.h>
int main(void)
{
	char a = 'C';
	int b = 10;
	double c = 3.14;

	char* pA = &a;
	int* pB = &b;
	double* pC = &c;

	for (int i = 0; i < )
		printf("")
}

/*
Q.�� ���� ������ ���� a�� b�� �����Ѵ�. ����ڷκ��� �� ���� �������� �Է¹޾�
�Է¹��� �� ���� ��ȯ�Ͽ� ����ϵ��� �Ѵ�.

#include<stdio.h>
void Swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void main()
{
	int a = 0;
	int b = 0;
	int temp = 0;

	scanf_s("%d%d, ", &a, &b);

	printf("a = %d, b = %d\n", b, a);
	Swap(a, b);
}

/*
Q.���̰� 2�� ������ �迭�� �����Ѵ�. ����ڷκ��� �� ���� ���� �Է� �ް�, �Է�
���� �� ���� ���Ͽ� ū ���� ����ϵ��� ����.


#include<stdio.h>
void main()
{
	int arr[2];

	scanf_s("%d%d", &arr[0], &arr[1]);
	if (arr[0] > arr[1])
	{
		printf("�ִ밪�� %d�Դϴ�.\n", arr[0]);
	}
	else
	{
		printf("�ִ밪�� %d�Դϴ�.\n", arr[1]);
	}
}

/*
Q.���̰� 5�� ������ �迭�� �����ϰ�, �ʱⰪ�� {3,5,2,11,10}�̶�� �����Ѵ�.
5���� �迭�� ��� �� ���� ū ���� ã�Ƽ� ����غ���.


#include<stdio.h>
void main()
{
	int a[] = { 3,5,2,11,10 };
	int i = 0;
	int imax = a[0];	// imax�� ���ذ�. ù ��° ��Ұ� �ִ밪�̶�� �����ϰ�
						// ���ϴٰ� �ִ밪�� �ٲ�� imax�� ���� �ٲ�� ����.

	for (i = 0; i < sizeof(a)/sizeof(a[0]); i++)
	{
		if (imax < a[i])
		{
			imax = a[i];
		}
	}
	printf("�ִ밪 : %d\n", imax);
}

/*
Q.�迭�� ���̰� 5�� �Լ��� �����ϰ� �ʱⰪ�� ���� �ʰ�,
1-����ڷκ��� 5���� ���� �Է¹��� �� �Է¹��� �� �߿���
�ִ밪�� ����Ͽ���.


#include<stdio.h>
void main()
{
	int a[5] = { 0, };
	int i = 0;
	int imax = 0;

	printf("�迭�� ���� �Է��Ͻÿ�. : \n");

	while (i < 5)
	{
		scanf_s("%d", &a[i]);
		i++;
	}

	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		if (imax < a[i])
		{
			imax = a[i];
		}
	}

	printf("�ִ밪 : %d", imax);
}

/*
Q.�迭�� ���̰� 5�� �Լ��� �����ϰ� �ʱⰪ�� ���� �ʰ�, ����ڷκ��� ���� �Է¹��� ��
�Է°��� -1�� ������ �Է��� �ߴ��ϰ� �Է¹��� �� �߿��� �ִ밪�� ����Ͽ���.


#include<stdio.h>
void main()
{
	int a[5] = { 0, };
	int i = 0;
	int imax = 0;

	printf("�迭�� ���� �Է��Ͻÿ�. : \n");

	while (1)
	{
		scanf_s("%d", &a[i]);
		i++;

		if (i == -1)
		{
			break;
		}

	}

	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		if (imax < a[i])
		{
			imax = a[i];
		}
	}
	printf("�ִ밪 : %d", imax);
}

#include<stdio.h>
int main(void)
{
	int arr[] = { 1,2,3,4,5 };
	int i;

	printf("�迭�� ��� ��� : ");
	for (i = 0; i < 5; i++);
	{
		printf("%d", arr[i]);
	}
	printf("\n\n");

	printf("�迭�� �ּ� ��� : ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", &arr[i]);
	}
	printf("\n\n");

	printf("�迭�� �̸� ��� : %d\n", arr);
	return 0;
}

#include<stdio.h>
int main(void)
{
	int arr[] = { 1,2,3,4,5 };
	int i;

	printf("�迭�� ��� ��� : ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("�迭�� �̸��� �̟G�� �迭 ��� ��� : ");
	for (i = 0; i < 5; i++);
	{
		printf("%d ", *(arr + i));
	}
	printf("\n\n");

	return 0;
}

#include<stdio.h>
int main(void)
{
	int arr[] = { 1,2,3,4,5 };
	int* pTemp;
	int i;

	pTemp = arr;

	printf("�迭�� ��� ��� : ");

	for (i = 0; i < 5; i++);
	{
		printf("%d", pTemp[i]);
	}
	printf("\n");

	return 0;
}

#include<stdio.h>
int main(void)
{
	char str[] = "love";
	const char* pStr = "you";	// �����ϸ� �ȵǴ� �Լ��� 'const'�� ����ؾ� ��.

	printf("str�� ��� : %s\n", str);
	printf("pStr�� ��� : %s\n", pStr);

	str[0] = 'r';
//	pStr[0] = 'T';  //	����� �����Ϸ��� �ؼ� ������ ��.

	printf("str�� ��� : %s\n", str);
	printf("pStr�� ��� : %s\n", pStr);

	return 0;
}

/*
Q.2���� �迭�� ����


#include<stdio.h>
int main(void)
{
	int i, j;
	int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;

	printf("2���� �迭 ���� ��� ���\n");
	printf("=============================\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("=============================\n");
	return 0;
}

/*
Q.2���� �迭�� �ʱ�ȭ(1)


#include<stdio.h>
int main(void)
{
	int i, j;
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	printf("======2���� �迭 ��� ���=====\n");

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
		}
	}
	return 0;
}

/*
Q.2���� �迭�� �ʱ�ȭ(2)


#include<stdio.h>
int main(void)
{
	int i, j, total = 0;
	int arr[2][3] =
	{
		{1,},
		{4,5,6}
	};

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			total = total + arr[i][j];
		}
	}
	printf("�迭 ����� �� �� : %d\n", total);
	return 0;
}

/*
Q.�迭�� ��� ��ҵ��� �ʱ�ȭ�ϴ� ��� - �迭�� ���̰� ���� �ִ� ���


#include<stdio.h>
int main(void)
{
	int i, j, aSize, index, total = 0;
	int arr[][3] =
	{
		{1,2,3},
		{4},
		{5,6},
		{7, 8, 9}
	};

	aSize = sizeof(arr) / sizeof(arr[0][0]);
	index = aSize / 3;

	for (i = 0; i < index; i++)
	{
		for (j = 0; j < 3; j++)
		{
			total = total + arr[i][j];
		}
	}
	printf("�迭 ����� �� �� : %d\n", total);
	return 0;
}

/*
Q.�迭�� Ȱ�� - 2�� 3���� 2���� �迭 arr1�� arr2�� ���� ���� �� ����Ͻÿ�.


#include<stdio.h>
int main(void)
{
	int i, j;
	int arr1[2][3] = { {1,2,3}, {4,5,6} };
	int arr2[2][3] = { {6,5,4}, {3,2,1} };
	int arr3[2][3];

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	printf("==============\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" %d", arr3[i][j]);
		}
		printf("\n");
	}
	printf("==============\n");
	return 0;
}

/*
Q.����ڷκ��� 3���� �л� ����, �ͱ�, ������ ����, ����, ���� ������ �Է¹޾�
�迭�� �����ϰ�, �� �л��� ���� ������ ���հ�, ����� ����ϴ� �����̴�.


#include<stdio.h>
int main(void)
{
	int i, j = 0, total = 0, avg = 0;

	int arr1[3][3];
	int arr2[5][3];


	for (i = 0; i < 3; i++)
	{
		if (i == 0)
		{
			printf("������ ����, ����, ���� ������ �Է��Ͻÿ�.");
		}
		else if (i == 1)
		{
			printf("�ͱ��� ����, ����, ���� ������ �Է��Ͻÿ�.");
		}
		else
		{
			printf("������ ����, ����, ���� ������ �Է��Ͻÿ�.");
		}

		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &arr1[i][j]);
			arr2[i][j] = arr1[i][j];
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			total += arr1[i][j];
		}
		arr2[j][i] = total;
		avg = arr2[j][i] / 3;
		arr2[j + 1][i] = avg;
		total = 0;
		avg = 0;
	}
	printf("====================\n");
	printf("����  �� �� ��\n");
	for (i = 0; i < 5; i++)
	{
		if (i == 0)
			printf("���� ");
		else if (i == 1)
			printf("���� ");
		else if (i == 2)
			printf("���� ");
		else if (i == 3)
			printf("���� ");
		else if (i == 4)
			printf("��� ");
		for (j = 0; j < 3; j++)
		{
			if (i < 3)
				printf(" %d ", arr2[j][i]);
			else
				printf(" %d ", arr2[i][j]);
		}
		printf("\n");
	}
	printf("====================\n");
	return 0;
}

/*
Q.


#include<stdio.h>
int main(void)
{
	char str[3][10] = { "C���", "�ڹ�", "������" };
	char(*pStr)[10];
	int i;

	pStr = str;

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", *(pStr + i));
	}
	return 0;
}

/*
Q.�迭���� ���ڴ� ������������ �޴´�.


#include<stdio.h>
void func(int* pArr);
int main(void)
{
	int arr[] = { 1,2,3,4,5 };
	int i;

	func(arr);	// ������ = �迭�� �̸�
	for (i = 0; i < 5; i++)
	{
		printf("�迭�� ��� ��� : %d\n", arr[i]);
	}
	return 0;
}

void func(int* pArr)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("�Լ� �ȿ��� �迭�� ���* ��� : %d\n", *(pArr + i));
	}
	printf("\n");
}

/*
Q.func�� ����� �迭�� ��� ����� ���� ����


#include<stdio.h>
int func(int* pArr, int size);
int main(void)
{
	int arr[] = { 1,2,3,4,5 };
	int sumArr, sizeArr;

	sizeArr = sizeof(arr) / sizeof(int);
	sumArr = func(arr, sizeArr);
	printf("�迭�� �� �� : %d\n", sumArr);
	return 0;
}

int func(int* pArr, int size)
{
	int i, sum = 0;
	for (i = 0; i < size; i++)
	{
		sum += *(pArr + i);
	}
	return sum;
}

/*
Q.�� ȣ�� ���
- �� ȣ�� ����̶� ���μ��� ���� ���� �μ��� ���޵Ǵ� ����
- ���μ��� �޸𸮿� �����μ��� �޸𸮰� ������ ����
- ���μ��� ���� �����μ��� ����Ǵ� ����

#include<stdio.h>
void callValue(int b);

int main(void)
{
	int a = 1;
	callValue(a);
	printf("���μ� a�� ��� : %d\n", a);		// a : ���μ�
	return 0;
}

void callValue(int b)
{
	b = b + 3;
	printf("�����μ� b�� ��� : %d\n", b);	// b : �����μ�
}


/*
Q.�� ȣ�� ��� - �� ���� ���� �ٲٴ� ����

#include<stdio.h>
void Swap(int a, int b);

int main(void)
{
	int x = 10, y = 20;
	printf("�ʱⰪ x = %d, y = %d\n", x, y);
	Swap(x, y);
	printf("�Լ� �ۿ��� ���� �� x = %d, y = %d\n", x, y);		// Swap �Լ� �ۿ��� ��� �� �� ����X
	return 0;
}

void Swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("�Լ� �ȿ��� ���� �� a = %d, b = %d\n", a, b);		// Swap �Լ� �ȿ��� ��� �� �� ����
}

/*
Q.���� ȣ�� ���
- �Լ� ȣ�� �� �������ڷ� �޸� ���ٿ� ���Ǵ� �ּҰ��� ����

#include<stdio.h>
void callReference(int* b);

int main(void)
{
	int a = 1;
	callReference(&a);
	printf("���μ� a�� ��� : %d\n", a);
	return 0;
}

void callReference(int* b)
{
	*b = *b + 3;
	printf("�����μ� *b�� ��� : %d\n", *b);		// b -> 0x100, *b -> 1
}

/*
Q.���� ȣ�� ���
- �� ���� ���� �ٲٴ� ����(Swap�Լ� ���)

#include<stdio.h>
void Swap(int*, int* b);

int main(void)
{
	int x = 10, y = 20;
	printf("�ʱⰪ x = %d, y = %d\n", x, y);
	Swap(&x, &y);
	printf("�Լ� �ۿ��� ���� �� : x = %d, y = %d\n", x, y);
	return 0;
}

void Swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("�Լ� �ȿ��� ���� �� : *a = %d, *b = %d\n", *a, *b);
}

/*
Q.����ڷκ��� �� ���� �Է� �޾� �� ���� �հ� ���� ���ϴ� ���α׷��� �ۼ��϶�. �� ���� �հ� ���� �����
�� ���� �Լ� �ȿ��� �Լ��� �հ� ���� ������ �̷������ �Ѵ�. �� ������ �ذ��ϱ� ���ؼ��� ���� ȣ��
(call-by-reference)����� ����ؾ� �Ѵ�.

#include<stdio.h>

void func(int x, int y, int* pHap, int* pGop)
{
	*pHap = x + y;
	*pGop = x * y;
}

void main()
{
	int a, b, hap, gop;

	scanf_s("%d%d", &a, &b);

	func(a, b, &hap, &gop);
	printf("�� : %d\n", hap);
	printf("�� : %d", gop);
}
/*
Q.����ڷκ��� ������ �ϳ� �Է� �޴´�. �׸��� Factorial �̶�� �̸��� �Լ��� ���� ��, ����ڷκ���
�Է� ���� ������ ���� ���ڷ� �����Ѵ�. Factorial �̶�� �Լ��� ���п����� ���丮��� �Ȱ��� ����� �ϴµ�,
������� ���� Factorial �Լ��� �� ��° �������ڿ� ������ ���·� �����ϸ�, �Լ��� ���� �� ����ȣ�⿡ ����
������� �������ڷ� ���ϵǵ��� �Ѵ�.

#include<stdio.h>

void Factorial(int x, int* pRet)
{
	*pRet = 1;
	for (int i = 0; i < x; i++)
	{
		*pRet = *pRet * (i + 1);
	}
}

void main()
{
	int x, factorial;
	factorial = 0;
	scanf_s("%d", &x);

	Factorial(x, &factorial);
	printf("����� = %d\n", factorial);
}

/*
Q.������ �迭 �� ���� �����Ѵ�. �ʱⰪ�� ���� �迭�� ���̰� �����ǵ��� �����Ѵ�. ������ �迭�� ���̸�ŭ
�迭�� ��Ҹ� ����ϰ�, �迭�� �� ����� �ּҸ� ����ϰ�, �迭�� �̸��� ����غ����� ����.

#include<stdio.h>

void main()
{
	int a[] = { 1,2,3,4,5 };

	printf("�迭�� ��� : %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	printf("�迭�� �ּ� : %p %p %p %p %p\n", &a[0], &a[1], &a[2], &a[3], &a[4]);
	printf("�迭�� �̸� : %p", a);	// �迭�� �̸� == ������
									// �迭�� ù ��° ����� �޸� �ּ� == �迭�� �̸�
}

/*
Q.������ �迭 �� ���� �����Ѵ�. �ʱⰪ�� ���� �迭�� ���̰� �����ǵ��� �����Ѵ�. ������ �迭�� ���̸�ŭ
�迭�� ��Ҹ� ����ϵ�, �迭�� �̸��� �̿��Ͽ� (�迭�� �̸��� �����Ϳ� ����.) �����ͷ� �����ϴ� ���·�
�迭�� ��Ҹ� ����غ���.


#include<stdio.h>

void main()
{
	int a[] = { 1,2,3,4,5 };

	int *pA;
	pA = a;		// pA = �迭�� ù ��° ��� = 1

	printf("�迭�� ��� : %d %d %d %d %d\n", *pA, *(pA + 1), *(pA + 2), *(pA + 3), *(pA + 4));
	printf("�迭�� �ּ� : %p %p %p %p %p\n", (pA), (pA + 1), (pA + 2), (pA + 3), (pA + 4));
	printf("�迭�� �̸� : %p\n", pA);
}


/*
Q.������ ������ �迭 �� ���� �����Ѵ�. �ʱⰪ�� �ٶ� �迭�� ���̰� �����ǵ��� �����Ѵ�. ������ �迭��
�̿��Ͽ� ������ �迭�� �ʱ�ȭ�� ���� ��� ����غ���.

#include<stdio.h>

void main()
{
	const char* pA[] = { "C���", "�ڹ�", "C++" };

	printf("%s %s %s\n", pA[0], pA[1], pA[2]);
	// ==
	printf("%s %s %s", *pA, *(pA + 1), *(pA + 2));
}


/*
Q.���� ������

#include<stdio.h>

int main(void)
{
	int a;
	int* p;
	int** pp;

	a = 100;
	p = &a;		// a�� �ּҰ��� p�� �����ߴ�. ������ ������ p�� a�� �޸𸮸� �����Ѵ�. 
	pp = &p;	// ������ ������ pp�� �����Ѵ�. 

	printf("a�� �ּҰ� &a : %p\n", &a);
	printf("p�� �� : %p\n", p);
	printf("*p�� �� : %d\n\n", *p);

	printf("pp�� �� : %p\n", pp);		// pp�� ������ �ִ� �ּҰ� == p�� �ּҰ�
	printf("*pp�� �� : %p\n", *pp);		// pp�� ����Ű�� �ִ� �޸��� ������ == a�� �ּҰ�
	printf("**pp�� �� : %d\n", **pp);	// 

	// p == &a			// p�� a�� �ּҰ��� ����
	// * pp == p == &a	// pp�� ����Ű�� �ִ� �޸��� ���� ��

	return 0;
}

/*
Q.�Լ� �Ű������� ���� ������ ���

#include<stdio.h>

void Swap(int* a, int*

b);
int main(void)
{
	int x = 10, y = 20;
	int* pX, * pY;
	pX = &x;
	pY = &y;
	printf("�ʱⰪ x = %d, y= %d\n", x, y);
	Swap(&pX, &pY);	//Swap(&x, &y); ==> Swap(pX, pY);
	printf("�Լ� �ۿ��� ���� �� *pX = %d, *pY = %d\n", *pX, *pY);
	return 0;
}

void Swap(int** a, int** b)
{
	int* temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("�Լ� �ȿ��� ���� �� **a = %d, **b = %d\n", **a, **b);
}

/*
Q.void*���� ������ ���ü�� �����ϰ� ����غ���.

#include<stdio.h>

int main(void)
{
	void* a;
	int b = 1234;

	a = &b;
	printf("%d\n", *a);		// void�� �������� a�� ������ b�� �ּҰ��� �ް� ������ �ּҰ��� �Ѱܹ޾��� ��,
							// a���忡���� �� byte��ŭ�� �޸𸮸� �о�� �� �� �� �� ����.
							// (������ type�� ��)

	return 0;
}

/*
Q.void*���� ������ ���ü�� �����ϰ� ����غ���.

#include<stdio.h>

int main(void)
{
	void* a;
	int b = 1234;

	a = &b;
	printf("%d\n", *a);		// void�� �������� a�� ������ b�� �ּҰ��� �ް� ������ �ּҰ��� �Ѱܹ޾��� ��,
							// a���忡���� �� byte��ŭ�� �޸𸮸� �о�� �� �� �� �� ����.
							// (������ type�� ��)

	// printf("%d\n", *a); ��� printf("%d\n", *(int*)a);�� ���� => ����ȯ �ϸ� ��

	return 0;
}

/*
Q.void�� ������ ������ double���� ������ ���� �����ϰ�, double�� ������ void�� ������ ������ ����Ű�� �Ѵ�.
�׸��� void�� ������ ������ ���ؼ� ����Ű�� �ִ� ������ ȭ�鿡 ����ϵ��� ����.

#include<stdio.h>

int main(void)
{
	void* a;
	double b = 3.14;

	a = &b;
	printf("%f\n", *(double*)a);

	return 0;
}

/*
Q.������ �迭 �� ���� �����Ѵ�. �ʱⰪ�� ���� �迭�� ���̰� �����ǵ��� �����Ѵ�. �׸���, func()��� �Լ���
������ ��, �ռ� ������ �迭���� �迭�� �̸��� �Լ��� �������ڷ� �ѱ��. ���μ��� �Ѿ�� �迭�� �̸���
�Լ������� �����μ��� �����ͷ� �޴´ٰ� �Ͽ���. �Լ��� �����μ��� �̿��Ͽ� �迭�� ��� ���� �Լ� �ȿ���
��� ����ϰ� �迭�� ��� ���� ���� ���Ͽ���.

#include<stdio.h>

void func(int* pA, int aSize)
{
	printf("�迭�� ��� : %d %d %d %d %d\n", *pA, *(pA + 1), *(pA + 2), *(pA + 3), *(pA + 4));

	int sum = 0;
	for (int i = 0; i < aSize; i++)
	{
		sum = sum + *(pA + i);
	}
	printf("�迭 ����� �� : %d", sum);
}

void main()
{
	int a[] = { 1,2,3,4,5 };
	int size = sizeof(a) / sizeof(a[0]);
	func(a, size);
}

/*
Q.

#include<stdio.h>

int Add(int a, int b);
int Min(int a, int b);

int main(void)
{
	int a, b, sel, result;
	int (*fPtr)(int a, int b);

	while (1)
	{
		printf("���� �� �����Ͻÿ� (1:���� 2:���� 3:����) : ");
		scanf_s("%d", &sel);

		switch (sel)
		{
		case 1:
			fPtr = Add;
			break;
		case 2:
			fPtr = Min;
			break;
		case 3:
			return 0;
		default:
			break;
		}
		printf("�� ������ �Է��Ͻÿ� : ");
		scanf_s("%d %d", &a, &b);
		result = fPtr(a, b);
		printf("��� : %d\n", result);
	}
	return 0;
}
int Add(int a, int b)
{
	return a + b;
}
int Min(int a, int b)
{
	return a - b;
}

/*
Q.�����͸� �����ϴ� �Լ��� NULL üũ ���ִ� ����

#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[] = "Love";
	char* p;

	p = strchr(str, "v");
	if (p != NULL)		// �ּҰ��� NULL�ΰ�?
	{
		*p = "b";
		printf("���� ��� : %s\n", str);
	}
	else
	{
		printf("NULL�� �����Ͽ����ϴ�. \n");
	}
	return 0;
}

/*
Q.puts, fputs �Լ�

#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[] = "Have a nice day";
	puts(str);

	fputs(str, stdout);
	fputs("\n", stdout);

	return 0;
}

/*
Q.puts, fputs �Լ�

#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[10];

	puts("gets ���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin);		//sizeof(str) :  10 byte
	puts(str);

	fputs("fgets ���ڿ� �Է� : ", stdout);
	fgets(str, sizeof(str), stdin);
	puts(str);
	return 0;
}

/*
Q.strncat �Լ��� ����.

#include<stdio.h>
#include<string.h>

int main(void)
{
	char dest[100] = "I am";
	char src1[] = " not a student";
	char src2[] = " a nice guy";

	strncat_s(dest, src1, 4);
	puts(dest);
	strcat_s(dest, src2);
	puts(dest);

	return 0;
}

/*
Q.�� ���ڿ��� ������ �ٸ��� ���Ѵ�.

#include<stdio.h>
#include<string.h>

int main(void)
{
	int ret1, ret2, ret3;
	char s1[] = "ABC";
	char s2[] = "ABC";
	char s3[] = "ABB";
	char s4[] = "ABD";

	ret1 = strcmp(s1, s2);
	ret2 = strcmp(s1, s3);
	ret3 = strcmp(s1, s4);

	printf("ret1�� ����� : %d\n", ret1);
	printf("ret2�� ����� : %d\n", ret2);
	printf("ret3�� ����� : %d\n", ret3);
}

/*
Q.�� ���ڿ��� ������ �ٸ��� ���Ѵ�.

#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[20];
	puts("���� : ���󿡼� ���� ���� �����?");
	fgets(str, sizeof(str), stdin);

	if (!strcmp(str, "��\n"))
	{
		printf("�����Դϴ�.\n");
	}
	else
	{
		printf("�����Դϴ�.\n");
	}
	return 0;
}

/*
Q.���� ����� �̸����� ���� �����Ͽ� ���ϴ� ����.

#include<stdio.h>
#include<string.h>

int main(void)
{
	int i;
	const char* arr[] = { "���", "�̸�", "�ں���" };
	puts("ȸ�翡�� �达���� ���� ����� ����Ͻÿ�");

	for (i = 0; i < 5; i++)
	{
		if (strncmp(arr[i], "��", 1) == 0)
		{
			printf("%s\n", arr[i]);
		}
	}
	return 0;
}

/*
Q.���ڿ� �˻��ϴ� �Լ��� ���� (strchr �Լ�)

#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[] = "applepie";
	int count = 0;
	char* ptr;
	char* rptr;
	int i;

	ptr = strchr(str, 'e');
	rptr = strrchr(str, 'e');
	if (ptr == NULL)
	{
		printf("���� 'e'�� ã�� �� �����ϴ�.");
	}
	else
	{
		printf("strchar:����'e'�� %d��° ��ġ���� ã�ҽ��ϴ�.\n", (ptr - str) + 1);
		printf("strrchr:����'e'�� %d��° ��ġ���� ã�ҽ��ϴ�.\n", (rptr - str) + 1);
	}
	return 0;
}

/*
Q.���ڿ� �˻��ϴ� �Լ��� ���� (strstr �Լ�)

#include<stdio.h>
#include<string.h>

int main()
{
	char str[] = "�ٰ����� NOCTA �÷����� Ȱ�� ������ ����� ��Ÿ�Ͽ� ����\
	ö���� ������ �� ä �������� ����� ���� �پ��� �ʼ� �����۰� �α� ��������\
    ����ؼ� �����Դϴ�.��÷�� ����� ����� Ƽ�� ������ �׷��Ȱ� �񽺵��� �����\
	�귣���� Ư¡�Դϴ�.NOCTA ���帶ũ�� ������ ���� �޽����� �����մϴ�.";
	char strSearch[200];
	fputs("�˻��� ���ڿ��� �Է��ϼ��� : ", stdout);
	fgets(strSearch, sizeof(strSearch), stdin);
	strSearch[strlen(strSearch) - 1] = '\0';	// strlen : ���ڿ� ����

	if (strstr(str, strSearch))
		puts("���ڿ��� ã�ҽ��ϴ�.");
	else
		puts("���ڿ��� ã�� �� �����ϴ�.");
	return 0;
}

/*
Q.

#include<stdio.h>
#include<string.h>

int main()
{
	char string[] = "f(x)=a+b*c%d-f";
	char strSeparate[] = "%=+-*";
	char* strPos = string;

	do
	{
		strPos = strpbrk(strPos, strSeparate);
		if (strPos != NULL)
			printf("%s\n", strPos);
		++strPos;
	} 	while (strPos != NULL);
	return 0;
}

/*
Q.

#include<stdio.h>
#include<string.h>

int main()
{
	char string[] = "����/ȣ����/��/�䳢/�⸰/�ڳ���/��Ÿ";
	char strSeparate[] = "/";
	char* strPos;
	char* context = NULL;

	strPos = strtok_s(string, strSeparate, &context);
	while (strPos != NULL)
	{
		puts(strPos);
		strPos = strtok_s(NULL, strSeparate, &context);
	}
	return 0;
}

/*
Q.���� ���� ȣ�� ��Ŀ� �ǰ��ؼ� �Լ��� ȣ���ϵ�, �� ���� ���� �ٲٴ� �Լ��� Swap()�Լ���
�ۼ��Ѵ�. main()�Լ����� Swap �Լ� ȣ�� �� ���� ����ϰ�, �Լ� �ȿ��� ���� �� ���� ����ϰ�,
���������� �Լ� �ۿ��� ���� ����ϵ��� �Ѵ�.

#include<stdio.h>
void Swap(int a, int b);

void main()
{
	int a = 1, b = 2;

	printf("�ʱⰪ a = %d, y = %d\n", a, b);
	Swap(a, b);
	printf("�Լ� �ۿ��� ���� �� a = %d, b = %d\n", a, b);
}

void Swap(int arg1, int arg2)
{
	int temp;
	temp = arg1;
	arg1 = arg2;
	arg2 = temp;
	printf("�Լ� �ȿ��� ���� �� a = %d, b = %d\n", arg1, arg2);
}

/*
Q.����ڷκ��� �� ���� �Է� �޾� �� ���� ���� ���ϴ� ���α׷��� �ۼ��Ѵ�. �� ���� ����
���ϴ� ���α׷��� ������ �Լ��� �����ϵ�, ���� ȣ�� ����� ����Ͽ� �տ� ���� ����� �޵���
�Ѵ�.

#include<stdio.h>
void Plus(int arg1, int arg2, int* sum)
{
	*sum = arg1 + arg2;
}

void main()
{
	int a = 0, b = 0;
	int result = 0;
	scanf_s("%d%d", &a, &b);
	Plus(a, b, &result);
	printf("%d\n", result);
}

/*
Q.������ ���� �� �� �����ϰ�, void*�� ������ �� �� �����Ѵ�. void*�� ������ ������ ������
�����ϵ��� �Ѵ�. void*�� ������ ����Ͽ� ������ ������ ���� ���� �����Ͽ� ����غ����� ����.

#include<stdio.h>

void main()
{
	void* a;
	int b = 100;

	a = &b;
	printf("%d", *(int*)a);	// ����ȯ�� ���� �ϰ� �������� ���� �´�.
}

/*
Q.������ �迭�� �� �� �����ϰ� �ʱ�ȭ�Ѵ�. �׸���, void*�� ������ �� �� �����Ѵ�. void*��
������ ������ �迭�� �����ϵ��� �Ѵ�. void*�� ������ ����Ͽ� ������ �迭�� �� ��° ��Ұ���
�����Ͽ� ����غ����� ����.

#include<stdio.h>

void main()
{
	int arr[] = { 1,2,3 };
	void* pA;
	pA = arr;

	printf("%d", *((int*)pA + 1));
}

/*
Q.������ �迭�� �����Ͽ� "moon"�̶�� ���ڿ��� �ʱ�ȭ�Ѵ�. �׸���, ������ ������ ���� p��
�����Ѵ�. �� ���ڿ� �߿� 'n'�� �˻��� �� �˻��� �����ߴٸ�, 'n'�� 'k'�� �����Ͽ� ���� ���
���ڿ��� ����ϵ��� �Ѵ�. (���� �˻� �Լ��� strchr()�Լ��� ����Ѵ�.)

#include<stdio.h>
#include<string.h>
void main()
{
	char str[] = "moon";
	char* p;
	p = strchr(str, 'n');
	if (p != NULL)
	{
		*p = 'k';
		printf("���� ��� : %s\n", str);
	}
}

/*
Q.ǥ���Լ��� ������� �ʰ� ���� ���ڿ��� �����ϴ� �Լ�(springf_s)

#include<stdio.h>

int main()
{
	char str[100];
	int i = 10;
	double d = 3.14;

	sprintf_s(str, "%d", i);
	printf("������ ���ڿ��� ��ȯ : %s\n", str);

	sprintf_s(str, "%.2f", d);
	printf("�Ǽ��� ���ڿ��� ��ȯ : %s\n", str);

	return 0;
}

/*
Q.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char ch;
	fputs("������ 'y' �Ǵ� 'Y'��, Ʋ���� 'n' �Ǵ� 'N'�� �����ּ��� : ", stdout);
	scanf_s("%c", &ch);

	switch (ch)
	{
	case 'Y':
	case 'y':
		puts("���εǾ����ϴ�.");
		break;
	case 'N':
	case 'n':
		puts("����Ͽ����ϴ�.");
		break;
	}
	return 0;
}

/*
Q.��ҹ��ڴ� �ҹ��ڷ� �ҹ��ڴ� �빮�ڷ� ��ȯ�ϴ� �Լ�

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(void)
{
	char ch;
	fputs("������ 'y' �Ǵ� 'Y'��, Ʋ���� 'n' �Ǵ� 'N'�� �����ּ��� : ", stdout);
	scanf_s("%c", &ch);

	switch (tolower(ch))
	{
	case 'y':
		puts("���εǾ����ϴ�.");
		break;
	case 'n':
		puts("����Ͽ����ϴ�.");
		break;
	}
	return 0;
}

/*
Q.���ڿ��� ����ڷκ��� �Է� �޴´�. �׸���, �Է¹��� ���ڿ��� ù ��° �ٿ����� �� ���� ���,
�� ��° �ٿ����� �� ���� ���, ... ���ڿ��� ������ ����(NULL�� ���� �� ����)���� ����ϴ�
���α׷��� �ۼ��϶�. (����, �Է��� ���ڿ��� ���̸� ���� ���� strlen �Լ��� ����ϰ�, ���ڿ�
���� �� ������ ���� strcpy, strncat �Լ��� ����Ѵ�.)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	char str1[20] = "";		// �Է� ���ڿ� ����
	char str2[20] = "";		// ��� ���ڿ� ����

	puts("���ڿ��� �Է��Ͻÿ�.");
	fgets(str1, sizeof(str1), stdin);
	int len = strlen(str1);

	for (int i = 1; i < len; i++)
	{
		strcpy_s(str2, "");
		strncat_s(str2, str1, i);	// str2�� str1�� i���� ���̰ڴ�.
		puts(str2);
	}
}

/*
Q.����ڷκ��� ������ ������ ���� ���ڿ��� �� �� �Է� �޴´�. �Է� ���� �� ���� ���ڿ���
���ϴ� ���α׷��� �ۼ��϶�. (strcmp)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	char str1[100];
	char str2[100];

	puts("ù ��° ���ڿ��� �Է��Ͻÿ�.");
	fgets(str1, sizeof(str1), stdin);
	puts("�� ��° ���ڿ��� �Է��Ͻÿ�.");
	fgets(str2, sizeof(str2), stdin);

	if (strcmp(str1, str2) == 0)
	{
		printf("�� ���ڿ��� �����ϴ�.");
	}
	else if (strcmp(str1, str2) == 1)
	{
		printf("ù ��° ���ڿ��� Ů�ϴ�.");
	}
	else if (strcmp(str1, str2) == -1)
	{
		printf("�� ��° ���ڿ��� Ů�ϴ�.");
	}
	else
	{
		printf("��ȿ�� ���ϰ��� �ƴմϴ�.");
	}
}

/*
Q.���� ������ ���ڿ��� ����ڷκ��� �Է� �޴´�. �Է� �� �� ������ ���� ���̿� ','�� �־��ֵ���
�Ѵ�. �Է��� ������ �Է� ���� �� ������ ���ڸ� ���Ͽ� �� ������� ����ϴ� ���α׷��� �ۼ��϶�.
(strtok)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	char str[100];

	puts("���ڿ��� �Է��Ͻÿ�.");
	fgets(str, sizeof(str), stdin);
	char strSeparate[] = ",";
	char* strPos = NULL;
	char* context = NULL;
	int total = 0;

	strPos = strtok_s(str, ",", &context);

	while (strPos != NULL)
	{
		total += atoi(strPos);
		strPos = strtok_s(NULL, ",", &context);
	}
	printf("���ڿ��� �� ����� ���� %d�Դϴ�.\n", total);
	return 0;
}




*/