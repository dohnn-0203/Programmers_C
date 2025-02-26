#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 정수 num1과 num2가 매개변수로 주어질 때, 
// num1을 num2로 나눈 값에 1,000을 곱한 후 
// 정수 부분을 return 하도록 solution 함수를 완성해주세요.
int division(int num1, int num2) {
    float div = (float)num1/num2;
    int answer;

    answer = div * 1000;

    printf("%d", answer);

    return 0;
}

// 정수 num1과 num2가 매개변수로 주어집니다. 
// 두 수가 같으면 1 다르면 -1을 retrun하도록 solution 함수를 완성해주세요.
int comparison(int num1, int num2){
  int answer;
  if(num1 == num2) {
    answer = 1;
  } else {
    answer = -1;
  }
  printf("asdfasdf %d", answer);
  return 0;
}

//////////// 여기서부터 진행 필요

// 첫 번째 분수의 분자와 분모를 뜻하는 numer1, denom1, 
// 두 번째 분수의 분자와 분모를 뜻하는 numer2, denom2가 매개변수로 주어집니다. 
// 두 분수를 더한 값을 기약 분수로 나타냈을 때 
// 분자와 분모를 순서대로 담은 배열을 return 하도록 solution 함수를 완성해보세요.
// 1 / 2 + 3 / 4 = 5 / 4입니다. 따라서 [5, 4]를 return 합니다.
int fraction(int numer1, int denom1, int numer2, int denom2) {
  // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
  int* answer = (int*)malloc(1);
  return answer;
}


int main(void) {
 // division(3, 2); // 출력값 1500 예상
 // comparison(2, 3); // 출력값 -1 예상
  fraction(1, 2, 3, 4); // 출력값 [5, 4] dPtkd
}