/*
XADREZ
Márcio A. Siena - Matrícula 202104552807

Este é o desafio do módulo "3. Movimentação de Peças de Xadrez".

A versão mais atual sempre chama-se xadrez.c.
Para referência, as versões anteriores são salvas em arquivos chamados "xadrez_N_descricao.c", como em "xadrez_1_novato.c".

CONSIDERAÇÕES 

[1]
O tabuleiro de xadrez usará a seguinte convenção, baseada na notação padrão
(https://pt.wikipedia.org/wiki/Tabuleiro_(xadrez):

A. A notação será sempre do ponto de vista do jogador de peças brancas, para quem a
diagonal branca inicia à sua direita, linha 1.

B. Cada "casa" do tabuleiro será indicada por um string de 3 caracteres no formato
"LC\0", onde:
- L é a linha, de 1 a 8;
- C é a coluna, de 1 a 8, correspondendo às colunas de "A" a "H".
- \0 é o null terminator.
Perceba que os números são realmente os valores inteiros. Por exemplo, em '13',
correspondente à linha 1, coluna "C", o é o byte de valor numérico 1, e não o valor 49
correspondente ao *caractere* '1' da tabela ASCII 49.

^      Jogador das pretas
^       >>>>>>>>>> COLUNAS >>>>>>>>>>
^       A   B   C   D   E   F   G   H
^    8                                 8
L    7                                 7
I    6                                 6
N    5                                 5
H    4                                 4
A    3                                 3
S    2                                 2
^    1                                 1
^       A   B   C   D   E   F   G   H
^       >>>>>>>>>> COLUNAS >>>>>>>>>>
^       Jogador das brancas

Última versão:
Versão 1 - nível novato

Mensagem de commit (para referência):
Desafio: nível novato
Criando o jogo de xadrez
Esta é a versão final do nível novato.
*/


#include <stdio.h>
#include <string.h>

/*
Auxiliar de exibição das colunas: numero de 1 a 8 para letra de 'A' a 'H';
O primeiro índice válido é o 1, da letra "A". O ponto é apenas para fornecer
o deslocamento em relação ao offset 0.
*/
char tab_conv_coluna_numero_para_letra[] = ".ABCDEFGH";


/*
Imprime uma posição, seguida de um texto explicativo
*/
void imprime_posicao (char *posicao, char *texto)
{
  int linha = posicao[0];
  char coluna = tab_conv_coluna_numero_para_letra[ posicao[1] ];
  printf("%d%c : %s\n", linha, coluna, texto);
}


int main ()
{


  printf("\n********** DESAFIO: JOGO DE XADREZ - NOVATO **********\n\n");

  char torre_pos[] = {1, 1}; // linha 1 coluna A
  char bispo_pos[] = {3, 1}; // linha 3 coluna A
  char rainha_pos[] = {4, 8}; // linha 4 coluna H
  
  int i;
  int n_movimentos;
  
  // Movimentação da torre 5 casas para a direita
  //
  printf("\nMove a torre 5 casas para a direita...\n\n");
  imprime_posicao(torre_pos, "Torre posição inicial");
  n_movimentos = 5;
  for (i = 0; i < n_movimentos; ++i) {
    torre_pos[1]++; // avança coluna
    imprime_posicao(torre_pos, "Direita");
  }

  // Movimentação do bispo torre 5 casas para cima e para a direita
  //
  printf("\nMove o bispo 5 casas para cima e para a direita...\n\n");
  imprime_posicao(bispo_pos, "Bispo posição inicial");
  n_movimentos = 5;
  i = 0;
  while (i < n_movimentos) {
    bispo_pos[0]++; // avança linha
    bispo_pos[1]++; // avança coluna
    imprime_posicao(bispo_pos, "Cima, Direita");
    ++i;
  }

  // Movimentação da rainha 7 casas para cima e para a esquerda
  // O enunciado pede 8 mas dado que o tabuleiro é 8x8, qualquer peça tem,
  // no máximo, 7 casas em qualquer direção.
  //
  printf("\nMove a rainha 7 casas para a esquerda...\n\n");
  imprime_posicao(rainha_pos, "Rainha posição inicial");
  n_movimentos = 7;
  i = 0;
  do {
    rainha_pos[1]--; // retrocede coluna
    imprime_posicao(rainha_pos, "Esquerda");
    ++i;
  } while (i < n_movimentos);


  printf("\n");

} // main()
