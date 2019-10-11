// 별 찍기 - 1 성공
// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	128 MB	73869	44486	38798	61.975%
// 문제
// 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

// 입력
// 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

// 출력
// 첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.

// 예제 입력 1 
// 5
// 예제 출력 1 
// *
// **
// ***
// ****
// *****

#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		for (int j = 0; j <= i; j++){
			cout << '*';
		}
		cout << '\n';
	}
	return 0;
}