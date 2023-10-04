#include <stdio.h>

long multiF(int start, int end);

void main()
{
    // multiF 함수를 호출하여 결과를 출력
    printf("1부터 2까지의 곱: %ld\n", multiF(1, 2));
    printf("1부터 3까지의 곱: %ld\n", multiF(1, 3));
    printf("1부터 5까지의 곱: %ld\n", multiF(1, 5));

}

// for 문을 이용하여 주어진 범위 내의 정수들을 곱하는 multiF 함수 정의
// 반환형 long
long multiF(int start, int end)
{
    // 결과를 저장할 변수 초기화
    long result = 1;

    // start부터 end까지의 정수를 곱함
    for (int i = start; i <= end; i++)
    {
        result *= i;
    }

    return result;
}
