#include "stdio.h"
#include "Windows.h"
#include "stdlib.h"
#include "Time.h"
#define repeat 100

int student[16] = { "1��", "2��", "3��", "4��", "5��", "6��", "7��", "8��", "9��", "10��", "11��", "12��", "13��", "14��", "15��", "16��" };
double sec = 3;

void timeBomb(double s, double random)
{
    system("cls");
    if (s < 0) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        printf("@ @@@@@@@@..@@ @@  @\n @@@..@@@@..@@@@@@  \n@@@@@@....  @@..@ @@\n......        ..@@@@\n@@..    %s  ....@@\n@@@@..        ..@@@@\n@@......      ..@@@\n@@@@@@  ..  @@..  @@\n  @@@@..@@..@@@@@@@@\n @@@  @@@@@@@@  @  @\n", student[1]);  
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        return;
    }
    printf("\n\n\n  ������������������������������������������\n  ��\t  ");
    if (s <= 0.5) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
    else if (s <= 1) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    else if (s <= 2) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
    else SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    printf("%.1lf��", s);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    printf("\t      ��\n  ������������������������������������������");
    Sleep(100);
    timeBomb(s - 0.1, random);
}

void repeat(1) {
    int i, max;
    int list[10] = { 0, };

    srand((unsigned int)time(NULL));

    for (i = 0; i < COUNT; i++) {
        ++list[rand() % 10];
    }
    max = 0;
    for (i = 1; i < 10; i++) {
        if (list[i] > max)
            max = i;
    }
    printf("���� ���� ���¼� = %d\n", max);
}

int main(void) {
    int random = rand() % 16;
    timeBomb(sec, random);
    repeat(1)
    printf("%s", student[1]);
    return 0;
}