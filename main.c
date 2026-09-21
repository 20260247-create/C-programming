#include <stdio.h>

/*
void exerc1(void)
{
    double inch, cm;

    printf("인치를 입력하세요: ");
    scanf_s("%lf", &inch);

    cm = inch * 2.54;

    printf("%lf inch는 %lf cm입니다.\n\n", inch, cm);
}

void exerc2(void)
{
    double F, C;

    printf("섭씨 온도를 입력하세요: ");
    scanf_s("%lf", &C);

    F = (C * 1.8) + 32;

    printf("섭씨 %lf도는 화씨 %lf도입니다.\n\n", C, F);
}

double circle(double r)
{
    return r * r * 3.14;
}

int main(void)
{
    exerc1();
    exerc2();

    double r;

    printf("반지름을 입력하세요: ");
    scanf_s("%lf", &r);

    printf("반지름 %lf인 원의 넓이는 %lf입니다.\n\n",
        r, circle(r));

    int total_seconds = 7384;
    int hours = total_seconds / 3600;
    int minutes = (total_seconds % 3600) / 60;
    int seconds = total_seconds % 60;

    printf("%d초는 %d시간 %d분 %d초입니다.\n\n",
        total_seconds, hours, minutes, seconds);

    int score = 75;
    int attendance = 85;

    printf("입력된 점수: %d점, 출석률: %d%%\n",
        score, attendance);

    int passed = (score >= 60 && attendance >= 80);

    if (passed)
        printf("합격입니다.\n");
    else
        printf("불합격입니다.\n");

    return 0;
}
*/

/*int main(void)
{
    int year;

    printf("연도를 입력하세요: ");
    scanf_s("%d", &year);

    if (year % 400 == 0)
    {
        printf("1\n");
    }
    else if (year % 100 == 0)
    {
        printf("0\n");
    }
    else if (year % 4 == 0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}
*/

/*int main(void)
{
    double midterm, final, assignment;
    double weighted_score;

    scanf_s("%lf %lf %lf", &midterm, &final, &assignment);

    weighted_score = midterm * 0.3
        + final * 0.4
        + assignment * 0.3;

    printf("weighted_score=%.2f\n", weighted_score);

    return 0;
}*/


int main(void)
{
    double height, weight;
    double bmi;

    scanf_s("%lf %lf", &height, &weight);

    bmi = weight / (height * height);

    printf("bmi=%.2f\n", bmi);

    return 0;
}
