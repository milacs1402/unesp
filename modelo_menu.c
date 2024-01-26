#include <stdio.h>
#include <windows.h>
#include <conio.h>

void gotoxy(int x, int y)
{
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD){x - 1, y - 1});
} // isso é igual sempre, todop codigo com menu tem essa funçõo no começo

void escondeCursor(int a)
{
    if (a == 0)
    {
        CONSOLE_CURSOR_INFO cursor = {1, FALSE};
        SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
    }
    else
    {
        CONSOLE_CURSOR_INFO cursor = {1, TRUE};
        SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
    }
} // função para esconder o cursor, tambem é padrão

void menuPadrao(int posx, int posy, int id)
{
    system("cls");

    gotoxy(30, 1);
    printf("Menu Padrao<3");

    gotoxy(20, 3);
    printf("Opcao 1\n");

    gotoxy(20, 5);
    printf("Opcao 2\n");

    gotoxy(20, 7);
    printf("Opcao 3\n");

    gotoxy(20, 9);
    printf("Opcao 4\n");

    gotoxy(posx, posy);
    printf("->");
}

int main()
{
    int id = 3, posx = 16, posy = 3;
    char sair;

    menuPadrao(posx, posy, id);

    do
    {

        escondeCursor(0);

        switch (getch())
        {
        case 72:
            if (posy > 3)
            {
                gotoxy(posx, posy);
                printf("  ");
                posy -= 2;
            }
            id = posy;

            gotoxy(posx, posy);
            printf("->");

            break;

        case 80:
            if (posy < 9)
            {
                gotoxy(posx, posy);
                printf("  ");
                posy += 2;
            }
            id = posy;

            gotoxy(posx, posy);
            printf("->");

            break;

        case '\r':
            system("cls");
            if (id == 3)
                printf("op1");

            else if (id == 5)
                printf("op2");

            else if (id == 7)
                printf("op3");

            else if (id == 9)
                printf("op4");
            break;

        case 27:
            sair = 'p';
            break;
        }

    } while (sair != 'p');
    return 0;
}
