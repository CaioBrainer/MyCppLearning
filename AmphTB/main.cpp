#include <iostream>
#include <vector>

using namespace std;

int main() {	
		
	vector<double> si{};
	cout << "------------------------------------------------------------------------------" << endl;
	cout << "Amphiboles thermometer" << endl;
	cout << "------------------------------------------------------------------------------" << endl;
	cout << "Select a option below: " << endl;
	cout << "Type 0 to exit programm : " << endl;
	cout << "Type 1 to add a Si value: " << endl;
	cout << "Type 2 to caltulate temperature utilizing Putirka(2016) [Si in Hbl] : " << endl;
	cout << "Type 3 to caltulate temperature utilizing Putirka(2016) [Eq. 1] : " << endl;
	cout << "------------------------------------------------------------------------------" << endl;
	
	int choice {};
	do {
		cout << "------------------------------------------------------------------------------" << endl;
		cout << "Select a option:                                                  | 0| 1 | 2 |" << endl;
		cin >> choice;
		
		if (choice == 0) {
			cout << "Leaving Programm" << endl;
		}
		else if (choice == 1) {
			cout << "------------------------------------------------------------------------------" << endl;
			cout << "Type normalized silica value : ";
			
			double si_value {};
			cin >> si_value;
			si.push_back(si_value);}
		
		else if (choice == 2){
			for (auto value: si){
				cout<< "\n" <<(1977 - (value * 165))<< " degrees C" << endl;
				}
		}
		else {
			cout << "Invalid option." << endl;
			cout << "Please, select a valid option. " << endl;
		}
	} while (choice != 0);
	
	return 0;
}
