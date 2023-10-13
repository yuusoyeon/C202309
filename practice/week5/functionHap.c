#include <stdio.h>

int hapf(int value);

int main()
{
    // 1부터 10까지의 합을 출력
    printf("1부터 10까지의 합은 %d\n", hapf(10));

    // 1부터 100까지의 합을 출력
    printf("1부터 100까지의 합은 %d\n", hapf(100));

    // 1부터 1000까지의 합을 출력
    printf("1부터 1000까지의 합은 %d\n", hapf(1000));
     
    return 0;
}

// 합을 계산하는 함수 정의
int hapf(int value)
{
    // 초기값과 합을 저장할 변수 선언
    int i = 1;
    int hap = 0;

    // i가 value 이하인 동안 반복
    while (i <= value)
    {
        // 현재까지의 합에 i를 더함
        hap = hap + i;

        // i를 1 증가시킴
        i = i + 1;
    }

    return hap;
}