// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

typedef struct ficha   // ficha de cliente
{
	char nome[45];  // Nome do cliente, char
	int idade;      // Idade do Cliente
	int id;         // Identificação do Cliente
	int nr_res;     // Número de reservas do cliente 0 > nr_res <6
};

typedef struct sala  // Lugares reservados/disponiveis
{
	char lugar[10];
};


ficha recolha_cliente()
{
	ficha c;
	printf("Nome do Cliente:\n");
	gets_s(c.nome);
	fflush(stdin);

	printf("Idade do Cliente:\n");
	scanf_s("%d", &c.idade);
	fflush(stdin);

	printf("Identidade do Cliente:\n");
	scanf_s("%d", &c.id);
	fflush(stdin);

	printf("Numero de Reservas:\n");
	scanf_s("%d", c.nr_res);
	fflush(stdin);

	return c;
}

void imprime_ficha(ficha c)
{
	printf("Nome do Cliente: %s\n", c.nome);
	printf("Idade do Cliente:\n", c.idade);
	printf("Identidade do Cliente:\n", c.id);
	printf("Numero de Reservas do Cliente:\n", c.nr_res);

	
}

int main()
{
	ficha cliente[2];
	int i;
	i = 0;
	printf("Introduza os dados do cliente nr: %d\n", (i+1));
	
	for (i = 0; i < 2; i++)
	{
		cliente[i] = recolha_cliente();
    }

	printf_s("Dados dos Clientes:\n");
	for (i = 0; i < 2; i++)
	{
		imprime_ficha(cliente[i]);
	}

    return 0;
}

