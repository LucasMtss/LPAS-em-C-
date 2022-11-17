#include "Programa.h"
#include <iostream>

using namespace std;

Programa::Programa() {
	numeroDeInstrucoes = 0;
}

bool Programa::carregar()
{
	string nomePrograma;
	cout << "Informe o nome do programa: ";
	cin >> nomePrograma;
	return false;
}

unsigned short Programa::getNumeroDeInstrucoes() {
	return numeroDeInstrucoes;
}

string Programa::obterInstrucao(unsigned short endereco)
{
	return instrucoes[endereco];
}

bool Programa::alterarInstrucao(string instrucao, unsigned short endereco)
{
	if (endereco < numeroDeInstrucoes && endereco < 0)
		return false;
	instrucoes[endereco] = instrucao;
	return true;
}

void Programa::exibir()
{
	for (unsigned short i = 0; i < numeroDeInstrucoes; i++) {
		cout << instrucoes[i] << endl;
	}
	cout << endl;
}
