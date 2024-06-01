
// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>



// Constantes
const int MAX_COLUMN = 20; // tamanho maximo (usado em matriz)


// Identificacoes do autor
void autor ()
{
    printf ( "\n%s\n", "Matricula: 855842" );
    printf ( "%s\n", "Nome: Mateus Resende Ottoni" );
    printf ( "\n" );
}


// Texto com espacamento de linha ao final
void println ( char *text)
{
    printf ( "%s\n", text);
}


// Texto com espacamento de linha no inicio e no final
void printlns ( char *text)
{
    printf ( "\n%s\n", text);
}


// Uma linha vazia
void linhavazia ( void )
{
    printf ( "\n" );
}


// Tres linhas vazias
void linhasvazias ( void )
{
    printf ( "\n" );
    printf ( "\n" );
    printf ( "\n" );
}



// Texto com linha e getchar
void pauseln ( char *text)
{
    printf ( "%s\n", text);
    getchar ();
}



// Ler valor inteiro
int readint ( char *text )
{
int x = 0;

    printf ( "%s", text);
    scanf ( "%d", &x);
    getchar ();
    return ( x );
}



// Mostrar valor inteiro
void showint ( char *texto, int valor )
{
    printf ( "\n%s%d\n", texto, valor );
}



// Ler valor double
double readdouble ( char *text )
{
double x = 0;

    printf ( "%s", text);
    scanf ( "%lf", &x);
    getchar ();
    return ( x );
}



// Mostrar valor double
void showdouble ( char *texto, double valor )
{
    printf ( "\n%s%lf\n", texto, valor );
}



// Ler valor boolean
bool readbool ( char *text )
{
int x = 0;

    printf ( "%s", text);
    scanf ( "%d", &x);
    getchar ();
    return ( x != 0 );
}



// Mostrar valor boolean
void showbool ( char *texto, int valor )
{
    printf ( "\n%s%d\n", texto, valor );
}



// Ler caracter
char readchar ( char *text )
{
char x = '0';
char y = '0';

    printf ( "%s", text);

    x = getchar ();
    do
    {
        y = getchar ();
    }
    while ( y != '\n' );
    
    return ( x );
}



// Mostrar caracter
void showchar ( char *texto, char caractere )
{
    printf ( "\n%s%c\n", texto, caractere );
}




/*			(É para colocar no programa, não referenciar)
// Ler string		(Atualmente desabilitado pois não funciona bem)
char* readpalavra ( char *texto )
{
char palavra [81];
int tamanho = 0;


printf ( "\n%s", "Digite um texto: " );
fgets (palavra, 81, stdin);


tamanho = strlen (palavra) - 1;
palavra [tamanho] = '\0';

return ( palavra );
}
*/




// Mostrar string
void showstring ( char *texto, char *string )
{
    printf ( "\n%s%s\n", texto, string );
}






// Definir quantidade de digitos pares em uma string
int comparacao_pares_quant ( char *texto)
{
// Definicao de dados
    char c;
    int c_digitos = 0;
    int tamanho = 0;
    int contagem = 0;
    int digitos = 0;
    int n_par = 0;


// Analise de cada letra
    n_par = 0;
    tamanho = strlen (texto);
    for ( contagem = 0; contagem < tamanho; contagem = contagem + 1)
        {
        c = texto [contagem];
        if (c >= '1' && c <= '9' )
            {
            digitos = digitos + 1;
	    c_digitos = (int) c;
	    if ( (c_digitos % 2 == 0) || ( c_digitos == 0 ) )
            	{
                n_par = n_par + 1;
                }
            }
        }

return ( n_par );
}





// Comparação dos caracteres em uma string a um caractere maiusculo
int comparacao_1caracteremaiusculo_quant ( char *texto, char x )
{
// Definicao de dados
    char c;
    int tamanho = 0;
    int contagem = 0;
    int maiusculas = 0;
    int maiores_x = 0;


// Analise de cada letra
    maiores_x = 0;
    tamanho = strlen (texto);
    for ( contagem = 0; contagem < tamanho; contagem = contagem + 1)
        {
        c = texto [contagem];
        if (c >= 'A' && c <= 'Z' )
            {
            maiusculas = maiusculas + 1;
            if (c > x)
                {
                maiores_x = maiores_x + 1;
                }
            }
        }


return ( maiores_x );
}





// Comparação dos caracteres em uma string a um caractere maiusculo e um caractere minusculo
int comparacao_2caracteremaiusculominusculo_quant ( char *texto, char maiuscula, char minuscula)
{
// Definicao de dados
    char c;
    int tamanho = 0;
    int contagem = 0;
    int maiusculas = 0;
    int minusculas = 0;
    int menores_X = 0;
    int menores_y = 0;
    int menores_Xy = 0;


// Analise de cada letra
    menores_X = 0;
    menores_y = 0;
    tamanho = strlen (texto);
    for ( contagem = 0; contagem < tamanho; contagem = contagem + 1)
        {
        c = texto [contagem];
        if (c >= 'A' && c <= 'Z' )
            {
            maiusculas = maiusculas + 1;
            if (c < maiuscula)
                {
                menores_X = menores_X + 1;
                }
            }
        if (c >= 'a' && c <= 'z' )
            {
            minusculas = minusculas + 1;
            if (c < minuscula)
                {
                menores_y = menores_y + 1;
                }
            }
        }

// Somar valores
menores_Xy = menores_X + menores_y;


return ( menores_Xy );
}





// Comparação dos caracteres em uma string a um caractere maiusculo
void comparacao_1caracteremaiusculo_string ( char *texto, char x )
{
// Definicao de dados
    char c;
    char c_convertido [80];
    int tamanho = 0;
    int contagem = 0;
    int maiusculas = 0;
    char c_maiores_x [80];
    char *espaco = " ";


// Analise de cada letra
    tamanho = strlen (texto);
    c_maiores_x [0] = '\0';
    for ( contagem = 0; contagem < tamanho; contagem = contagem + 1)
        {
        c = texto [contagem];
        if (c >= 'A' && c <= 'Z' )
            {
            maiusculas = maiusculas + 1;
            if (c > x)
                {
                sprintf (c_convertido, "%c", c);
                strcat (c_maiores_x, strcat (c_convertido, espaco));
                }
            }
        }
linhavazia ();
printf ("\nCaracteres maiores que L: %s", c_maiores_x );
}




// Comparação dos caracteres em uma string a um caractere maiusculo e um minusculo
void comparacao_2caracteremaiusculominusculo_string ( char *texto, char maiusculo, char minusculo )
{
// Definicao de dados
    char c;
    char c_convertido [80];
    int tamanho = 0;
    int contagem = 0;
    char c_menores_xy [80];
    char *espaco = " ";


// Analise de cada letra
    tamanho = strlen (texto);
    c_menores_xy [0] = '\0';
    for ( contagem = 0; contagem < tamanho; contagem = contagem + 1)
        {
        c = texto [contagem];
        if (c >= 'A' && c <= 'Z' )
            {
            if (c < maiusculo)
                {
                sprintf (c_convertido, "%c", c);
                strcat (c_menores_xy, strcat (c_convertido, espaco));
                }
            }
        if (c >= 'a' && c <= 'z' )
            {
            if (c < minusculo)
                {
                sprintf (c_convertido, "%c", c);
                strcat (c_menores_xy, strcat (c_convertido, espaco));
                }
            }
        }
linhavazia ();
printf ("\nCaracteres menores que '%c' e '%c': %s", maiusculo, minusculo, c_menores_xy );
}



// Certificar caracteres nao alfanumericos em uma string
void comparacao_naoalfanumerico_string ( char *texto )
{
// Definicao de dados
    char c;
    char c_convertido [80];
    int tamanho = 0;
    int contagem = 0;
    char c_n_alfanumericos [80];
    char *espaco = " ";


// Analise de cada letra
    tamanho = strlen (texto);
    c_n_alfanumericos [0] = '\0';
    for ( contagem = 0; contagem < tamanho; contagem = contagem + 1)
        {
        c = texto [contagem];
        if (! ( (c >= 'A' && c <= 'Z' ) || (c >= 'a' && c <= 'z' ) || (c >= '1' && c <= '9' ) ) )
            {
                sprintf (c_convertido, "%c", c);
                strcat (c_n_alfanumericos, strcat (c_convertido, espaco));
            }
        }
linhavazia ();
printf ("\nCaracteres nao alfanumericos: %s", c_n_alfanumericos );
}





// Certificar caracteres alfanumericos em uma string
void comparacao_alfanumerico_string ( char *texto )
{
// Definicao de dados
    char c;
    char c_convertido [80];
    int tamanho = 0;
    int contagem = 0;
    char c_alfanumericos [80];
    char *espaco = " ";


// Analise de cada letra
    tamanho = strlen (texto);
    c_alfanumericos [0] = '\0';
    for ( contagem = 0; contagem < tamanho; contagem = contagem + 1)
        {
        c = texto [contagem];
        if  ( (c >= 'A' && c <= 'Z' ) || (c >= 'a' && c <= 'z' ) || (c >= '1' && c <= '9' ) )
            {
                sprintf (c_convertido, "%c", c);
                strcat (c_alfanumericos, strcat (c_convertido, espaco));
            }
        }
linhavazia ();
printf ("\nCaracteres alfanumericos: %s", c_alfanumericos );
}




// Certificar caracteres alfanumericos em uma string
int comparacao_alfanumerico_quantstring ( char *texto )
{
// Definicao de dados
    char c;
    char c_convertido [80];
    int tamanho = 0;
    int contagem = 0;
    char c_alfanumericos [80];
    char *espaco = " ";
    int n_alfanumericos = 0;


// Analise de cada letra
    tamanho = strlen (texto);
    n_alfanumericos = 0;
    c_alfanumericos [0] = '\0';
    for ( contagem = 0; contagem < tamanho; contagem = contagem + 1)
        {
        c = texto [contagem];
        if  ( (c >= 'A' && c <= 'Z' ) || (c >= 'a' && c <= 'z' ) || (c >= '1' && c <= '9' ) )
            {
		n_alfanumericos = n_alfanumericos + 1;
                sprintf (c_convertido, "%c", c);
                strcat (c_alfanumericos, strcat (c_convertido, espaco));
            }
        }
linhavazia ();
printf ("\nCaracteres alfanumericos: %s", c_alfanumericos );
printf ("\nQuantidade de simbolos alfanumericos: %d\n", n_alfanumericos );

return ( n_alfanumericos );
}


/*
  Mostrar valores (apenas numericos) em arranjo
  @param n     - quantidade de dados no arranjo
  @param array - arranjo lido
*/
void show_int_array ( int array [ ], int n)
{
// Dados
    int x = 0;
    int y = 0;

// Acoes
// Mostrar array
for (x = 0; x <= n-1 ; x = x + 1)
    {
    y = array [x];
    printf ("\nArray [%d] = %d", x, y);
    }
    
}



/*
  Gravar valores (numericos) de arranjos em arquivo
  @param filename - nome do arquivo
  @param array    - arranjo com dados
  @param n        - quantidade de dados
*/
void fprint_column_int_array ( char filename [ ], int array [ ], int n )
{
// Dados
int x = 0, y = 0;
    
// Abrir arquivo para gravar texto
    FILE *arquivo = fopen ( filename, "wt" );

// Acoes
    fprintf (arquivo, "Numero de elementos: %d", n);
for (x = 0; x < n ; x = x + 1)
    {
    // Ler valor do array
    y = array [x];
    // Incluir valor no arquivo
    fprintf (arquivo, "\n[%d] - %d", x, y);
    }
    
 // Fechar arquivo 
    fclose ( arquivo );
}




/*
  Ler valores (numericos) para arranjo de um arquivo e retornar quantidade lida.
  @return arranjo lido
  @param filename - nome do arquivo
  @param array    - arranjo com dados
  @param m        - quantidade maxima de dados
*/

int n_fscan_int_array ( char filename [ ], int array [], int m )
{
 // Dados
    int x = 0, y = 0, n = 0;
 // Abrir arquivo para ler texto
    FILE *arquivo = fopen ( filename, "rt" );

    fscanf ( arquivo, "%d", &y );
    while ( x < m && ! feof (arquivo))
    {
    // Incluir valor no array
    array [x] = y;
    // Ler valor do arquivo
    fscanf ( arquivo, "%d", &y );
    // Aumentar n
    n = n + 1;
    // Mudar x para progredir
    x = x + 1;
    }

    
 // Fechar arquivo 
    fclose ( arquivo );

return ( n );
}


// Definir matriz e reservar espaco
void newdoublematrix( double matrix [][MAX_COLUMN], int linhas, int colunas )
    {
    matrix = malloc (linhas * sizeof(double));
    for ( int x = 0; x < colunas; x = x + 1 )
	{
	matrix = malloc (colunas * sizeof(double));
	}
    }
// Definir matriz e reservar espaco
void newintmatrix( int matrix [][MAX_COLUMN], int linhas, int colunas )
    {
    matrix = malloc (linhas * sizeof(int));
    for ( int x = 0; x < colunas; x = x + 1 )
	{
	matrix = malloc (colunas * sizeof(int));
	}
    }




/*
  Metodo para mostrar valores em matriz.
  @param m      - quantidade de linhas
  @param n      - quantidade de colunas
  @param matrix - matriz onde guardar
*/
void print_int_matrix ( int m, int n, int matrix [ ][MAX_COLUMN] )
{
// Dados
     int x = 0, y = 0;
    
     for ( x=0; x<m; x=x+1 )
     {   for ( y=0; y<n; y=y+1 )
         {   printf ( "%d\t", matrix [x][y] );  }
         printf ( "\n" );
     }
}


/*
  Metodo para mostrar valores em matriz.
  @param m      - quantidade de linhas
  @param n      - quantidade de colunas
  @param matrix - matriz onde guardar
*/
void print_double_matrix ( int m, int n, double matrix [ ][MAX_COLUMN] )
{
// Dados
     int x = 0, y = 0;
    
     for ( x=0; x<m; x=x+1 )
     {   for ( y=0; y<n; y=y+1 )
         {   printf ( "%lf\t", matrix [x][y] );  }
         printf ( "\n" );
     }
} 


/*
    Funcao para ler valores ate que tal seja maior que 0
*/
int scan_int_positive (char *textodescritivo)
{
// Dados
    int valor = 0;


do {
    valor = readint (textodescritivo); }
while (valor <= 0);    


return (valor);
}


/*
  Funcao para ler valores para matriz.
  @param m      - quantidade de linhas
  @param n      - quantidade de colunas
  @param matrix - matriz onde guardar
*/
void scan_int_arraytomatrix ( int m, int n, int matrix [ ][MAX_COLUMN] )
{
 // Dados locais
    int x = 0, y = 0, valor = 0;

for ( x=0; x<m; x=x+1 )
    {for ( y=0; y<n; y=y+1 )
        {
        printf ("\nDetermine [linha %d] [coluna %d]", x, y);
        scanf ("%d", &valor);
        getchar ();
        matrix [x][y] = valor;
        }
    }
}



/*
  Funcao para ler valores para matriz.
  @param m      - quantidade de linhas
  @param n      - quantidade de colunas
  @param matrix - matriz onde guardar
*/
void scan_double_arraytomatrix_negative ( int m, int n, double matrix [ ][MAX_COLUMN] )
{
 // Dados locais
    int x = 0, y = 0;
    double valor = 0;

for ( x=0; x<m; x=x+1 )
    {for ( y=0; y<n; y=y+1 )
        {
        do {
            printf ("\nDetermine [linha %d] [coluna %d]: ", x, y);
            scanf ("%lf", &valor);
            getchar ();
		//println ("Teste 1");
            matrix [x][y] = valor;
		//println ("Teste 2");
            }
        while (valor >= 0);
        }
    }
}



/*
  Metodo para ler de arquivo valores para matriz.
  @param filename - nome do arquivo
  @param m      - quantidade de linhas
  @param n      - quantidade de colunas
  @param matrix - matriz onde guardar
*/
void fscan_double_matrix
    ( char filename [ ], 
      int m, int n, double matrix [ ][MAX_COLUMN] )
{
// Definir dados
int x = 0, y = 0;
double valor = 0;
    
// abrir arquivo para ler texto
FILE *arquivo = fopen ( filename, "r" );


for ( x=0; x<m; x=x+1 )
    {for ( y=0; y<n; y=y+1 )
        {
        fscanf ( arquivo, "%lf", &valor );
        matrix [x][y] = valor;  }
    fscanf(arquivo, "%*[^\n]");
    }
    
 // fechar arquivo 
    fclose ( arquivo );

} // end n_fscan_int_matrix( )






/*
  Metodo para gravar em arquivo valores em matriz.
  @param filename - nome do arquivo
  @param m      - quantidade de linhas
  @param n      - quantidade de colunas
  @param matrix - matriz onde guardar
*/
void fprint_int_matrix
    ( char filename [ ], 
      int m, int n, int matrix [ ][MAX_COLUMN] )
{
// Dados
int x = 0, y = 0;

// Abrir arquivo
FILE *arquivo = fopen ( filename, "w" );

    
for ( x=0; x<m; x=x+1 )
    {for ( y=0; y<n; y=y+1 )
        {   fprintf ( arquivo, "%d\t", matrix [x][y] );  }
     fprintf ( arquivo, "\n" );
    }
    
 // fechar arquivo 
    fclose ( arquivo );
}


/*
  Metodo para gravar em arquivo valores em matriz.
  @param filename - nome do arquivo
  @param m      - quantidade de linhas
  @param n      - quantidade de colunas
  @param matrix - matriz onde guardar
*/
void fprint_double_matrix
    ( char filename [ ], 
      int m, int n, double matrix [ ][MAX_COLUMN] )
{
// Dados
int x = 0, y = 0;

// Abrir arquivo
FILE *arquivo = fopen ( filename, "w" );

    
for ( x=0; x<m; x=x+1 )
    {for ( y=0; y<n; y=y+1 )
        {   fprintf ( arquivo, "%lf\t", matrix [x][y] );  }
     fprintf ( arquivo, "\n" );
    }
    
 // fechar arquivo 
    fclose ( arquivo );
}


/*
  Metodo para mostrar diagonal de uma matriz
  @param linhas      - quantidade de linhas
  @param colunas      - quantidade de colunas
  @param matrix - matriz lida
*/
void print_diagonal_doublematrix ( int linhas, int colunas, double matrix [ ][MAX_COLUMN] )
{
// Dados
int x = 0, y = 0;
double valor = 0.0;

if (colunas == linhas)
    {
    for (x = 0; x < linhas; x = x + 1)
	{
	printf ("\n");
	for (y = 0; y < colunas; y = y + 1)
	    {
	    if (x == y)
		{ valor = matrix [x] [y];
		  printf ("%.2lf", valor);  }
	    printf ("\t");
	    }
	}
    }
else
    {    println ("A matriz nao e quadrada");    }
}


/*
  Metodo para mostrar diagonal e abaixo de uma matriz
  @param linhas      - quantidade de linhas
  @param colunas      - quantidade de colunas
  @param matrix - matriz lida
*/
void print_diagonaldown_doublematrix ( int linhas, int colunas, double matrix [ ][MAX_COLUMN] )
{
// Dados
int x = 0, y = 0;
double valor = 0.0;

if (colunas == linhas)
    {
    for (x = 0; x < linhas; x = x + 1)
	{
	printf ("\n");
	for (y = 0; y < colunas; y = y + 1)
	    {
	    valor = matrix [x] [y];
	    if (x >= y)
		{  printf ("%.2lf", valor);  }
	    printf ("\t");
	    }
	}
    }
else
    {    println ("A matriz nao e quadrada");    }
}


/*
  Metodo para mostrar diagonal e abaixo de uma matriz
  @param linhas      - quantidade de linhas
  @param colunas      - quantidade de colunas
  @param matrix - matriz lida
*/
void print_diagonalup_doublematrix ( int linhas, int colunas, double matrix [ ][MAX_COLUMN] )
{
// Dados
int x = 0, y = 0;
double valor = 0.0;

if (colunas == linhas)
    {
    for (x = 0; x < linhas; x = x + 1)
	{
	printf ("\n");
	for (y = 0; y < colunas; y = y + 1)
	    {
	    valor = matrix [x] [y];
	    if (x <= y)
		{  printf ("%.2lf", valor);  }
	    printf ("\t");
	    }
	}
    }
else
    {    println ("A matriz nao e quadrada");    }
}


/*
  Metodo para mostrar diagonal secundaria de uma matriz
  @param linhas      - quantidade de linhas
  @param colunas      - quantidade de colunas
  @param matrix - matriz lida
*/
void print_diagonal2_doublematrix ( int linhas, int colunas, double matrix [ ][MAX_COLUMN] )
{
// Dados
int x = 0, y = 0;
double valor = 0.0;

if (colunas == linhas)
    {
    for (x = 0; x < linhas; x = x + 1)
	{
	printf ("\n");
	for (y = 0; y < colunas; y = y + 1)
	    {
	    if (x + y == linhas - 1)
		{ valor = matrix [x] [y];
		  printf ("%.2lf", valor);  }
	    printf ("\t");
	    }
	}
    }
else
    {    println ("A matriz nao e quadrada");    }
}

/*
  Metodo para mostrar diagonal secundaria de uma matriz
  @param linhas      - quantidade de linhas
  @param colunas      - quantidade de colunas
  @param matrix - matriz lida
*/
void print_diagonal2down_doublematrix ( int linhas, int colunas, double matrix [ ][MAX_COLUMN] )
{
// Dados
int x = 0, y = 0;
double valor = 0.0;

if (colunas == linhas)
    {
    for (x = 0; x < linhas; x = x + 1)
	{
	printf ("\n");
	for (y = 0; y < colunas; y = y + 1)
	    {
	    valor = matrix [x] [y];
	    if (x + y >= linhas - 1)
		{  printf ("%.2lf", valor);  }
	    printf ("\t");
	    }
	}
    }
else
    {    println ("A matriz nao e quadrada");    }
}


/*
  Metodo para mostrar diagonal secundaria de uma matriz
  @param linhas      - quantidade de linhas
  @param colunas      - quantidade de colunas
  @param matrix - matriz lida
*/
void print_diagonal2up_doublematrix ( int linhas, int colunas, double matrix [ ][MAX_COLUMN] )
{
// Dados
int x = 0, y = 0;
double valor = 0.0;

if (colunas == linhas)
    {
    for (x = 0; x < linhas; x = x + 1)
	{
	printf ("\n");
	for (y = 0; y < colunas; y = y + 1)
	    {
	    valor = matrix [x] [y];
	    if (x + y <= linhas - 1)
		{  printf ("%.2lf", valor);  }
	    printf ("\t");
	    }
	}
    }
else
    {    println ("A matriz nao e quadrada");    }
}



/*
  Metodo para testar se valores acima da diagonal de uma matriz sao zero
  @param linhas      - quantidade de linhas
  @param colunas      - quantidade de colunas
  @param matrix - matriz lida
*/
bool bool_allzero_updiagonal_doublematrix ( int linhas, int colunas, double matrix [ ][MAX_COLUMN] )
{
// Dados
int x = 0, y = 0;
double valor = 0.0;
bool allzero = true;

if (colunas == linhas)
    {
    for (x = 0; x < linhas; x = x + 1)
	{
	for (y = 0; y < colunas; y = y + 1)
	    {
	    valor = matrix [x] [y];
	    if (x > y)
		{
		if ( valor != 0 )
		    { allzero = false; }
		}
	    }
	}
    }
else
    {    println ("A matriz nao e quadrada");    }

return ( allzero );
}


/*
  Metodo para testar se valores abaixo da diagonal de uma matriz sao zero
  @param linhas      - quantidade de linhas
  @param colunas      - quantidade de colunas
  @param matrix - matriz lida
*/
bool bool_allzero_downdiagonal_doublematrix ( int linhas, int colunas, double matrix [ ][MAX_COLUMN] )
{
// Dados
int x = 0, y = 0;
double valor = 0.0;
bool allzero = true;

if (colunas == linhas)
    {
    for (x = 0; x < linhas; x = x + 1)
	{
	for (y = 0; y < colunas; y = y + 1)
	    {
	    valor = matrix [x] [y];
	    if (x < y)
		{
		if ( valor != 0 )
		    { allzero = false; }
		}
	    }
	}
    }
else
    {    println ("A matriz nao e quadrada");    }

return ( allzero );
}

