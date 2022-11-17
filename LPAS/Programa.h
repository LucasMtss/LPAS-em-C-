// Programa.h - Interface da classe Programa
#pragma once
#include <string>
// Número máximo de instruções do programa.
#define NUMERO_DE_INSTRUCOES	
using namespace std;
// Esta classe representa a estrutura de um programa LPAS.
class Programa {
public:
	// Inicia as variáveis do programa com valores default.
	Programa();
	/* Lê as instruções de um programa LPAS para a memória. Retorna true se as instruções foram lidas
	com sucesso e false se ocorreu algum erro durante a leitura. */
	bool carregar();
	// Obtém o número de instruções do programa LPAS.
	unsigned short getNumeroDeInstrucoes();
	/* Obtém uma instrução LPAS armazenada na posição de memória indicada por endereco. Se o
	endereço de memória for inválido, retorna uma string nula. */
	string obterInstrucao(unsigned short endereco);
	/* Altera uma instrução armazenada na posição de memória indicada por endereco por uma nova
	instrucao. Retorna true se a instrução foi alterada. Se o endereço de memória for inválido, retorna
	false. */
	bool alterarInstrucao(string instrucao, unsigned short endereco);
	// Exibe no console as instruções do programa.
	void exibir();
private:
	// Número de instruções do programa.
	unsigned short numeroDeInstrucoes;
	/* Memória que armazena as instruções LPAS que compõem o programa.
	Cada linha do programa é armazenada em uma posição do vetor. */
	string instrucoes[NUMERO_DE_INSTRUCOES];
}; // class Programa