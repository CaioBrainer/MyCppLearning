#include <iostream>
#include <vector>

using namespace std;

int main() {
/* O que são? São variáveis cujo valor armazeado é um endereço na
 * memória do computador/programa. São utilizados para iterar
 * em arrays de maneira mais eficiente ou dentro de funções para
 * acessar endereços de variáveis fora do escopo da função.
 * O tamanho dos ponteiros é o mesmo (4 ou 8 bites) independente
 * do tipo localizado no endereço de memória para o qual ele aponta. 
 **/
	int number = 29;
	cout << "Address of number: " << &number <<endl;
	cout << "Value of number: " << number <<endl;
	//& na linha abaixo é o operador de endereço.
	cout << "Size of number: " << sizeof(number) <<endl;
	cout << "--------------------------------------------" <<endl;
	
/* Declarando um ponteiro (pointer) utliza um * proximo ao 
 * identificador ou ao tipo do ponteiro.
 **/
	int *ponteiro = nullptr;
	cout << "Address of pointer: " << &ponteiro <<endl;
	cout << "Value of pointer: " << ponteiro <<endl;
	cout << "Size of pointer: " << sizeof(ponteiro) <<endl;
	cout << "--------------------------------------------" <<endl;
	
/* Acessando um valor alocado no endereço para o qual o ponteiro
 * aponta
 * */
	int *number_pointer = &number;
	cout << "Address inside the number pointer: " << number_pointer <<endl;
	//* para "derreferenciar" um pointer
	cout << "Value inside the number variable: " << *number_pointer <<endl;
	cout << "--------------------------------------------" <<endl;
	
/* Iterando em vetores através de pointers
 * */ 
	vector<double> temperatures {950, 894, 957, 869, 799};
	vector<double> *vetor_ptr = &temperatures;
	
	for(auto temperature: *vetor_ptr)
		cout << temperature << " ";
	
	return 0;
}