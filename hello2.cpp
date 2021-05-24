/*
Q. ���� ���� ���� ����
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
Q. ����ü ��� ����


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
   strcpy_s(st1.name, "������");
   st1.age = 26;
   st1.height = 165;
   printf("�̸� : %s, ���� : %d, Ű : %d\n", st1.name, st1.age, st1.height);
   return 0;
}


/*
Q. ������ ������ ����ü ��� ����


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

   strcpy_s(pSt->name, "������");
   pSt->age = 26;
   pSt->height = 165;
   printf("�̸� : %s, ���� : %d, Ű : %d\n", pSt->name, pSt->age, pSt->height);

   pSt = &st2;

   strcpy_s(pSt->name, "��Ű");
   pSt->age = 12;
   pSt->height = 40;

   printf("�̸� : %s, ���� : %d, Ű : %d\n", pSt->name, pSt->age, pSt->height);
   return 0;
}
// ���� ���ٹ����� ������ ������ ����� ���� ���ٹ��� �ڵ� ������ ����.


/*
Q. �츮�� ��ü������ ������ ���а� ���� ��, ������ ����, ����, ���� ���� ������ �Է��Ѵ�.
�̷��� ������ ���� �ִ� ���ǿ� ���� ����ü�� ������. ����ü �̸��� object��� �ϰ�, ����ü
����� name, height, weight�� ���´�. ����ü ������ �ϳ� �����ϰ�, ����ü ������ ���� ������
����� ���� �����Ѵ�. �����ϴ� ���� ����ڷκ��� �Է¹�����, �Է��� ������ ������ ����� ����
ȭ�鿡 ����ϵ��� ���α׷��� �ۼ��϶�.


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
   puts("������ ���� : ");
   fgets(pPost->name, sizeof(pPost->name), stdin);
   puts("������ ����(cm) : ");
   scanf_s("%d", &pPost->height);
   puts("������ ����(kg) : ");
   scanf_s("%d", &pPost->weight);

   printf("���� ������ ���� : %s, %dcm, %dkg", pPost->name, pPost->height, pPost->weight);

   return 0;
}


/*
Q. ����ü ��� �ʱ�ȭ


#include <stdio.h>
#include <string.h>

struct object
{
   char name[10];
   int age;
   int height;
}st = { "������", 26, 165 };

int main(void)
{
   printf("�̸� : %s, ���� : %d��, Ű : %dcm\n", st.name, st.age, st.height);
   return 0;
}


/*
Q. ����ü �迭

#include <stdio.h>

struct student
{
   char name[10];
   int age;
   double height;
}st[3] = { {"������", 26, 165},
   {"��Ű", 12, 40},
   {"����", 10, 40} };

int main(void)
{
   int i;
   printf("st[i] ����ü ����� �ʱⰪ ���\n");
   for (i = 0; i < 3; i++)
   {
      printf("�̸� : %s, ���� : %d, Ű : %.2f\n", st[i].name, st[i].age, st[i].height);
   }
   st[2].height = 35;
   printf("\nst[2] ����ü ����� ������ ����\n");
   printf("�̸� : %s, ���� : %d, Ű : %.2f\n", st[2].name, st[2].age, st[2].height);
   return 0;
}


/*
Q. ����ü ������


#include <stdio.h>

struct student
{
   char name[10];
   int age;
   double height;
}st[3] = { {"������", 26, 165},
   {"��Ű", 12, 40},
   {"����", 10, 40} };

int main(void)
{
   int i;
   struct student* pSt;
   pSt = st;
   printf("st[i] ����ü ����� �ʱⰪ ���\n");
   for (i = 0; i < 3; i++)
   {
      printf("�̸� : %s, ���� : %d, Ű : %.2f\n", st[i].name, st[i].age, st[i].height);
   }

   printf("\nst[2] ����ü �����͸� �̿��� ���\n");
   for (i = 0; i < 3; i++)
   {
      printf("�̸� : %s, ���� : %d, Ű : %.2f\n", (pSt + i)->name, (pSt + i)->age, (pSt + i)->height);
   }
   return 0;
}


/*
Q. ����ü


#include <stdio.h>

union unTemp
{
   char a;
   int b;
   double c;
}un;

int main(void)
{
   printf("������ a�� �ּҿ� ũ�� :  %p, %d\n", &un.a, sizeof(un.a));
   printf("������ b�� �ּҿ� ũ�� :  %p, %d\n", &un.b, sizeof(un.b));
   printf("������ c�� �ּҿ� ũ�� :  %p, %d\n", &un.c, sizeof(un.c));

   un.a = 'A';
   printf("������ a�� �� : %c\n", un.a);
   un.b = 100;
   printf("������ b�� �� : %d\n", un.b);
   un.c = 3.14;
   printf("�Ǽ��� c�� �� : %.2f\n", un.c);
   printf("������ a�� �� : %c\n", un.a);
   return 0;
}


/*
Q. ����ü ������


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
   printf("������ �Է��ϼ���(1.�� 2.�� 3.ȭ 4.�� 5.�� 6.�� 7.��) : ");
   scanf_s("%d", &day);

   switch (day)
   {
   case sun:
      printf("�Ͽ��Ͽ� ¥�ı���\n");
      break;
   case mon:
      printf("�����Ͽ� ��Ʈ����\n");
      break;
   case tue:
      printf("ȭ���Ͽ� �ް� �Ķ���\n");
      break;
   case wed:
      printf("�����Ͽ� ���� ��̸�\n");
      break;
   case thu:
      printf("����Ͽ� ������\n");
      break;
   case fri:
      printf("�ݿ��Ͽ� ������\n");
      break;
   case sat:
      printf("����Ͽ� ������\n");
      break;
   dafault:
      printf("�߸��Է��ϼ̽��ϴ�.\n");
   }
   return 0;
}


<���� �޸� �Ҵ� �Լ��� ����>

   void*malloc(size_t size);

- �������� size�� byte������ �Է�.
- �޸� �Ҵ��� �Ǹ� �޸��� �ּҰ��� return.
- �޸� ���� �� NULL ������ ����.

<���� �޸� ���� �Լ��� ����>

   void free(void*memblock);

- �޸� ��� �� �ݵ�� ��������� ��.
- �������ڷ� �޸𸮸� ����Ű�� �����͸� ����.


/*
Q. ���� �޸� �Ҵ�


#include <stdio.h>
#include <stdlib.h>


int main(void)
{
   int num, i, total = 0;
   int* student;

   fputs("�л����� �Է��ϼ���. : ", stdout);
   scanf_s("%d", &num);
   student = (int*)malloc(sizeof(int) * num);
   if (student == NULL)
   {
      printf("�޸𸮰� �����Ͽ� �޸𸮸� �Ҵ��� �� �����ϴ�.\n");
      return 0;
   }
   for (i = 0; i < num; i++)
   {
      printf("%d��° �л��� ���� �Է� : ", i + 1);
      scanf_s("%d", &student[i]);
   }
   for (i = 0; i < num; i++)
   {
      total += student[i];
   }
   printf("���� : %d, ��� : %d \n", total, total / num);
   free(student);
   return 0;
}


/*
Q. memset�Լ� : �޸� ��Ͽ��� ��� byte�� Ư�� ������ �����ϴ� �ʱ�ȭ �Լ�


#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main(void)
{
   int* arr = (int*)malloc(sizeof(int) * 10);
   int i;

   printf("==== �޸� �ʱ�ȭ �� ====\n");
   for (i = 0; i < 10; i++)
   {
      printf("%d\n", arr[i]);
   }
   memset(arr, 0, sizeof(int) * 10);
   printf("==== �޸� �ʱ�ȭ �� ====\n");
   for (i = 0; i < 10; i++)
   {
      printf("%d\n", arr[i]);
   }
   free(arr);
   return 0;
}


/*
Q. memcpy�Լ� : �޸𸮸� �����ϴ� �Լ�


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
   printf("==== �޸� ���� ��� ====\n");
   for (i = 0; i < 5; i++)
   {
      printf("%d\n", arr2[i]);
   }
   free(arr1);
   return 0;
}


/*
Q. FILE�Լ� : ���� ����� �Լ�


#include <stdio.h>

int main(void)
{
    FILE* file;
    char ch;
    file = fopen("c:/\\Temp.txt", "wt");

    if (file == NULL)
    {
        printf("������ �����մϴ�.\n");
        for (ch = 'A'; ch <= 2; ch++)
        {
            fputc(ch, file);
        }
        fclose(file);
    }
    return 0;
}


/*
Q. ���Ͽ� ���� ����� �Լ� ����


#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE* file = NULL;
    char ch;

    fopen_s(&file, "c:\\Temp.txt", "wt");

    if (file == NULL)
    {
        printf("������ �������� �ʽ��ϴ�.\n");
    }
    else
    {
        printf("������ �����մϴ�,\n");
        for (ch = 'A'; ch <= 'Z'; ch++)
        {
            fputc(ch, file);
        }
        fclose(file);
    }
    return 0;
}


/*
Q. ���Ͽ� ���� ����� �Լ� ����


#include <stdio.h>

int main(void)
{
    FILE* file;
    const char* str = "�״� ������ �ϴ��� �췯�� �� �� �β��� ���⸦,\
        �ٻ��� �̴� �ٶ����� ���� ���ο��ߴ�.";

    fopen_s(&file, "c:\\Temp.txt", " wt ");

    if (file == NULL)
    {
        printf("������ �������� �ʽ��ϴ�.\n");
    }
    else
    {
        fputs(str, file);
        printf("���ڿ��� ���Ͽ� ���������ϴ�. \n");
        fclose(file);
    }
    return 0;
}


/*
Q. ���� ����� ǥ�� �Լ� ����


#include <stdio.h>

int main(void)
{
    FILE* file;
    const char* str = "�״� ������ �ϴ��� �췯�� �� �� �β��� ���⸦,\
        �ٻ��� �̴� �ٶ����� ���� ���ο��ߴ�.";

    fopen_s(&file, "c:\\Temp.txt", " wt ");

    if (file == NULL)
    {
        printf("������ �������� �ʽ��ϴ�.\n");
    }
    else
    {
        fputs(str, file);
        printf("���ڿ��� ���Ͽ� ���������ϴ�. \n");
        fclose(file);
    }
    return 0;
}


/*
Q.���� ������ ���ڿ��� ����ڷκ��� �Է� �޴´�. �Է� �� �� ������ ���� ���̿� ','�� �־��ֵ���
�Ѵ�. �Է��� ������ �Է� ���� �� ������ ���ڸ� ���Ͽ� �� ������� ����ϴ� ���α׷��� �ۼ��϶�.
(strtok)


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

    if (file == NULL)
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
Q. ���̳ʸ� ���� ���� ����


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
        puts("������ ���� ���߽��ϴ�.");
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
                puts("���� ���� �Ϸ�");
                break;
            }
            else
            {
                puts("���� ���� ����");
            }
        }
        fwrite(buf, 1, BUF_SIZE, des);
    }
    if (fclose(src) != 0 || fclose(des) != 0)
    {
        puts("������ ���� ���߽��ϴ�.");
        return -1;
    }
}








*/