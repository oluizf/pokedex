/* arquivo: menu.c*/

#include <stdio.h>

void menu_inicial() {
    
    printf("============================================================\n");
    printf("                    POKEDEX (AED II)\n");
    printf("============================================================\n");
    printf("Comandos disponiveis:\n");
    printf("  prefixo <texto>       - Exibe ate 10 sugestoes de autocomplete\n");
    printf("  buscar <palavra>      - Lista documentos e frequencia\n");
    printf("  and <p1> <p2>         - Intersecao entre duas palavras\n");
    printf("  raiox <palavra>       - Qtd de docs (N) e altura da ABB\n");
    printf("  benchmark <p1> <p2>   - Compara Trie+ABB vs Busca Linear\n");
    printf("  sair                  - Encerra o programa\n");
    printf("------------------------------------------------------------\n");
}
