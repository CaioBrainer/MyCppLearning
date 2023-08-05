#include <iostream>
#include "Account.h"

int main() {
	std::cout << "Bank Account Project" << std::endl;
	
	Account conta_caio = Account();
    conta_caio.inserir_nome("Caio Brainer");
	conta_caio.deposito(500.0);
	conta_caio.saque(200.0);
	conta_caio.saldo();

	conta_caio.saque(600.0);
	conta_caio.mostrar_nome();
	
	return 0;
}