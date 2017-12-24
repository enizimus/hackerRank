#include<iostream>
#include<map>
#include<string>
#include<vector>

int main() {

	int t, n, m;
	std::cin >> t;

	std::map<int, std::string> iceCreamId;

	int k = 0;

	while (t > 0) {
		t--;
		std::cin >> m;
		std::cin >> n;

		std::vector<int> cost(n);

		for (int i = 0; i < n; i++) {
			std::cin >> cost[i];
		}

		int maxI = m, maxJ = m;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (cost[i] + cost[j] == m && i != j) {
					if (cost[i] < maxI && cost[j] < maxJ) {
						maxI = cost[i];
						maxJ = cost[j];

						std::string value = std::to_string(i + 1) + " " + std::to_string(j + 1);
						iceCreamId[k] = value;
						break;
					}
				}
			}
		}

		k++;

	}

	for (int i = 0; i < iceCreamId.size(); i++) {
	std::cout << iceCreamId[i] << std::endl;
	}
	return 0;
}