#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// number_len은 배열 number의 길이입니다.
int solution(int number[], size_t number_len) {
    int answer = 0;

    int lastIndex = number_len - 1;
    //int len = int(number_len);
    int std1 = 0, std2 = 1, std3 = 2;
    while (std1 <= (lastIndex - 2))
    {
        if ((number[std1] + number[std2] + number[std3]) == 0)
        {
            ++answer;
        }

        if (std3 == lastIndex && std2 < lastIndex - 1)
        {
            ++std2;
            std3 = std2 + 1;
        }
        else if (std3 == lastIndex && std2 == lastIndex - 1)
        {
            ++std1;
            std2 = std1 + 1;
            std3 = std2 + 1;
        }
        else if (std3 < lastIndex)
        {
            ++std3;
        }
    }
    return answer;
}