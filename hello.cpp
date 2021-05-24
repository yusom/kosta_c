/*
Q.정수 형태의 문자열을 사용자로부터 입력 받는다. 입력 시 각 숫자의 숫자 사이에 ','를 넣어주도록
한다. 입력이 끝나면 입력 받은 각 단위의 숫자를 합하여 그 결과값을 출력하는 프로그램을 작성하라.
(strtok)
*/

#include<stdio.h>
#include<string.h>

int main(void)
{
	FILE* file; 
	char buf[256];
	memset(buf, 0, 256);
	printf("문자열을 입력하시오: ");

	fgets(buf, sizeof(buf), stdin);

	fopen_s(&file, "c:\\Temp.txt", "wt");

	if(file == NULL)
	{
		printf("파일이 존재하지 않습니다.\n");
	}
	else
	{
		fwrite(buf, 1, 256, file);
		printf("버퍼의 내용이 파일에 쓰여졌습니다.\n");
		fclose(file);
	}
	return 0;
}
	


/*
#include(stdio.h>

int main()
{
	printf("Hello World\n");
	return 0;                   // 0은 y값임
}

#include<stdio.h>
int main(void)
{
	int input1, input2, input3;
	int multi;
	printf("첫 번째 정수를 입력하시오.");
	scanf_s("%d", &input1);
	printf("두 번째 정수를 입력하시오.");
	scanf_s("%d", &input2);
	printf("세 번째 정수를 입력하시오.");
	scanf_s("%d", &input3);
	multi = input1 * input2 * input3;
	printf("세 수의 곱은 %d이다 \n", multi);
	return 0;
}

#include<stdio.h>
int main(void)
{
	char input;
	printf("알파벳을 입력하시오.");
	scanf_s("%c", &input);
	printf("아스키코드값은 %d입니다\n", input);
	return 0;
}

#include<stdio.h>
int main(void)
{
	int a;
	int b;

	a = 5;
	printf("++a의 처리 결과: %d\n", ++a);

	a = 5;
	printf("a++의 처리 결과: %d\n", a++);
	printf("a를 다시 출력: %d\n", a);

	b = 10;
	printf("--b의 처리 결과: %d\n", --b);

	b = 10;
	printf("b--의 처리 결과: %d\n", b--);
	printf("b를 다시 출력: %d\n", b);
	return 0;
}

#include<stdio.h>
int main(void)
{
	int a = 10;
	int b = 11;
	int c = 12;
	int d = 10;

	printf("!(a==10)의 결과는 : %d\n", !(a == 10));
	printf("(a<b)&&(a<c)의 결과는 : %d\n", (a < b) && (a < c));
	printf("(a>=c)||(a==d)의 결과는 : %d\n", (a >= c)||(a == d));
	return 0;
}

#include<stdio.h>
int main(void)
{
	int A, B;
	int sum, min, multi, div;
	printf("첫 번째 정수를 입력하시오 : \n");
	scanf_s("%d", &A);
	printf("두 번째 정수를 입력하시오 : \n");
	scanf_s("%d", &B);
	sum = A + B;
	printf("두 수의 합 : %d\n", sum);
	min = A - B;
	printf("두 수의 차 : %d\n", min);
	multi = A * B;
	printf("두 수의 곱 : %d\n", multi);
	div = A / B;
	printf("두 수의 나누기 : %d\n", div);
}

#include<stdio.h>
int main(void)
{
	int a,b,c;
	printf("정수를 입력하세요: ");
	scanf_s("%d", &a);
	if(a > 5)
	{
		printf("입력값은 5보다 큽니다\n");
	}
	else
	{
		printf("입력값은 5보다 크지 않습니다\n");
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
			printf("최소값 : %d", c);
		}
		else
		{
			printf("최소값 : %d", b);
		}
	}
	else   // b보다 a가 작다
	{
		if (a > c)
		{
			printf("최소값 : %d", c);
		}
		else
		{
			printf("최소값 : %d", a);
		}
	}
	return 0;
}

#include<stdio.h>
int main(void)
{
	int a = 0;
	int b = 0;
	printf("두 개의 정수를 입력하시오 : \n");
	scanf_s("%d%d", &a, &b);
	printf("입력한 정수는 %d과 %d입니다\n", a, b);
	return 0;
}

#include<stdio.h>
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("세 개의 정수를 입력하시오. : \n");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("세 정수의 합 : %d\n세 정수의 평균 : %d ", a+b+c, (a+b+c)/3);

	return 0;
}

#include<stdio.h>
int main(void)
{
	int a = 0;
	printf("점수를 입력하시오. : \n");
	scanf_s("%d", &a);
	if ((a >= 60) && (a<=100))
	{
		printf("합격입니다.\n");
		if ((a >= 90))
		{
			printf("장학대상입니다.\n");
		}
	}
	else
	{
		printf("불합격입니다.\n");
	}
	return 0;
}

#include<stdio.h>
int main(void)
{
	int age = 0;
	printf("나이를 입력해주세요 : \n");
	scanf_s("%d", &age);

	if ((age < 13) && (age >= 1))
	{
		printf("어린이입니다.\n");
	}
	else if ((age >= 13) && (age < 19))
	{
		printf("청소년입니다.\n");
	}
	else if (age >= 19)
	{
		printf("성인입니다.\n");
	}
	else
	{
		printf("잘못 입력하셨습니다.\n");
	}
	return 0;
}

#include<stdio.h>
int main(void)
{
	int month;
	printf("월을 입력하시오. : \n");
	scanf_s("%d", &month);
	switch(month)
	{
	case 12:
	case 1:
	case 2:
		printf("겨울이군요.\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("봄이군요.\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("여룸이군요.\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("가을이군요.\n");
		break;
	default:
		printf("월을 잘못입력하셨습니다.\n");
		break;
	}
	return 0;
}

#include<stdio.h>
int main(void)
{
	int num;
	printf("하나의 정수를 입력하시오. : \n");
	scanf_s("%d", &num);

	int val = num % 2;   // switch(num%2)도 가능
	switch (val)
	{
	case 0:
		printf("입력한 수는 짝수입니다.\n");
		break;
	case 1:
		printf("입력한 수는 홀수입니다.\n");
		break;
	default:
		printf("수를 잘못입력하셨습니다.\n");
		break;
	}
	return 0;
}

#include<stdio.h>
int main(void)
{
	int score;
	printf("점수를 입력하세오. : \n");
	scanf_s("%d", &score);

	if (score >= 0)
	{
		int num = (score - 1) / 10;

		switch (num)
		{
		case 9:
			printf("학점은 A입니다.\n");
			break;
		case 8:
			printf("학점은 B입니다.\n");
			break;
		case 7:
			printf("학점은 C입니다.\n");
			break;
		case 6:
			printf("학점은 D입니다.\n");
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
			printf("학점은 F입니다.\n");
			break;
		default:
			printf("점수를 잘못 입력하셨습니다.\n");
			break;
		}
	}
	else
	{
	printf("점수를 잘못 입력하셨습니다.\n");
	}
	return 0;
}


Q. 반복문을 이용해서 1부터 10까지의 짝수만 출력하여라.
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

Q.구구단 2단만 출력하기.(while문 사용)
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
	printf("두 개의 정수를 입력하시오. : ");
	scanf_s
	("%d%d", &a, &b);
	hap = Add(a, b);
	printf("두 정수의 합은 : %d입니다.\n", hap);
	return 0;
}

#include<stdio.h>
int Add(int i, int j);
void print_Start()
{
	printf("======Programming Start =====\n");
	printf("두 개의 정수를 입력하시오 : ");
}
void print_Hap(int result)
{
	printf("두 수의 합은 %d입니다.\n", result);
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
	printf("두 개의 정수를 입력하시오 : ");
}
void print_Hap(int result)
{
	printf("두 수의 결과는 %d입니다.\n", result);
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

	printf("두 정수를 입력하시오. : \n");
	scanf_s("%d%d", &a, &b);

	imax = Max(a,b);
	imin = Min(a,b);

	printf("최대값 : %d 최소값 : %d", Max(a,b), Min(a,b));
	return 0;
}

#include<stdio.h>
void func1();
void func2();
void main(void)
{
	int val = 0;
	printf("첫 번째 메모리 할당 : val = 0\n");
	func1();
	printf("두 번째 메모리 소멸 : local = 10\n");
}
void func1()
{
	int local = 10;
	printf("두 번째 메모리 할당 : local = 10\n");
	func2();
	printf("첫 번째 메모리 소멸 : local = 20\n");
}
void func2()
{
	int local = 20;
	printf("세 번째 메모리 할당 : local = 20\n");
}

#include<stdio.h>
int global;
void Add(int i, int j);
int main(void)
{
	int a;
	int b;
	printf("두 개의 정수를 입력하시오 :");
	scanf_s("%d%d", &a, &b);
	Add(a, b);
	printf("두 정수의 합은 : %d입니다\n", global);
	return 0;
}
void Add(int i, int j)
{
	global = i + j;
} // 이 함수가 끝나면 i와 j는 사라짐  global변수는 프로그램이 종료될 때 죽음

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

Q. 읽은 책의 누적 페이지 수를 계산하는 함수를 만들어라.
#include<stdio.h>
void func(int input);
int main(void)
{
	int i = 0;
	int j = 0;

	while (1)
	{
	printf("읽은 책의 페이지 수를 입력하시오 : \n");
	scanf_s("%d", &i);

		if(i == -1)
		{
			break;
		}

		func(i);
	}

	printf("더 분발하세요");
}
void func(int input)
{
	static int value = 0;
	value = value + input;
	printf("최종 누적 페이지 : %d\n\n", value);
}

#include<stdio.h>
void func(int page);
int main(void)
{
	while (1)
	{
		int page = 0;
		printf("읽은 책의 페이지 수를 입력하시오 : \n");
		scanf_s("%d", &page);

		if (page == -1)
			break;
		func(page);
	}

	printf("더 분발하세요");
}
void func(int page)
{
	static int sum_page = 0;
	sum_page = sum_page + page;
	printf("최종 누적 페이지 : %d\n\n", sum_page);
}

Q.정수형 변수 1개를 전달인자로 받는 함수를 만든다.이 함수의 기능은
전달받은 정수형 변수에 2를 곱하여 리턴하는 것이다.이 함수를 main에서
호출하여 출력해보자.

#include<stdio.h>
int gop(int a)
{
	return a * 2;
}

void main()
{
	int i = 0;                    // i는 실매게변수
	scanf_s("%d", &i);
	printf("%d", gop(i));
}

Q.사각형의 넓이를 구하는 함수를 작성해보자. 사용자로부터 두 정수(가로의
길이, 세로의 길이)를 각각 입력 받아 함수의 전달인자로 전달하고, 사각형의
넓이를 출력하는 함수를 작성하자. 그리고 이 함수를 main에서 호출하여
출력해보자.

#include<stdio.h>
void extent(int width, int height)
{
	printf("사각형의 넓이 : %d", width * height);    //굳이 return할 필요없음
}

void main()
{
	int width = 0;
	int height = 0;
	scanf_s("%d%d", &width, &height);
	extent(width, height);
}


Q.원의 넓이를 구하는 함수를 작성하시오. 사용자로부터 실수(반지름의 길이)
를 입력 받아 함수의 전달인자로 전달하고, 원의 넓이를 출력하는 함수를
작성하시오. 그리고 이 함수를 main에서 호출하여 출력하시오.


#include<stdio.h>
void Circle(int r)
{
	printf("원의 넓이 : %f", r * r * 3.14);
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
	printf("원의 넓이 : %f", r * r * 3.14);
}

void main()
{
	double r = 0;
	scanf_s("%f", &r);
	Circle(r);
}



Q.사용자로부터 두 정수를 입력 받아 최대값과 최소값을 구하는 함수를 각각
작성하고, main함수에서 호출하여 출력하시오.


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
	printf("최대값 : %d 최소값 : %d", Max(a, b), Min(a, b));
	return 0;
}


Q 커피 자판기가 있다. 100원 넣으면 '블랙커피', 200원을 넣으면 '밀크커피'
가 나온다. 자판기를 함수로 구현해보자.
사용자로부터 정수형 가격(100,200)을 입력 받아 100을 입력 받으면 '블랙커피'
를 출력하고, 200을 입력 받으면 '밀크커피'를 출력하면 된다.


#include<stdio.h>
void CoffeeMachine(int price)
{
	if (price == 100)
		printf("블랙커피");
	else if (price == 200)
		printf("밀크커피");
	else
		printf("잘못 입력하셨습니다.");
}

void main()
{
	int input = 0;
	scanf_s("%d", &input);
	CoffeeMachine(input);
}


Q.길이가 3인 정수형 배열이 있다.
각각의 배열의 요소에 10,20,30을 순서대로 대입하고, 배열의 요소값을 그대로 출력하라.


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
	printf("배열 요소의 총 합은 %d입니다.\n", total);
	return 0;
}

/*
Q.배열의 길이보다 초기값의 개수가 작은 경우


#include<stdio.h>
int main(void)
{
	int total = 0;
	int array[] = { 1,3,5,7,9 };
	total = array[0] + array[1] + array[2] + array[3] + array[4];
	printf("배열 요소의 총 합은 %d입니다.\n", total);
	return 0;
}

/*
Q.길이가 3인 배열 arr1과 arr2를 선언한다. arr1배열은 선언과 동시에 {1,2,3}으로 초기화
하였다. arr1을 arr2에 복사하고, arr2 배열의 요소를 모두 출력하라.


#include<stdio.h>
int main(void)
{
	int arr1[3] = { 1,2,3 };
	int arr2[3];
	int i = 0;

	arr2[0] = arr1[0];
	arr2[1] = arr1[1];
	arr2[2] = arr1[2];

	printf("arr2의 배열 요소는 %s 이다", arr2[]);
}

/*
Q.문자형 변수를 한 개 선언 후, 'A'값을 입력하고, 이를 이용하여 A부터 Z까지
출력하자. 문자형은 char로 선언하고, 문자 출력시 서식문자는 %c로 한다.


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
Q.길이가 100인 정수형 배열을 선언한 후, 사용자로부터 반복하여 값을 입력 받아,
배열의 요소에 순차적으로 저장한다. 입력값이 -1이면 반복문을 빠져나오도록 하고,
지금까지 입력한 배열의 값을 모두 출력해보도록 하자.


#include<stdio.h>
void main()
{
	int arr[100];
	int i = 0;

	for (i = 0; i < 100; i++)
	{
		printf("정수를 입력하세요.");
		scanf_s("%d", &arr[i]);
		if (arr[i] == -1)
			break;
	}

	printf("결과를 출력합니다.\n");
	for (int k = 0; k < i; k++)
	{
		printf("%d\n", arr[k]);
	}
}

/*
Q.두 개의 정수형 변수 a,b를 선언한다. 변수 a와 b의 값은 각각 2와 3이다.
이 두 개의 변수의 값을 교환하여, a는 3, b는 2의 값을 갖도록 바꾸어보자.


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
Q.두 개의 정수형 변수 a,b를 선언한다. 변수 a와 b의 값은 각각 2와 3이다.
이 두 개의 변수의 값을 교환하여, a는 3, b는 2의 값을 갖도록 바꾸어보자.
(Swap함수 선언해서)


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
Q.두 개의 정수형 변수 a,b를 선언한다. 변수 a와 b의 값은 각각 2와 3이다.
이 두 개의 변수의 값을 교환하여, a는 3, b는 2의 값을 갖도록 바꾸어보자.
(Swap함수 선언해서)

#include<stdio.h>
int main(void)
{
	int b = 100;
	int* pB = &b;

	printf("b = %d\n", b);
	printf("&b = %x\n", &b);
	printf("*pB = %d\n", *pB);  // *pB => pB가 가르키고 있는 메모리의 실제 값 = 100
	printf("pB = %x\n", pB);
	return 0;
}

/*
Q.포인터끼리 뺄 수 있다.


#include<stdio.h>
int main(void)
{
	char str[] = "Programming";
	char* ptr1, * ptr2;

	ptr1 = &str[0];
	ptr2 = &str[7];

	printf("두 포인터 간의 차는 %d입니다.\n", ptr2 - ptr1); // 메모리 사이는 7이다
	return 0;
}

/*
Q.포인터끼리 뺄 수 있다.


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
Q.자료형이 정수형 int이고, 크기가 5인 배열 arr이 있다. 그리고 포인터 ptr이 있는데,
이 배열의 첫 번째 요소인 주소값을 가지고 있다. 포인터를 이용하여 이 배열의 가운데로
이동한 후 그 요소의 값을 출력하는 프로그램을 작성하시오.


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
Q.char형 변수 a, int형 변수 b, double형 변수 c를 선언과 동시에 각각 'C', 10,3.14로
초기화한다. 그리고 각각의 포인터 변수를 선언하되 char형 변수pA는 변수 a를, int형
변수 pB는 변수 b를, double형 변수 pC는 변수 c를 가리키게 한다. 이 때, 포인터 변수를
이용해서 각각의 변수 a,b,c의 값을 1씩 증가시켜 출력하시오.


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
Q.두 개의 정수형 변수 a와 b를 선언한다. 사용자로부터 두 개의 정수값을 입력받아
입력받은 두 수를 교환하여 출력하도록 한다.

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
Q.길이가 2인 정수형 배열을 선언한다. 사용자로부터 두 개의 값을 입력 받고, 입력
받은 두 수를 비교하여 큰 수를 출력하도록 하자.


#include<stdio.h>
void main()
{
	int arr[2];

	scanf_s("%d%d", &arr[0], &arr[1]);
	if (arr[0] > arr[1])
	{
		printf("최대값은 %d입니다.\n", arr[0]);
	}
	else
	{
		printf("최대값은 %d입니다.\n", arr[1]);
	}
}

/*
Q.길이가 5인 정수형 배열을 선언하고, 초기값을 {3,5,2,11,10}이라고 설정한다.
5개의 배열의 요소 중 가장 큰 값을 찾아서 출력해보자.


#include<stdio.h>
void main()
{
	int a[] = { 3,5,2,11,10 };
	int i = 0;
	int imax = a[0];	// imax는 기준값. 첫 번째 요소가 최대값이라고 가정하고
						// 비교하다가 최대값이 바뀌면 imax의 값도 바뀌도록 설정.

	for (i = 0; i < sizeof(a)/sizeof(a[0]); i++)
	{
		if (imax < a[i])
		{
			imax = a[i];
		}
	}
	printf("최대값 : %d\n", imax);
}

/*
Q.배열의 길이가 5인 함수를 선언하고 초기값을 주지 않고,
1-사용자로부터 5개의 값을 입력받은 후 입력받은 수 중에서
최대값을 출력하여라.


#include<stdio.h>
void main()
{
	int a[5] = { 0, };
	int i = 0;
	int imax = 0;

	printf("배열의 값을 입력하시오. : \n");

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

	printf("최대값 : %d", imax);
}

/*
Q.배열의 길이가 5인 함수를 선언하고 초기값을 주지 않고, 사용자로부터 값을 입력받은 후
입력값이 -1이 나오면 입력을 중단하고 입력받은 수 중에서 최대값을 출력하여라.


#include<stdio.h>
void main()
{
	int a[5] = { 0, };
	int i = 0;
	int imax = 0;

	printf("배열의 값을 입력하시오. : \n");

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
	printf("최대값 : %d", imax);
}

#include<stdio.h>
int main(void)
{
	int arr[] = { 1,2,3,4,5 };
	int i;

	printf("배열의 요소 출력 : ");
	for (i = 0; i < 5; i++);
	{
		printf("%d", arr[i]);
	}
	printf("\n\n");

	printf("배열의 주소 출력 : ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", &arr[i]);
	}
	printf("\n\n");

	printf("배열의 이름 출력 : %d\n", arr);
	return 0;
}

#include<stdio.h>
int main(void)
{
	int arr[] = { 1,2,3,4,5 };
	int i;

	printf("배열의 요소 출력 : ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("배열의 이름을 이욯한 배열 요소 출력 : ");
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

	printf("배열의 요소 출력 : ");

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
	const char* pStr = "you";	// 변경하면 안되는 함수는 'const'를 사용해야 함.

	printf("str의 출력 : %s\n", str);
	printf("pStr의 출력 : %s\n", pStr);

	str[0] = 'r';
//	pStr[0] = 'T';  //	상수를 변경하려고 해서 오류가 남.

	printf("str의 출력 : %s\n", str);
	printf("pStr의 출력 : %s\n", pStr);

	return 0;
}

/*
Q.2차원 배열의 예제


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

	printf("2차원 배열 값을 출력 결과\n");
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
Q.2차원 배열의 초기화(1)


#include<stdio.h>
int main(void)
{
	int i, j;
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	printf("======2차원 배열 출력 결과=====\n");

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
Q.2차원 배열의 초기화(2)


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
	printf("배열 요소의 총 합 : %d\n", total);
	return 0;
}

/*
Q.배열의 모든 요소들을 초기화하는 경우 - 배열의 길이가 빠져 있는 경우


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
	printf("배열 요소의 총 합 : %d\n", total);
	return 0;
}

/*
Q.배열의 활용 - 2행 3열의 2차원 배열 arr1과 arr2의 합을 구한 후 출력하시오.


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
Q.사용자로부터 3명의 학생 영구, 맹구, 빡구의 국어, 영어, 수학 점수를 입력받아
배열에 저장하고, 각 학생의 과목 점수의 총합과, 평균을 출력하는 예제이다.


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
			printf("영구의 국어, 영어, 수학 점수를 입력하시오.");
		}
		else if (i == 1)
		{
			printf("맹구의 국어, 영어, 수학 점수를 입력하시오.");
		}
		else
		{
			printf("빡구의 국어, 영어, 수학 점수를 입력하시오.");
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
	printf("과목  영 맹 빡\n");
	for (i = 0; i < 5; i++)
	{
		if (i == 0)
			printf("국어 ");
		else if (i == 1)
			printf("영어 ");
		else if (i == 2)
			printf("수학 ");
		else if (i == 3)
			printf("총점 ");
		else if (i == 4)
			printf("평균 ");
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
	char str[3][10] = { "C언어", "자바", "베이직" };
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
Q.배열형의 인자는 포인터형으로 받는다.


#include<stdio.h>
void func(int* pArr);
int main(void)
{
	int arr[] = { 1,2,3,4,5 };
	int i;

	func(arr);	// 포인터 = 배열의 이름
	for (i = 0; i < 5; i++)
	{
		printf("배열의 요소 출력 : %d\n", arr[i]);
	}
	return 0;
}

void func(int* pArr)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("함수 안에서 배열의 요소* 출력 : %d\n", *(pArr + i));
	}
	printf("\n");
}

/*
Q.func의 기능을 배열의 모든 요소의 합을 리턴


#include<stdio.h>
int func(int* pArr, int size);
int main(void)
{
	int arr[] = { 1,2,3,4,5 };
	int sumArr, sizeArr;

	sizeArr = sizeof(arr) / sizeof(int);
	sumArr = func(arr, sizeArr);
	printf("배열의 총 합 : %d\n", sumArr);
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
Q.값 호출 방식
- 값 호출 방식이란 실인수의 값이 형식 인수로 전달되는 형식
- 실인수의 메모리와 형식인수의 메모리가 별도로 관리
- 실인수의 값이 형식인수로 복사되는 형태

#include<stdio.h>
void callValue(int b);

int main(void)
{
	int a = 1;
	callValue(a);
	printf("실인수 a의 출력 : %d\n", a);		// a : 실인수
	return 0;
}

void callValue(int b)
{
	b = b + 3;
	printf("형식인수 b의 출력 : %d\n", b);	// b : 형식인수
}


/*
Q.값 호출 방식 - 두 개의 값을 바꾸는 예제

#include<stdio.h>
void Swap(int a, int b);

int main(void)
{
	int x = 10, y = 20;
	printf("초기값 x = %d, y = %d\n", x, y);
	Swap(x, y);
	printf("함수 밖에서 변경 후 x = %d, y = %d\n", x, y);		// Swap 함수 밖에서 출력 시 값 변경X
	return 0;
}

void Swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("함수 안에서 변경 후 a = %d, b = %d\n", a, b);		// Swap 함수 안에서 출력 시 값 변경
}

/*
Q.참조 호출 방식
- 함수 호출 시 전달인자로 메모리 접근에 사용되는 주소값을 전달

#include<stdio.h>
void callReference(int* b);

int main(void)
{
	int a = 1;
	callReference(&a);
	printf("실인수 a의 출력 : %d\n", a);
	return 0;
}

void callReference(int* b)
{
	*b = *b + 3;
	printf("형식인수 *b의 출력 : %d\n", *b);		// b -> 0x100, *b -> 1
}

/*
Q.참조 호출 방식
- 두 개의 값을 바꾸는 예제(Swap함수 사용)

#include<stdio.h>
void Swap(int*, int* b);

int main(void)
{
	int x = 10, y = 20;
	printf("초기값 x = %d, y = %d\n", x, y);
	Swap(&x, &y);
	printf("함수 밖에서 변경 후 : x = %d, y = %d\n", x, y);
	return 0;
}

void Swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("함수 안에서 변경 후 : *a = %d, *b = %d\n", *a, *b);
}

/*
Q.사용자로부터 두 수를 입력 받아 두 수의 합과 곱을 구하는 프로그램을 작성하라. 두 수의 합가 곱의 기능은
한 개의 함수 안에서 함수의 합과 곱의 연산이 이루어져야 한다. 이 문제를 해결하기 위해서는 참조 호출
(call-by-reference)방식을 사용해야 한다.

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
	printf("합 : %d\n", hap);
	printf("곱 : %d", gop);
}
/*
Q.사용자로부터 정수를 하나 입력 받는다. 그리고 Factorial 이라는 이름의 함수를 만든 후, 사용자로부터
입력 받은 정수를 전달 인자로 전달한다. Factorial 이라는 함수는 수학에서의 팩토리얼과 똑같은 기능을 하는데,
결과값의 경우는 Factorial 함수의 두 번째 전달인자에 포인터 형태로 전달하며, 함수의 동작 후 참조호출에 의해
결과값이 전달인자로 리턴되도록 한다.

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
	printf("결과값 = %d\n", factorial);
}

/*
Q.정수형 배열 한 개를 선언한다. 초기값에 따라 배열의 길이가 결정되도록 선언한다. 선언한 배열의 길이만큼
배열의 요소를 출력하고, 배열의 각 요소의 주소를 출력하고, 배열의 이름을 출력해보도록 하자.

#include<stdio.h>

void main()
{
	int a[] = { 1,2,3,4,5 };

	printf("배열의 요소 : %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	printf("배열의 주소 : %p %p %p %p %p\n", &a[0], &a[1], &a[2], &a[3], &a[4]);
	printf("배열의 이름 : %p", a);	// 배열의 이름 == 포인터
									// 배열의 첫 번째 요소의 메모리 주소 == 배열의 이름
}

/*
Q.정수형 배열 한 개를 선언한다. 초기값에 따라 배열의 길이가 결정되도록 선언한다. 선언한 배열의 길이만큼
배열의 요소를 출력하되, 배열의 이름을 이용하여 (배열의 이름은 포인터와 같다.) 포인터로 접근하는 형태로
배열의 요소를 출력해보자.


#include<stdio.h>

void main()
{
	int a[] = { 1,2,3,4,5 };

	int *pA;
	pA = a;		// pA = 배열의 첫 번째 요소 = 1

	printf("배열의 요소 : %d %d %d %d %d\n", *pA, *(pA + 1), *(pA + 2), *(pA + 3), *(pA + 4));
	printf("배열의 주소 : %p %p %p %p %p\n", (pA), (pA + 1), (pA + 2), (pA + 3), (pA + 4));
	printf("배열의 이름 : %p\n", pA);
}


/*
Q.문자형 포인터 배열 한 개를 선언한다. 초기값에 다라 배열의 길이가 결정되도록 선언한다. 포인터 배열을
이용하여 포인터 배열에 초기화된 값을 모두 출력해보자.

#include<stdio.h>

void main()
{
	const char* pA[] = { "C언어", "자바", "C++" };

	printf("%s %s %s\n", pA[0], pA[1], pA[2]);
	// ==
	printf("%s %s %s", *pA, *(pA + 1), *(pA + 2));
}


/*
Q.이중 포인터

#include<stdio.h>

int main(void)
{
	int a;
	int* p;
	int** pp;

	a = 100;
	p = &a;		// a의 주소값을 p에 대입했다. 포인터 변수인 p가 a의 메모리를 저장한다. 
	pp = &p;	// 포인터 변수인 pp에 대입한다. 

	printf("a의 주소값 &a : %p\n", &a);
	printf("p의 값 : %p\n", p);
	printf("*p의 값 : %d\n\n", *p);

	printf("pp의 값 : %p\n", pp);		// pp가 가지고 있는 주소값 == p의 주소값
	printf("*pp의 값 : %p\n", *pp);		// pp가 가리키고 있는 메모리의 실제값 == a의 주소값
	printf("**pp의 값 : %d\n", **pp);	// 

	// p == &a			// p는 a의 주소값과 같다
	// * pp == p == &a	// pp가 가리키고 있는 메모리의 실제 값

	return 0;
}

/*
Q.함수 매개변수의 이중 포인터 사용

#include<stdio.h>

void Swap(int* a, int*

b);
int main(void)
{
	int x = 10, y = 20;
	int* pX, * pY;
	pX = &x;
	pY = &y;
	printf("초기값 x = %d, y= %d\n", x, y);
	Swap(&pX, &pY);	//Swap(&x, &y); ==> Swap(pX, pY);
	printf("함수 밖에서 변경 후 *pX = %d, *pY = %d\n", *pX, *pY);
	return 0;
}

void Swap(int** a, int** b)
{
	int* temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("함수 안에서 변경 후 **a = %d, **b = %d\n", **a, **b);
}

/*
Q.void*형에 임의의 대상체를 대입하고 출력해보자.

#include<stdio.h>

int main(void)
{
	void* a;
	int b = 1234;

	a = &b;
	printf("%d\n", *a);		// void형 포인터인 a는 정수형 b의 주소값을 받고 있지만 주소값만 넘겨받았을 뿐,
							// a입장에서는 몇 byte만큼의 메모리를 읽어야 할 지 알 수 없다.
							// (참조할 type을 모름)

	return 0;
}

/*
Q.void*형에 임의의 대상체를 대입하고 출력해보자.

#include<stdio.h>

int main(void)
{
	void* a;
	int b = 1234;

	a = &b;
	printf("%d\n", *a);		// void형 포인터인 a는 정수형 b의 주소값을 받고 있지만 주소값만 넘겨받았을 뿐,
							// a입장에서는 몇 byte만큼의 메모리를 읽어야 할 지 알 수 없다.
							// (참조할 type을 모름)

	// printf("%d\n", *a); 대신 printf("%d\n", *(int*)a);로 변경 => 형변환 하면 됨

	return 0;
}

/*
Q.void형 포인터 변수와 double형의 변수를 각각 선언하고, double형 변수를 void형 포인터 변수가 가리키게 한다.
그리고 void형 포인터 변수를 통해서 가리키고 있는 변수를 화면에 출력하도록 하자.

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
Q.정수형 배열 한 개를 선언한다. 초기값에 따라 배열의 길이가 결정되도록 선언한다. 그리고, func()라는 함수를
선언한 후, 앞서 선언한 배열에서 배열의 이름을 함수의 전달인자로 넘긴다. 실인수로 넘어온 배열의 이름을
함수에서는 형식인수로 포인터로 받는다고 하였다. 함수의 형식인수를 이용하여 배열의 요소 값을 함수 안에서
모두 출력하고 배열의 요소 값의 합을 구하여라.

#include<stdio.h>

void func(int* pA, int aSize)
{
	printf("배열의 요소 : %d %d %d %d %d\n", *pA, *(pA + 1), *(pA + 2), *(pA + 3), *(pA + 4));

	int sum = 0;
	for (int i = 0; i < aSize; i++)
	{
		sum = sum + *(pA + i);
	}
	printf("배열 요소의 합 : %d", sum);
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
		printf("다음 중 선택하시오 (1:덧셈 2:뺄셈 3:종료) : ");
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
		printf("두 정수를 입력하시오 : ");
		scanf_s("%d %d", &a, &b);
		result = fPtr(a, b);
		printf("결과 : %d\n", result);
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
Q.포인터를 리턴하는 함수를 NULL 체크 해주는 예제

#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[] = "Love";
	char* p;

	p = strchr(str, "v");
	if (p != NULL)		// 주소값이 NULL인가?
	{
		*p = "b";
		printf("변경 결과 : %s\n", str);
	}
	else
	{
		printf("NULL을 리턴하였습니다. \n");
	}
	return 0;
}

/*
Q.puts, fputs 함수

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
Q.puts, fputs 함수

#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[10];

	puts("gets 문자열 입력 : ");
	fgets(str, sizeof(str), stdin);		//sizeof(str) :  10 byte
	puts(str);

	fputs("fgets 문자열 입력 : ", stdout);
	fgets(str, sizeof(str), stdin);
	puts(str);
	return 0;
}

/*
Q.strncat 함수의 예제.

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
Q.두 문자열이 같은지 다른지 비교한다.

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

	printf("ret1의 결과값 : %d\n", ret1);
	printf("ret2의 결과값 : %d\n", ret2);
	printf("ret3의 결과값 : %d\n", ret3);
}

/*
Q.두 문자열이 같은지 다른지 비교한다.

#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[20];
	puts("퀴즈 : 세상에서 가장 멋진 사람은?");
	fgets(str, sizeof(str), stdin);

	if (!strcmp(str, "나\n"))
	{
		printf("정답입니다.\n");
	}
	else
	{
		printf("오답입니다.\n");
	}
	return 0;
}

/*
Q.여러 사람의 이름에서 성만 추출하여 비교하는 예제.

#include<stdio.h>
#include<string.h>

int main(void)
{
	int i;
	const char* arr[] = { "김명구", "이명구", "박빠꾸" };
	puts("회사에서 김씨성을 가진 사람만 출력하시오");

	for (i = 0; i < 5; i++)
	{
		if (strncmp(arr[i], "김", 1) == 0)
		{
			printf("%s\n", arr[i]);
		}
	}
	return 0;
}

/*
Q.문자열 검색하는 함수의 예제 (strchr 함수)

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
		printf("문자 'e'를 찾을 수 없습니다.");
	}
	else
	{
		printf("strchar:문자'e'를 %d번째 위치에서 찾았습니다.\n", (ptr - str) + 1);
		printf("strrchr:문자'e'를 %d번째 위치에서 찾았습니다.\n", (rptr - str) + 1);
	}
	return 0;
}

/*
Q.문자열 검색하는 함수의 예제 (strstr 함수)

#include<stdio.h>
#include<string.h>

int main()
{
	char str[] = "다가오는 NOCTA 컬렉션은 활용 가능한 기능적 스타일에 대한\
	철학을 기저에 둔 채 혁신적인 기술을 담은 다양한 필수 아이템과 인기 아이템을\
    계속해서 선보입니다.최첨단 기술이 적용된 티는 절제된 그래픽과 비스듬한 스우시\
	브랜딩이 특징입니다.NOCTA 워드마크로 절제된 톤의 메시지를 전달합니다.";
	char strSearch[200];
	fputs("검색할 문자열을 입력하세요 : ", stdout);
	fgets(strSearch, sizeof(strSearch), stdin);
	strSearch[strlen(strSearch) - 1] = '\0';	// strlen : 문자열 길이

	if (strstr(str, strSearch))
		puts("문자열을 찾았습니다.");
	else
		puts("문자열을 찾을 수 없습니다.");
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
	char string[] = "사자/호랑이/곰/토끼/기린/코끼리/낙타";
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
Q.값에 의한 호출 방식에 의거해서 함수를 호출하되, 두 개의 값을 바꾸는 함수인 Swap()함수를
작성한다. main()함수에서 Swap 함수 호출 전 값을 출력하고, 함수 안에서 변경 후 값을 출력하고,
마지막으로 함수 밖에서 값을 출력하도록 한다.

#include<stdio.h>
void Swap(int a, int b);

void main()
{
	int a = 1, b = 2;

	printf("초기값 a = %d, y = %d\n", a, b);
	Swap(a, b);
	printf("함수 밖에서 변경 후 a = %d, b = %d\n", a, b);
}

void Swap(int arg1, int arg2)
{
	int temp;
	temp = arg1;
	arg1 = arg2;
	arg2 = temp;
	printf("함수 안에서 변경 후 a = %d, b = %d\n", arg1, arg2);
}

/*
Q.사용자로부터 두 수를 입력 받아 두 수의 합을 구하는 프로그램을 작성한다. 두 수의 합을
구하는 프로그램은 별도의 함수로 구현하되, 참조 호출 방식을 사용하여 합에 대한 결과를 받도록
한다.

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
Q.정수형 변수 한 개 선언하고, void*형 변수를 한 개 선언한다. void*형 변수는 정수형 변수를
참조하도록 한다. void*형 변수를 사용하여 정수형 변수의 실제 값을 참조하여 출력해보도록 하자.

#include<stdio.h>

void main()
{
	void* a;
	int b = 100;

	a = &b;
	printf("%d", *(int*)a);	// 형변환을 먼저 하고 실제값을 갖고 온다.
}

/*
Q.정수형 배열을 한 개 선언하고 초기화한다. 그리고, void*형 변수를 한 개 선언한다. void*형
변수는 정수형 배열을 참조하도록 한다. void*형 변수를 사용하여 정수형 배열의 두 번째 요소값을
참조하여 출력해보도록 하자.

#include<stdio.h>

void main()
{
	int arr[] = { 1,2,3 };
	void* pA;
	pA = arr;

	printf("%d", *((int*)pA + 1));
}

/*
Q.문자형 배열을 선언하여 "moon"이라는 문자열로 초기화한다. 그리고, 문자형 포인터 변수 p를
선언한다. 이 문자열 중에 'n'을 검색한 후 검색에 성공했다면, 'n'을 'k'로 변경하여 변경 결과
문자열을 출력하도록 한다. (문자 검색 함수는 strchr()함수를 사용한다.)

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
		printf("변경 결과 : %s\n", str);
	}
}

/*
Q.표준함수를 사용하지 않고 수를 문자열로 변경하는 함수(springf_s)

#include<stdio.h>

int main()
{
	char str[100];
	int i = 10;
	double d = 3.14;

	sprintf_s(str, "%d", i);
	printf("정수를 문자열로 변환 : %s\n", str);

	sprintf_s(str, "%.2f", d);
	printf("실수를 문자열로 변환 : %s\n", str);

	return 0;
}

/*
Q.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char ch;
	fputs("맞으면 'y' 또는 'Y'를, 틀리면 'n' 또는 'N'을 눌러주세요 : ", stdout);
	scanf_s("%c", &ch);

	switch (ch)
	{
	case 'Y':
	case 'y':
		puts("승인되었습니다.");
		break;
	case 'N':
	case 'n':
		puts("취소하였습니다.");
		break;
	}
	return 0;
}

/*
Q.대소문자는 소문자로 소문자는 대문자로 변환하는 함수

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(void)
{
	char ch;
	fputs("맞으면 'y' 또는 'Y'를, 틀리면 'n' 또는 'N'을 눌러주세요 : ", stdout);
	scanf_s("%c", &ch);

	switch (tolower(ch))
	{
	case 'y':
		puts("승인되었습니다.");
		break;
	case 'n':
		puts("취소하였습니다.");
		break;
	}
	return 0;
}

/*
Q.문자열을 사용자로부터 입력 받는다. 그리고, 입력받은 문자열을 첫 번째 줄에서는 한 글자 출력,
두 번째 줄에서는 두 글자 출력, ... 문자열이 끝나는 지점(NULL을 만날 때 까지)까지 출력하는
프로그램을 작성하라. (참고, 입력한 문자열의 길이를 구할 때는 strlen 함수를 사용하고, 문자열
복사 및 연결은 각각 strcpy, strncat 함수를 사용한다.)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	char str1[20] = "";		// 입력 문자열 버퍼
	char str2[20] = "";		// 출력 문자열 버퍼

	puts("문자열을 입력하시오.");
	fgets(str1, sizeof(str1), stdin);
	int len = strlen(str1);

	for (int i = 1; i < len; i++)
	{
		strcpy_s(str2, "");
		strncat_s(str2, str1, i);	// str2에 str1의 i개를 붙이겠다.
		puts(str2);
	}
}

/*
Q.사용자로부터 적당한 길이의 영문 문자열을 두 개 입력 받는다. 입력 받은 두 개의 문자열을
비교하는 프로그램을 작성하라. (strcmp)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	char str1[100];
	char str2[100];

	puts("첫 번째 문자열을 입력하시오.");
	fgets(str1, sizeof(str1), stdin);
	puts("두 번째 문자열을 입력하시오.");
	fgets(str2, sizeof(str2), stdin);

	if (strcmp(str1, str2) == 0)
	{
		printf("두 문자열이 같습니다.");
	}
	else if (strcmp(str1, str2) == 1)
	{
		printf("첫 번째 문자열이 큽니다.");
	}
	else if (strcmp(str1, str2) == -1)
	{
		printf("두 번째 문자열이 큽니다.");
	}
	else
	{
		printf("유효한 리턴값이 아닙니다.");
	}
}

/*
Q.정수 형태의 문자열을 사용자로부터 입력 받는다. 입력 시 각 숫자의 숫자 사이에 ','를 넣어주도록
한다. 입력이 끝나면 입력 받은 각 단위의 숫자를 합하여 그 결과값을 출력하는 프로그램을 작성하라.
(strtok)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	char str[100];

	puts("문자열을 입력하시오.");
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
	printf("문자열의 각 요소의 합은 %d입니다.\n", total);
	return 0;
}




*/