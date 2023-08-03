#include <iostream>
#include <windows.h>
#include <string>
#include <vector>

using namespace std;

// Conceitos

/* Programação Orientada a Objetos:Paradigma de programação que se
 * baseia na criação de objetos (instâncias de uma classe). Classes
 * são modelos que definem a estrutura e comportamento dos objetos que
 * são criados a partir dela. São tipos de dados definidos pelo usuário.
 * */

/* Herança: Como o nome sugere, Herança é o processo de formar uma 
 * nova classe a partir de uma classe existente que é da classe existente 
 * chamada de classe base, a nova classe é formada
 * chamada de classe derivada. Uma classe pode herdar atributos/métodos de
 * uma classe base.
 **/

/* Overload: O conceito de sobrecarga (overload) também é um ramo do 
 * polimorfismo. Quando o operador ou função existente é feito para 
 * operar em um novo tipo de dados, diz-se que está sobrecarregado.
 **/
 
// ---------------------------------------------------------------------

// Definindo uma classe:
class Caixa {
	public:
		double largura;
		double altura;
		double profundidade;
};
// Classe Base:
class Formato {
	public:
		void inputLargura(double larg) {
			largura = larg;
	}
		void inputAltura(double alt) {
			altura = alt;
	}
	
	protected:
		double largura;
		double altura;
	
};
// Classe Derivada:
class Retangulo: public Formato {
	public:
		double calculaArea() {
			return (altura * largura);
		}
};
//
class Dog {
protected:
	int age;
	string name;
public:
void set_name(string pet_name) {
	cout << "Nome do pet adicionado"<< endl;}
void set_age(int pet_idade) {
	cout << "Idade do pet adicionada"<< endl;}
	
//Construtores (overloading presente!)
Dog(){
	age = 0;
	name = "Doguinho(a)";}
	
Dog(int pet_idade, string pet_name) {
	age = pet_idade;
	name = pet_name;
	cout << "Idade e nome do pet foram adicionados"<< endl;}
};

// ---------------------------------------------------------------------

int main() {
	
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8); //Output com acentuação.

// Criando um objeto (instanciando):
Caixa box1;
Caixa box2;
double volume = 0.0;

// box1
box1.altura = 4.2;
box1.largura = 5.3;
box1.profundidade = 8.4;

// box2
box2.altura = 11.5;
box2.largura = 13.9;
box2.profundidade = 12.3;

// box3, utilizando ponteiros.
Caixa *box3 {nullptr};
box3 = new Caixa;
box3->altura = 5;
box3->largura = 5;
box3->profundidade = 5;

delete box3;

//Array composto por objetos do tipo Caixa
//Caixa boxes [] {box1, box2};
//Vetor do tipo Caixa
vector<Caixa> caixas {box1};
caixas.push_back(box2);

//Acessando atributos de objetos utilizando dot operator
volume = box1.altura * box1.largura * box1.profundidade;
cout << "O volume da caixa 1 é: " << volume << "m³" << endl;
volume = box2.altura * box2.largura * box2.profundidade;
cout << "O volume da caixa 2 é: " << volume << "m³" << endl;
volume = box3->altura * box3->largura * box3->profundidade;
cout << "O volume da caixa 3 é: " << volume << "m³" << endl;

//Instanciando um objeto da classe Dog utilizando um construtor definido
Dog cachorro = Dog(5, "Apollo");

// ---------------------------------------------------------------------

/* Nesse exemplo a classe Retângulo é derivada da classe Formato,
 * herdando assim os métodos públicos inputLargura e inputAltura e os
 * atributos protegidos altura e largura.
 **/
Retangulo ret1;
ret1.inputAltura(5.0);
ret1.inputLargura(5.0);
//ret1.largura = 10; <--------------------- Acesso a atributos progegidos causa erro no compilador.
double area = ret1.calculaArea();
cout << "\nA área do retângulo é: " << area << "m²" << endl;


	return 0;
}