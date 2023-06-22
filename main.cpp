#include <iostream>

using namespace std;

// Area calculation (square)

int main() {
	cout << "Write the width in meters: \n";
	float width {0};
	cin >> width;
	cout << "Write the height in meters: \n";
	float height {0};
	cin >> height;
	cout << "Total area is: " << width * height << " m^2";
	return 0;
}