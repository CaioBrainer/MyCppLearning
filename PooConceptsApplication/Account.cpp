#include "Account.h"
#include <iostream>

Account::Account(std::string nome , int saldo_inicial) : nome_completo(nome), saldo_bancario(saldo_inicial) {
	std::cout<< "Conta bancaria inserida no sistema"<< std::endl;
}

Account::~Account() {
	std::cout<< "Conta bancaria excluida do sistema"<< std::endl;
}
	
void Account::inserir_nome(std::string nome) {
	nome_completo = nome;
}

void Account::mostrar_nome() {
	std::cout << nome_completo << std::endl;
}

void Account::saldo() {
	std::cout << saldo_bancario << std::endl;
}

void Account::deposito(double valor) {
	saldo_bancario += valor;
	std::cout << "Deposito realizado com sucesso!" << std::endl;
}

void Account::saque(double valor) {
	if (saldo_bancario - valor > 0)
		{saldo_bancario -= valor;
		std::cout << "Saque realizado com sucesso"<< std::endl;}
	else
		std::cout << "Saque nao realizado, saldo insuficiente" << std::endl;
}