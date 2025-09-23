#include <stdio.h>

int main(void) {
    double a, b;    // 실수(소수점) 입력을 받을 수 있는 변수 a,b 선언
    char op;        // 연산자를 저장할 문자형 변수 op 선언

    printf("계산식을 입력하세요 (예: 3.5 + 2.1): ");
    // %c 입력 시 뒤에 sizeof(op) 추가
    scanf_s("%lf %c %lf", &a, &op, sizeof(op), &b);

    switch (op) {
    case '+':
        printf("결과: %.2lf\n", a + b);  // a + b를 소수점 둘째 자리까지 출력
        break;
    case '-':
        printf("결과: %.2lf\n", a - b);
        break;
    case '*':
        printf("결과: %.2lf\n", a * b);
        break;
    case '/':
        if (b == 0) {   // 나누는 수가 0인지 먼저 검사
            printf("0으로 나눌 수 없습니다!\n");
        }
        else {
            printf("결과: %.2lf\n", a / b);
        }
        break;
    default:
        printf("지원하지 않는 연산자입니다.\n");
    }
    return 0;
}
