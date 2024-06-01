/* Identificações gerais
855842_AED1

Codigo de aluno: 1525230
Matricula: 855842
Nome: Mateus Resende Ottoni
Exercicio
*/



// Bibliotecas
#include "MyLib.h"


/*  Comandos para terminal

Compilar:
gcc -o Exercicio Exercicio.c

Executar:
./Exercicio
Exercicio

Uso de mk:
./mk Exercicio [arquivo de input] [arquivo de output]
(Para dar permissão: chmod +x mk)


*/





void metodo_0911 ( void )
{
// Dados
int coluna = 0, linha = 0;

// Identificacao do metodo
println ( "Metodo 0911: " );
linhasvazias ( );


// Ler colunas e linhas
do {
    coluna = readint ("Digite a quantidade de colunas na matriz: "); }
while (coluna <= 0);
do {
    linha = readint ("Digite a quantidade de linhas na matriz: "); }
while (linha <= 0);

// Definir matriz
double matrix [linha] [coluna];
newdoublematrix( matrix, linha, coluna );

// Ler valores
scan_double_arraytomatrix_negative ( linha, coluna, matrix );


// Mostrar matriz
linhavazia ();
println ("Matriz resultante");
print_double_matrix ( linha, coluna, matrix );

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




void metodo_0912 ( void )
{
// Dados
int linha = 0, coluna = 0;
char *arquivo = "Resultado02.txt";

// Identificacao do metodo
println ( "Metodo 0912: " );
linhasvazias ( );

    
// Acoes
// Determinar matriz
linha = scan_int_positive ("Digite o numero de linhas: ");

coluna = scan_int_positive ("Digite o numero de colunas: ");
double matrix [linha] [coluna];
newdoublematrix( matrix, linha, coluna );


// Ler valores
scan_double_arraytomatrix_negative ( linha, coluna, matrix );


// Gravar no arquivo
fprint_double_matrix ( arquivo, linha, coluna, matrix );


// Mostrar matriz
print_double_matrix ( linha, coluna, matrix );


// Ler do arquivo
linhavazia ();
println ("Matriz lida do arquivo");
fscan_double_matrix ( arquivo, linha, coluna, matrix );
print_double_matrix ( linha, coluna, matrix );
   

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




void metodo_0913 ( void )
{
// Dados
char *arquivo = "Resultado02.txt";
int linhas = 0, colunas = 0;


// Identificacao do metodo
println ( "Metodo 0913: " );
linhasvazias ( );

// Acoes
// Determinar matriz
linhas = scan_int_positive ("Digite o numero de linhas: ");
colunas = scan_int_positive ("Digite o numero de colunas: ");
double matrix [linhas] [colunas];
newdoublematrix( matrix, linhas, colunas );


// Ler do arquivo
fscan_double_matrix ( arquivo, linhas, colunas, matrix );

// Mostrar diagonal
linhavazia ();
print_diagonal_doublematrix ( linhas, colunas, matrix );

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




void metodo_0914 ( void )
{
// Dados
char *arquivo = "Resultado02.txt";
int linhas = 0, colunas = 0;


// Identificacao do metodo
println ( "Metodo 0914: " );
linhasvazias ( );

// Acoes
// Determinar matriz
linhas = scan_int_positive ("Digite o numero de linhas: ");
colunas = scan_int_positive ("Digite o numero de colunas: ");
double matrix [linhas] [colunas];
newdoublematrix( matrix, linhas, colunas );


// Ler do arquivo
fscan_double_matrix ( arquivo, linhas, colunas, matrix );

// Mostrar diagonal
linhavazia ();
print_diagonal2_doublematrix ( linhas, colunas, matrix );

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}



void metodo_0915 ( void )
{
// Dados
char *arquivo = "Resultado02.txt";
int linhas = 0, colunas = 0;


// Identificacao do metodo
println ( "Metodo 0915: " );
linhasvazias ( );

// Acoes
// Determinar matriz
linhas = scan_int_positive ("Digite o numero de linhas: ");
colunas = scan_int_positive ("Digite o numero de colunas: ");
double matrix [linhas] [colunas];
newdoublematrix( matrix, linhas, colunas );


// Ler do arquivo
fscan_double_matrix ( arquivo, linhas, colunas, matrix );

// Mostrar diagonal
linhavazia ();
print_diagonaldown_doublematrix ( linhas, colunas, matrix );

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}





void metodo_0916 ( void )
{
// Dados
char *arquivo = "Resultado02.txt";
int linhas = 0, colunas = 0;


// Identificacao do metodo
println ( "Metodo 0916: " );
linhasvazias ( );

// Acoes
// Determinar matriz
linhas = scan_int_positive ("Digite o numero de linhas: ");
colunas = scan_int_positive ("Digite o numero de colunas: ");
double matrix [linhas] [colunas];
newdoublematrix( matrix, linhas, colunas );


// Ler do arquivo
fscan_double_matrix ( arquivo, linhas, colunas, matrix );

// Mostrar diagonal
linhavazia ();
print_diagonalup_doublematrix ( linhas, colunas, matrix );

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}






void metodo_0917 ( void )
{
// Dados
char *arquivo = "Resultado02.txt";
int linhas = 0, colunas = 0;


// Identificacao do metodo
println ( "Metodo 0917: " );
linhasvazias ( );

// Acoes
// Determinar matriz
linhas = scan_int_positive ("Digite o numero de linhas: ");
colunas = scan_int_positive ("Digite o numero de colunas: ");
double matrix [linhas] [colunas];
newdoublematrix( matrix, linhas, colunas );


// Ler do arquivo
fscan_double_matrix ( arquivo, linhas, colunas, matrix );

// Mostrar diagonal
linhavazia ();
print_diagonal2down_doublematrix ( linhas, colunas, matrix );

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




void metodo_0918 ( void )
{
// Dados
char *arquivo = "Resultado02.txt";
int linhas = 0, colunas = 0;


// Identificacao do metodo
println ( "Metodo 0918: " );
linhasvazias ( );

// Acoes
// Determinar matriz
linhas = scan_int_positive ("Digite o numero de linhas: ");
colunas = scan_int_positive ("Digite o numero de colunas: ");
double matrix [linhas] [colunas];
newdoublematrix( matrix, linhas, colunas );


// Ler do arquivo
fscan_double_matrix ( arquivo, linhas, colunas, matrix );

// Mostrar diagonal
linhavazia ();
print_diagonal2up_doublematrix ( linhas, colunas, matrix );

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}



void metodo_0919 ( void )
{
// Dados
char *arquivo = "Resultado02.txt";
int linhas = 0, colunas = 0;
bool allzero = true;


// Identificacao do metodo
println ( "Metodo 0919: " );
linhasvazias ( );

// Acoes
// Determinar matriz
linhas = scan_int_positive ("Digite o numero de linhas: ");
colunas = scan_int_positive ("Digite o numero de colunas: ");
double matrix [linhas] [colunas];
newdoublematrix( matrix, linhas, colunas );

// Ler do arquivo
fscan_double_matrix ( arquivo, linhas, colunas, matrix );


// Testar
allzero = bool_allzero_updiagonal_doublematrix ( linhas, colunas, matrix );

if (allzero == true)
    {
    println ("Os valores acima da diagonal sao todos iguais a zero");
    }
else
    {
    println ("Os valores acima da diagonal nao sao todos iguais a zero");
    }

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




void metodo_0920 ( void )
{
// Dados
char *arquivo = "Resultado02.txt";
int linhas = 0, colunas = 0;
bool allzero = true;


// Identificacao do metodo
println ( "Metodo 0920: " );
linhasvazias ( );

// Acoes
// Determinar matriz
linhas = scan_int_positive ("Digite o numero de linhas: ");
colunas = scan_int_positive ("Digite o numero de colunas: ");
double matrix [linhas] [colunas];
newdoublematrix( matrix, linhas, colunas );

// Ler do arquivo
fscan_double_matrix ( arquivo, linhas, colunas, matrix );


// Testar
allzero = bool_allzero_downdiagonal_doublematrix ( linhas, colunas, matrix );

if (allzero == true)
    {
    println ("Os valores abaixo da diagonal sao todos iguais a zero");
    }
else
    {
    println ("Os valores abaixo da diagonal nao sao todos iguais a zero");
    }

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}



int main (void)
{
// Variaveis e dados
int opcao = 0;



// Identificacao do autor
autor ( );


do
{
// Lista de opcoes
linhavazia ( );
println ( "Lista de opcoes" );
println ( "0 - Terminar o programa" );
println ( "1 - Metodo 0911" );
println ( "2 - Metodo 0912" );
println ( "3 - Metodo 0913" );
println ( "4 - Metodo 0914" );
println ( "5 - Metodo 0915" );
println ( "6 - Metodo 0916" );
println ( "7 - Metodo 0917" );
println ( "8 - Metodo 0918" );
println ( "9 - Metodo 0919" );
println ( "10 - Metodo 0920" );
linhavazia ( );

// Escolher opcao
opcao = readint ( "Digite sua opcao: " );
showint ( "Opcao escolhida = ", opcao );
linhasvazias ( );



// Metodos
switch ( opcao)
{
case 0:
	break;
case 1:
	metodo_0911 ();
	break;
case 2:
	metodo_0912 ();
	break;
case 3:
	metodo_0913 ();
	break;
case 4:
	metodo_0914 ();
	break;
case 5:
	metodo_0915 ();
	break;
case 6:
	metodo_0916 ();
	break;
case 7:
	metodo_0917 ();
	break;
case 8:
	metodo_0918 ();
	break;
case 9:
	metodo_0919 ();
	break;
case 10:
	metodo_0920 ();
	break;
default:
	println ( "Opcao nao reconhecida" );
	linhavazia ( );
	break;
}

}
while ( opcao != 0 );


println ( "Encerramento do programa" );
println ( "Aperte ENTER para terminar o programa" );
getchar ();
return ( 0 );
}



