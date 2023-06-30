#include <iostream>
#include <windows.h>
#include <string>
#include <vector>

using namespace std;

//Protótipos de funções
void double_pointer(int *pointer);
//-----------------------------------------------------------------------------------------

int main() {
	SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8); //funciona para output com acentuação.
	
/* O que são? São variáveis cujo valor armazeado é um endereço na
 * memória do computador/programa. São utilizados para iterar
 * em arrays de maneira mais eficiente ou dentro de funções para
 * acessar endereços de variáveis fora do escopo da função.
 * O tamanho dos ponteiros é o mesmo (4 ou 8 bites) independente
 * do tipo localizado no endereço de memória para o qual ele aponta. 
 **/
	int number = 29;
	cout << "-----------------------------------------------------------------------------" <<endl;
	cout << "Endereço na memória da variável número: " << &number <<endl;
	cout << "Valor atribuido a número: " << number <<endl;
	//& na linha abaixo é o operador de endereço.
	cout << "Tamanho alocado para a variável: " << sizeof(number) <<endl;
 	cout << "-----------------------------------------------------------------------------" <<endl;
	
/* Declarando um ponteiro (pointer) utliza um * proximo ao 
 * identificador ou ao tipo do ponteiro.
 **/
	int *ponteiro = nullptr;
	cout << "\nEndereço do ponteiro: " << &ponteiro <<endl;
	cout << "Valor do ponteiro: " << ponteiro <<endl;
	cout << "tamanho do ponteiro: " << sizeof(ponteiro) <<endl;
 	cout << "-----------------------------------------------------------------------------" <<endl;
	
/* Acessando um valor alocado no endereço para o qual o ponteiro
 * aponta
 * */
	int *number_pointer = &number;
	cout << "\nEndereço de memória no ponteiro: " << number_pointer <<endl;
	//* para "derreferenciar" um pointer
	cout << "Valor alocado no endereço de memória para onde o ponteiro aponta: " << *number_pointer <<endl;
 	cout << "-----------------------------------------------------------------------------" <<endl;
	
/* Iterando em vetores através de pointers:
 * */ 
	vector<double> temperatures {950, 894, 957, 869, 799};
	vector<double> *vetor_ptr = &temperatures;
 	cout << "-----------------------------------------------------------------------------" <<endl;
	cout << "\nIterando os valores de um vetor através de um ponteiro: " <<endl;
	for(auto temperature: *vetor_ptr)
		cout << temperature << " ";
	cout << "\n" <<endl;
	
/* Alocação dinâmica de memória através de pointers:
 * */
 	int *int_ptr = {nullptr};
	int_ptr = new int;
	cout << "\nUm ponteiro nulo foi inicializado e apos isso foi " <<endl;
	cout << "foi alocado um espaço na memoria atraves de 'new int'" <<endl;
	cout << "e esse espaço contém garbage data: " << *int_ptr << endl;
	delete int_ptr;

	//alocação dinâmica de memória em pointer de arrays 
	size_t tamanho = 10;
	double *double_numbers = nullptr;
	double_numbers = new double[tamanho];
	delete [] double_numbers;
	
/* Operações com pointers:
 * Pointers podem ser comparados, incrementados e utilizados em operações aritméticas.
 * */
 	cout << "-----------------------------------------------------------------------------" <<endl;
	cout << boolalpha;
	string s1 = "Caio";
	string s2 = "Caio";
	string *pointer_s1 = &s1;
	string *pointer_s2 = &s2;
	cout << "Endereço dos apontadores é: " << pointer_s1 << " e " << pointer_s2;
	cout << "\n\n" << "pointer_s1 == pointer_s2? " <<(pointer_s1 == pointer_s2);
	cout << "\n" << "*pointer_s1 == *pointer_s2? " <<(*pointer_s1 == *pointer_s2) << endl;
	
/* Arrays e Pointers
 * */
	int numeros[10] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *numeros_ptr = numeros;
 	cout << "-----------------------------------------------------------------------------" <<endl;
	cout << "\nO endereço do array e do apontador são respectvamente, " << numeros << " e " << numeros_ptr;
	cout << "\nPara acessar valores em arrays e vetores também podemos usar *((array ou pointer) + 5)" <<endl;
	cout << "O resultado é o mesmo: " <<*(numeros+5) << " e " << *(numeros_ptr+5) << endl;

/* Pointers e Constants.
 * Podemos associar constante ao valor associado ao endereço de 
 * memória para o qual o ponteiro está direcionado ou definir o 
 * endereço como constante. Os valor e endereço podem ser 
 * constantes de forma simultânea.
 * */
 	cout << "\n-----------------------------------------------------------------------------" <<endl;
	double pi {3.1415};
	const double *pi_ptr {&pi}; //Aqui o valor associado ao endereço será constante
	cout << *pi_ptr << " Nesse caso não poderá ser alterado" <<endl; 
	cout << pi_ptr << " Nesse caso poderá ser alterado" <<endl;
	
	double const *pi_ptr2 {&pi}; //Nesse caso o endereço será constante
	cout << "\n" << *pi_ptr2 <<" Nesse caso poderá ser alterado" <<endl;
	cout << pi_ptr2 << " Nesse caso não poderá ser alterado" <<endl;

/* Pointers e Functions.
 * Passagem de valores ou refeências de ponteiros como argumentos de função. Podemos passar um 
 * ponteiro ou passar o endereço de uma variável com o operador de endereço &.
 * */
 	cout << "\n-----------------------------------------------------------------------------" <<endl;
 	cout << "Passando uma pointeiro de inteiro para uma variável e multiplicando por 2: " <<endl;
	double_pointer(number_pointer);
	
	return 0;
}

// Declaração de funções
void double_pointer(int *pointer) {
	cout << (*pointer * 2);
		}