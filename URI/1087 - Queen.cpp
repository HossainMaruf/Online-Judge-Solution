#include <iostream>

inline int n_move(int x1, int y1, int x2, int y2) {
	if(x1 == x2 && y1 == y2) return 0;
	else if((x1 == x2) || (y1 == y2) || (abs(y1 - y2) == abs(x1 - x2))) return 1;
	else return 2;
}

int main() {

	int x1, x2, y1, y2;

	while((std::cin >> x1 >> y1 >> x2 >> y2) && (x1 || x2 || y1 || y2)) {
		std::cout << n_move(x1,y1,x2,y2) << std::endl;
	}

	return 0;
}