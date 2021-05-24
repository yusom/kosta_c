/*
Q. 파일 임의 접근 예제
*/

#include <stdio.h>

int main(void)
{
    FILE* file;
    char buf[256];

    file = fopen_s("D:\\Temp.txt", "rt");

    if (file != NULL)
    {
        fseek(file, 21, SEEK_SET);
        fgets(buf, 256, file);
        printf("%s\n\n", buf);
        fseek(file, -11, SEEK_CUR);
        fgets(buf, 256, file);
        printf("%s\n\n", buf);
        fclose(file);
    }
    return 0;
}





/*
Q. 구조체 멤버 접근


#include <stdio.h>
#include <string.h>

struct student
{
   char name[10];
   int age;
   int height;
}st1;

int main(void)
{
   strcpy_s(st1.name, "최유솜");
   st1.age = 26;
   st1.height = 165;
   printf("이름 : %s, 나이 : %d, 키 : %d\n", st1.name, st1.age, st1.height);
   return 0;
}


/*
Q. 포인터 변수의 구조체 멤버 접근


#include <stdio.h>
#include <string.h>

struct student
{
   char name[10];
   int age;
   int height;
}st1, st2, * pSt;

int main(void)
{
   pSt = &st1;

   strcpy_s(pSt->name, "최유솜");
   pSt->age = 26;
   pSt->height = 165;
   printf("이름 : %s, 나이 : %d, 키 : %d\n", pSt->name, pSt->age, pSt->height);

   pSt = &st2;

   strcpy_s(pSt->name, "쿠키");
   pSt->age = 12;
   pSt->height = 40;

   printf("이름 : %s, 나이 : %d, 키 : %d\n", pSt->name, pSt->age, pSt->height);
   return 0;
}
// 직접 접근법보다 포인터 변수를 사용한 간접 접근법이 코드 수정이 쉽다.


/*
Q. 우리가 우체국에서 물건을 어디론가 보낼 때, 물건의 종류, 무게, 높이 등의 정보를 입력한다.
이러한 정보를 갖고 있는 물건에 대한 구조체를 만들어보자. 구조체 이름은 object라고 하고, 구조체
멤버는 name, height, weight를 갖는다. 구조체 변수를 하나 선언하고, 구조체 변수를 통해 각각의
멤버에 값을 대입한다. 대입하는 값은 사용자로부터 입력받으며, 입력이 끝나면 대입한 멤버의 값을
화면에 출력하도록 프로그램을 작성하라.


#include <stdio.h>
#include <string.h>

struct object
{
   char name[10];
   int height;
   int weight;
}post, * pPost;

int main(void)
{
   pPost = &post;
   puts("물건의 종류 : ");
   fgets(pPost->name, sizeof(pPost->name), stdin);
   puts("물건의 높이(cm) : ");
   scanf_s("%d", &pPost->height);
   puts("물건의 무게(kg) : ");
   scanf_s("%d", &pPost->weight);

   printf("보낼 물건의 정보 : %s, %dcm, %dkg", pPost->name, pPost->height, pPost->weight);

   return 0;
}


/*
Q. 구조체 멤버 초기화


#include <stdio.h>
#include <string.h>

struct object
{
   char name[10];
   int age;
   int height;
}st = { "최유솜", 26, 165 };

int main(void)
{
   printf("이름 : %s, 나이 : %d세, 키 : %dcm\n", st.name, st.age, st.height);
   return 0;
}


/*
Q. 구조체 배열

#include <stdio.h>

struct student
{
   char name[10];
   int age;
   double height;
}st[3] = { {"최유솜", 26, 165},
   {"쿠키", 12, 40},
   {"도비", 10, 40} };

int main(void)
{
   int i;
   printf("st[i] 구조체 멤버의 초기값 출력\n");
   for (i = 0; i < 3; i++)
   {
      printf("이름 : %s, 나이 : %d, 키 : %.2f\n", st[i].name, st[i].age, st[i].height);
   }
   st[2].height = 35;
   printf("\nst[2] 구조체 멤버의 데이터 변경\n");
   printf("이름 : %s, 나이 : %d, 키 : %.2f\n", st[2].name, st[2].age, st[2].height);
   return 0;
}


/*
Q. 구조체 포인터


#include <stdio.h>

struct student
{
   char name[10];
   int age;
   double height;
}st[3] = { {"최유솜", 26, 165},
   {"쿠키", 12, 40},
   {"도비", 10, 40} };

int main(void)
{
   int i;
   struct student* pSt;
   pSt = st;
   printf("st[i] 구조체 멤버의 초기값 출력\n");
   for (i = 0; i < 3; i++)
   {
      printf("이름 : %s, 나이 : %d, 키 : %.2f\n", st[i].name, st[i].age, st[i].height);
   }

   printf("\nst[2] 구조체 포인터를 이용한 출력\n");
   for (i = 0; i < 3; i++)
   {
      printf("이름 : %s, 나이 : %d, 키 : %.2f\n", (pSt + i)->name, (pSt + i)->age, (pSt + i)->height);
   }
   return 0;
}


/*
Q. 공용체


#include <stdio.h>

union unTemp
{
   char a;
   int b;
   double c;
}un;

int main(void)
{
   printf("문자형 a의 주소와 크기 :  %p, %d\n", &un.a, sizeof(un.a));
   printf("정수형 b의 주소와 크기 :  %p, %d\n", &un.b, sizeof(un.b));
   printf("문자형 c의 주소와 크기 :  %p, %d\n", &un.c, sizeof(un.c));

   un.a = 'A';
   printf("문자형 a의 값 : %c\n", un.a);
   un.b = 100;
   printf("정수형 b의 값 : %d\n", un.b);
   un.c = 3.14;
   printf("실수형 c의 값 : %.2f\n", un.c);
   printf("문자형 a의 값 : %c\n", un.a);
   return 0;
}


/*
Q. 구조체 포인터


#include <stdio.h>

enum Week
{
   sun = 1,
   mon,
   tue,
   wed,
   thu,
   fri,
   sat
};

int main(void)
{
   int day;
   printf("요일을 입력하세요(1.일 2.월 3.화 4.수 5.목 6.금 7.토) : ");
   scanf_s("%d", &day);

   switch (day)
   {
   case sun:
      printf("일요일엔 짜파구리\n");
      break;
   case mon:
      printf("월요일엔 스트레스\n");
      break;
   case tue:
      printf("화요일엔 달걀 후라이\n");
      break;
   case wed:
      printf("수요일에 빨간 장미를\n");
      break;
   case thu:
      printf("목요일엔 뭐하지\n");
      break;
   case fri:
      printf("금요일에 만나요\n");
      break;
   case sat:
      printf("토요일엔 나들이\n");
      break;
   dafault:
      printf("잘못입력하셨습니다.\n");
   }
   return 0;
}


<동적 메모리 할당 함수의 원형>

   void*malloc(size_t size);

- 전달인자 size는 byte단위로 입력.
- 메모리 할당이 되면 메모리의 주소값을 return.
- 메모리 부족 시 NULL 포인터 리턴.

<동적 메모리 해제 함수의 원형>

   void free(void*memblock);

- 메모리 사용 후 반드시 해제해줘야 함.
- 전달인자로 메모리를 가르키는 포인터를 대입.


/*
Q. 동적 메모리 할당


#include <stdio.h>
#include <stdlib.h>


int main(void)
{
   int num, i, total = 0;
   int* student;

   fputs("학생수를 입력하세요. : ", stdout);
   scanf_s("%d", &num);
   student = (int*)malloc(sizeof(int) * num);
   if (student == NULL)
   {
      printf("메모리가 부족하여 메모리를 할당할 수 없습니다.\n");
      return 0;
   }
   for (i = 0; i < num; i++)
   {
      printf("%d번째 학생의 성적 입력 : ", i + 1);
      scanf_s("%d", &student[i]);
   }
   for (i = 0; i < num; i++)
   {
      total += student[i];
   }
   printf("총점 : %d, 평균 : %d \n", total, total / num);
   free(student);
   return 0;
}


/*
Q. memset함수 : 메모리 블록에서 모든 byte를 특정 값으로 설정하는 초기화 함수


#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main(void)
{
   int* arr = (int*)malloc(sizeof(int) * 10);
   int i;

   printf("==== 메모리 초기화 전 ====\n");
   for (i = 0; i < 10; i++)
   {
      printf("%d\n", arr[i]);
   }
   memset(arr, 0, sizeof(int) * 10);
   printf("==== 메모리 초기화 후 ====\n");
   for (i = 0; i < 10; i++)
   {
      printf("%d\n", arr[i]);
   }
   free(arr);
   return 0;
}


/*
Q. memcpy함수 : 메모리를 복사하는 함수


#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main(void)
{
   int* arr1 = (int*)malloc(sizeof(int) * 5);
   int arr2[5];
   int i;

   for (i = 0; i < 5; i++)
   {
      arr1[i] = i + 1;
   }
   memcpy(arr2, arr1, sizeof(int) * 5);
   printf("==== 메모리 복사 출력 ====\n");
   for (i = 0; i < 5; i++)
   {
      printf("%d\n", arr2[i]);
   }
   free(arr1);
   return 0;
}


/*
Q. FILE함수 : 문자 입출력 함수


#include <stdio.h>

int main(void)
{
    FILE* file;
    char ch;
    file = fopen("c:/\\Temp.txt", "wt");

    if (file == NULL)
    {
        printf("파일이 존재합니다.\n");
        for (ch = 'A'; ch <= 2; ch++)
        {
            fputc(ch, file);
        }
        fclose(file);
    }
    return 0;
}


/*
Q. 파일에 문자 입출력 함수 예제


#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE* file = NULL;
    char ch;

    fopen_s(&file, "c:\\Temp.txt", "wt");

    if (file == NULL)
    {
        printf("파일이 존재하지 않습니다.\n");
    }
    else
    {
        printf("파일이 존재합니다,\n");
        for (ch = 'A'; ch <= 'Z'; ch++)
        {
            fputc(ch, file);
        }
        fclose(file);
    }
    return 0;
}


/*
Q. 파일에 문자 입출력 함수 예제


#include <stdio.h>

int main(void)
{
    FILE* file;
    const char* str = "죽는 날까지 하늘을 우러러 한 점 부끄럼 없기를,\
        잎새에 이는 바람에도 나는 괴로워했다.";

    fopen_s(&file, "c:\\Temp.txt", " wt ");

    if (file == NULL)
    {
        printf("파일이 존재하지 않습니다.\n");
    }
    else
    {
        fputs(str, file);
        printf("문자열이 파일에 쓰여졌습니다. \n");
        fclose(file);
    }
    return 0;
}


/*
Q. 파일 입출력 표준 함수 예제


#include <stdio.h>

int main(void)
{
    FILE* file;
    const char* str = "죽는 날까지 하늘을 우러러 한 점 부끄럼 없기를,\
        잎새에 이는 바람에도 나는 괴로워했다.";

    fopen_s(&file, "c:\\Temp.txt", " wt ");

    if (file == NULL)
    {
        printf("파일이 존재하지 않습니다.\n");
    }
    else
    {
        fputs(str, file);
        printf("문자열이 파일에 쓰여졌습니다. \n");
        fclose(file);
    }
    return 0;
}


/*
Q.정수 형태의 문자열을 사용자로부터 입력 받는다. 입력 시 각 숫자의 숫자 사이에 ','를 넣어주도록
한다. 입력이 끝나면 입력 받은 각 단위의 숫자를 합하여 그 결과값을 출력하는 프로그램을 작성하라.
(strtok)


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

    if (file == NULL)
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
Q. 바이너리 파일 복사 예제


#include <stdio.h>
#include<string.h>
#define BUF_SIZE 30
int main(void)
{
    char buf[BUF_SIZE];
    int readLen = 0;
    FILE* src, * des;
    fopen_s(&src, "C:\e.png", "rb");
    fopen_s(&des, "C:\e_copy.png", "wb");

    if (src == NULL || des == NULL)
    {
        puts("파일을 열지 못했습니다.");
        return -1;
    }

    while (1)
    {
        readLen = fread(buf, 1, BUF_SIZE, src);
        if (readLen < BUF_SIZE)
        {
            if (feof(src) != 0)
            {
                fwrite(buf, 1, readLen, des);
                puts("파일 복사 완료");
                break;
            }
            else
            {
                puts("파일 복사 실패");
            }
        }
        fwrite(buf, 1, BUF_SIZE, des);
    }
    if (fclose(src) != 0 || fclose(des) != 0)
    {
        puts("파일을 닫지 못했습니다.");
        return -1;
    }
}








*/