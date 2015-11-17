// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

typedef struct ficha   // ficha de cliente
{
	char nome[45];  // Nome do cliente, char
	int idade;      // Idade do Cliente
	int id;         //Identificação do Cliente
	int nr_res;     //número de reservas do cliente 0 > nr_res <6
};

typedef struct lugares
{
	char lugar[11][10];
};


int main()
{
	

	printf("laaaaaa");
    return 0;
}

