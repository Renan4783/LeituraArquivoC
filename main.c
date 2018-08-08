#include <stdio.h>
#include <stdlib.h>

/*
typedef struct {
 char titulo[20];
 int codLivro;
 float preco;
} regLivro;
int main (void) {
 FILE *arq ;
 regLivro livro;
 char opcao;
 if ((arq = fopen("livros.bin", "wb" )) == NULL ) {
 printf ("\nNao foi possivel abrir o arquivo \n");
 exit (1);
 }
 do {
 printf("\nTitulo: ");
 scanf("%19[^\n]%*c", livro.titulo);
 printf("\nCodigo: ");
 scanf("%d", &livro.codLivro);
 printf("\nPreco: ");
 scanf("%f%*c", &livro.preco);
 fwrite(&livro, sizeof(livro), 1, arq);
 printf("\nAdiciona outro livro (S/N)? ");
 scanf("%c%*c", &opcao);
 } while(toupper(opcao) == 'S');
 fclose (arq);
 return 0;
 }
*/

typedef struct
{
    char titulo[20];
    int codLivro;
    float preco;
} reglivro;
int main (void)
{
    FILE *arq;
    reglivro livro;
    if((arq=fopen("livros.bin", "wb"))==NULL)
    {
        printf("\n Nao foi possivel abrir o arquivo \n");
        exit(1);
    }
    while(fread(&livro, sizeof(livro), 1, arq)==1)
    {
        printf("\nTitulo:%s" livro.titulo);
        printf("\nCodigo:%d" livro.codLivro);
        printf("\nPreco:%.2f" livro.preco);
        printf("\n");
    }
    fclose(arq);
    return 0;
}
