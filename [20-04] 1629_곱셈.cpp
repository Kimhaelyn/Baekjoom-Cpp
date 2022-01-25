#include <iostream>
using namespace std;

long long mul(int A, int B, int C) {
	if (B == 1)
		return A;
	else if(B%2==0){ //B°¡ Â¦¼ö¸é (A^B/2)*(A^B/2)²Ã·Î ³ª´² Ç¬´Ù.
		long long temp = mul(A, B / 2, C);
		return temp * temp%C;
	}
	else return A * mul(A, B - 1, C) % C; //B°¡ È¦¼ö¸é B¸¦ Â¦¼ö·Î ¸¸µé°í A¸¦ °öÇØÁØ´Ù.
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int A, B, C;
	cin >> A >> B >> C;
	cout << mul(A%C, B, C) << '\n';
}