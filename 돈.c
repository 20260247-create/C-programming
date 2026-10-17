#include <stdio.h>

int main(void)
{
    int money;

    printf("금액을 입력하세요: ");
    if (scanf("%d", &money) != 1 || money < 0) {
        printf("잘못된 금액입니다.\n");
        return 1;
    }

    printf("1000원: %d개\n", money / 1000);
    money %= 1000;

    printf("500원: %d개\n", money / 500);
    money %= 500;

    printf("100원: %d개\n", money / 100);
    money %= 100;

    printf("50원: %d개\n", money / 50);
    money %= 50;

    printf("10원: %d개\n", money / 10);
    money %= 10;

    printf("남은 금액(1원 단위): %d원\n", money);

    return 0;
}