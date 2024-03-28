// Identificacao geral
/*

Programa0111 - v0.0
Data de modificacao da versao: 29/02/2024
Author: Mateus Resende Ottoni
Matricula: 855842

*/


// Comandos para a janela de comandos
/*

Para compilar (Windows):
gcc -o Programa0111 Programa0111.c

Para executar (Windows):
Programa0111

*/


// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <math.h>




void programa_0111 (void)
{
// Definir dados
int lado_1 = 0;
int lado_2 = 0;
int area_1 = 0;
int area_2 = 0;


// Apresentacao
printf ( "\n%s\n", "Esse programa visa tomar um valor digitado e o usar para calcular o quadrado de seu triplo." );
printf ( "%s\n", "Para efeito de visualizacao, considere o valor como o lado de um quadrado" );


// Ler input
printf ( "\n%s\n", "Digite um valor inteiro a ser usado no calculo: " );
scanf ( "%d", &lado_1 );
getchar ();


// Calculos
lado_2 = lado_1 * 3;
area_1 = pow (lado_1, 2);
area_2 = pow (lado_2, 2);

// Mostrar resultados
printf ( "\nCom o lado digitado (%d), o seu triplo equivale a %d", lado_1, lado_2 );
printf ( "\nAssim, a area desse lado obtido equivale a %d", area_2 );
printf ( "\nComparativamente, %d eh maior que a area do lado original (%d) por 9 vezes\n", area_2, area_1);


// Encerramento do programa
printf ( "\n%s\n\n", "Aperte ENTER para retornar a lista de opcoes");
getchar ();
}




int main ()
{
// Definir dados
int option = 0;


// Identificacao do autor
printf ( "%s\n", "\nPrograma0111 _ Programa v0.0" );
printf ( "%s\n", "Autor: Mateus Resende Ottoni" );
printf ( "\n" );



do
{
// Mostrar opcoes
printf ( "%s\n", "0 - Terminar o programa" );
printf ( "%s\n", "1 - Iniciar o programa " );


printf ( "\n%s\n", "Digite sua opcao" );
scanf ( "%d", &option );


switch (option)
{
case 0:
	break;

case 1:
	programa_0111 ();
	break;

default:
	printf ( "\n%s\n", "Opcao nao reconhecida");
	break;
}

}
while ( option != 0);


// Encerramento do programa
printf ( "\n%s\n", "Encerramento do programa escolhido" );
printf ( "%s\n", "Pressione ENTER para terminar o programa" );
getchar ();


return (0);
}
