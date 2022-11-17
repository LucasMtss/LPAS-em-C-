// Programa.h - Interface da classe Programa
#pragma once
#include <string>
// N�mero m�ximo de instru��es do programa.
#define NUMERO_DE_INSTRUCOES	
using namespace std;
// Esta classe representa a estrutura de um programa LPAS.
class Programa {
public:
	// Inicia as vari�veis do programa com valores default.
	Programa();
	/* L� as instru��es de um programa LPAS para a mem�ria. Retorna true se as instru��es foram lidas
	com sucesso e false se ocorreu algum erro durante a leitura. */
	bool carregar();
	// Obt�m o n�mero de instru��es do programa LPAS.
	unsigned short getNumeroDeInstrucoes();
	/* Obt�m uma instru��o LPAS armazenada na posi��o de mem�ria indicada por endereco. Se o
	endere�o de mem�ria for inv�lido, retorna uma string nula. */
	string obterInstrucao(unsigned short endereco);
	/* Altera uma instru��o armazenada na posi��o de mem�ria indicada por endereco por uma nova
	instrucao. Retorna true se a instru��o foi alterada. Se o endere�o de mem�ria for inv�lido, retorna
	false. */
	bool alterarInstrucao(string instrucao, unsigned short endereco);
	// Exibe no console as instru��es do programa.
	void exibir();
private:
	// N�mero de instru��es do programa.
	unsigned short numeroDeInstrucoes;
	/* Mem�ria que armazena as instru��es LPAS que comp�em o programa.
	Cada linha do programa � armazenada em uma posi��o do vetor. */
	string instrucoes[NUMERO_DE_INSTRUCOES];
}; // class Programa