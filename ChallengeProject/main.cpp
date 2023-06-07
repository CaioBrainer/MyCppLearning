#include <iostream>
#include <vector>

using namespace std;

int main() {	
	
	bool exit {false};
	int choice {};
	
	while (!exit) {
		cout << "------------------------------------------------------------------------------" << endl;
		cout << "Termomêtro para anfibólios" << endl;
		cout << "------------------------------------------------------------------------------" << endl;
		cout << "Selecione uma opção para calcular: " << endl;
		cout << "Digite 0 para sair : " << endl;
		cout << "Digite 1 para calcular utilizando a calibração de Putirka(2016), Si em Hbl : " << endl;
		cout << "------------------------------------------------------------------------------" << endl;
		
		cin >> choice;
		
		if (choice == 0) {
			exit = true;
			cout << "Finalizando programa, até mais." << endl;
		}
		else if (choice == 1) {
			cout << "------------------------------------------------------------------------------" << endl;
			cout << "Você digitou 1" << endl;
			cout << "Digite o valor de Si para calcular a temperatura: ";
			double si {};
			cin >> si;
			double temperature = (1977 - (si * 165));
			
			cout <<"A temperatura de cristalização do anfibólio é : " << temperature << " °C" <<endl;
			cout << "------------------------------------------------------------------------------" << endl;
			
			
		}
		else {
			cout << "Você selecionou uma opção inválida." << endl;
			cout << "Selecione uma opção válida no menu. " << endl;
		}
	}
	
	return 0;
}
