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
Versão 3 - nível Mestre

Mensagem de commit (para referência):
Desafio: nível Mestre
Criando o jogo de xadrez
Esta é a versão final do nível Mestre.
