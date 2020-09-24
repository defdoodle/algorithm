#include <iostream>
#include <vector>

void PrintPicked(std::vector<int>& picked) {
	for (int i = 0; i < picked.size(); i++) {
		std::cout << picked[i] << " "  ;
	}
	std::cout << "\n";
}

void pick(int n, std::vector<int>& picked, int toPick) {
	if (toPick == 0) {
		PrintPicked(picked);
		return;
	}

	int smallest = picked.empty() ? 1 : picked.back() + 1;

	for (int i = smallest; i < n + 1; i++) {
		picked.push_back(i);
		pick(n, picked, toPick - 1);
		picked.pop_back();
	}
}

int main() {
	int a, b;
	std::cin >> a >> b;

	std::vector<int> v;
	pick(a, v, b);

	return 0;
}
