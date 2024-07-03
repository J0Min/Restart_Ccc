#include <iostream>

int main(void) {
	int val1, val2;
	int result = 0;
	std::cin >> val1 >> val2;

	for (int i = val1 + 1; i < val2; i++) {
		result += i;
	}

	std::cout << val1 << std::endl;
	std::cout << val2 << std::endl;
	std::cout << result << std::endl;
}