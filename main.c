#include "main.h"

int main(void) {
    while (1) {
        init();
        drawTitle();
        if (!menuDraw()) {
            gloop();
        }
        else
            break;
    }

    return 0;
}

void drawTitle() {
    int x = 1;
    int y = 2;
    system("cls");

    setColor(darkgray, black);
    printf("developed by ������ �ְ��� Ȳä��");

     x = 20;
     y = 4;
    setColor(lightblue, black);
    gotoxy(x, y);
    printf("IIIII  fff IIIII WW      WW                 AAA   WW      WW hh              lll        ");
    gotoxy(x, ++y);
    printf(" III  ff    III  WW      WW   aa aa  sss   AAAAA  WW      WW hh        aa aa lll   eee  ");
    gotoxy(x, ++y);
    printf(" III  ffff  III  WW   W  WW  aa aaa s     AA   AA WW   W  WW hhhhhh   aa aaa lll ee   e ");
    gotoxy(x, ++y);
    printf(" III  ff    III   WW WWW WW aa  aaa  sss  AAAAAAA  WW WWW WW hh   hh aa  aaa lll eeeee  ");
    gotoxy(x, ++y);
    printf("IIIII ff   IIIII   WW   WW   aaa aa     s AA   AA   WW   WW  hh   hh  aaa aa lll  eeeee ");
    gotoxy(x, ++y);  
    printf("                                     sss                                                ");


    setColor(white, black);
    x = 32, y = 12;
    gotoxy(x, y);
    printf(" ---(.______)--||-------||----||------||-------||-----");
    gotoxy(x, ++y);
    printf("|                                                     |");
    gotoxy(x, ++y);
    printf("|     �̹� ������ ���� �� ���ٸ� �Դϴ�.            |");
    gotoxy(x, ++y);
    printf("|                                                     |");
    gotoxy(x, ++y);
    printf("|      �� �׸��� �׷��� �ʿ� ȭ��ǥ�� ���߼���.     |");
    gotoxy(x, ++y);
    printf("| �� 3���� �� �׸��� ȭ��ǥ�� ���߸� ���� �˴ϴ�. |");
    gotoxy(x, ++y);
    printf("|                                                     |");
    gotoxy(x, ++y);
    printf("|          ����Ű(ENTER)�� ���� �����ϼ���            |");
    gotoxy(x, ++y);
    printf("|                                                     |");
    gotoxy(x, ++y);
    printf(" ---||-------||-------||----||------||----(______.)---");

}

int menuDraw() {
    int input;
    int x = 55, y = 26;
    int key = y;
    int num = 1;
    gotoxy(x - 2, y);
    printf("> �����ϱ�\n");
    gotoxy(x, y + 1);
    printf("�����ϱ�");
    while (1) {
        input = _getch();
        switch (input) {
        case UP: {
            if (y > key) {
                gotoxy(x - 2, y);
                printf(" ");
                gotoxy(x - 2, --y);
                printf(">");
            }
            break;
        }
        case DOWN: {
            if (y < key + num) {
                gotoxy(x - 2, y);
                printf(" ");
                gotoxy(x - 2, ++y);
                printf(">");
            }
            break;
        }
        case ENTER: {
            return y - key;
        }
        }
    }
    return 0;
}
int keyControl() {
    int input;
    while (1) {
        input = _getch();
        switch (input) {
        case LEFT: {
            return 1;
            break;
        }
        case RIGHT: {
            return 2;
            break;
        }
        case ESC: {
            break;
        }
        }
    }
    return 0;
}
void gloop() {
}