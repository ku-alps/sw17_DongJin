// A+B 성공
// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 2 초	128 MB	225912	98729	72991	45.222%
// 문제
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)

// 출력
// 첫째 줄에 A+B를 출력한다.

// 예제 입력 1 
// 1 2
// 예제 출력 1 
// 3


#include <iostream>
using namespace std;
int main(void) {
	int a, b;
	cin >> a >> b;
	cout << a + b << endl;
	return 0;
}