#include "stdio.h"
#include "Windows.h"
#include "stdlib.h"

int student[16] = {"1번", "2번", "3번", "4번", "5번", "6번", "7번", "8번", "9번", "10번", "11번", "12번", "13번", "14번", "15번", "16번"}
double sec = 3;
void timeBomb(double s)
{
    system("cls");
    if (s < 0) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        printf("@ @@@@@@@@..@@ @@  @\n @@@..@@@@..@@@@@@  \n@@@@@@....  @@..@ @@\n......        ..@@@@\n@@..    퍼엉  ....@@\n@@@@..        ..@@@@\n@@......      ..@@@\n@@@@@@  ..  @@..  @@\n  @@@@..@@..@@@@@@@@\n @@@  @@@@@@@@  @  @");      //터지는 이미지 출력
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        return;
    }
    printf("\n\n\n  ┌───────────────────┐\n  │\t  ");
    if (s <= 0.5) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
    else if (s <= 1) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    else if (s <= 2) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
    else SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    printf("%.1lf초", s);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    printf("\t      │\n  └───────────────────┘");
    Sleep(100);
    timeBomb(s - 0.1);
}

void number(100) {

}

int main(void) {
    timeBomb(sec);
    number(100);
    printf("%d", student);
    return 0;
}