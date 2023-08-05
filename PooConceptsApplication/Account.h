#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

/* No arquivo "Classe.h" a função é definida em conjunto com seus
*  atributos e o protótipo de seus métodos.
**/

class Account
{
public:
//construtor
	Account(std::string nome = "None", int saldo_inicial = 0);
//destrutor
	~Account();
//método depósito (protótipo)
void deposito(double valor);
//método saque (protótipo)
void saque(double valor);
//método depósito (protótipo)
void inserir_nome(std::string nome);
//
void mostrar_nome();
//
void saldo();

private:
	std::string nome_completo;
	double saldo_bancario;
};

#endif // ACCOUNT_H
