#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	char c;

	int h1, m1, s1;
	cin >> h1 >> c >> m1 >> c >> s1;

	int h2, m2, s2;
	cin >> h2 >> c >> m2 >> c >> s2;

	if (h2 < h1) {
		h2 += 24;
	}

	if (h2 == h1 &&
		m2 < m1) {
		h2 += 24;
	}

	if (h2 == h1 &&
		m2 == m1 &&
		s2 < s1) {
		h2 += 24;
	}

	auto answer = (h2 - h1) * 60 * 60 + (m2 - m1) * 60 + (s2 - s1);
	cout << answer;

	return 0;
}