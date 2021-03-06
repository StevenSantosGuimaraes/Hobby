#ifndef _MAPA_H_
#define _MAPA_H_

#define PERSONAGEM_PRINCIPAL '@'
#define PERSONAGEM_FANTASMA 'F'
#define ESPACO_PODER 'P'
#define ESPACO_VAZIO '.'
#define PAREDE_VERTICAL '|'
#define PAREDE_HORIZONTAL '-'

struct mapa{
    int linhas, colunas;
    char** matriz;
};

struct posicao{
    int x, y;
};

typedef struct mapa MAPA;
typedef struct posicao POSICAO;

void alocarMapa(MAPA* m);
void carregarMapa(MAPA* m);
void liberarMapa(MAPA* m);
void andou(MAPA* m, int xOrigem, int xDestino, int yOrigem, int yDestino);
void clonarMapa(MAPA* destino, MAPA* origem);

int encontrarPersonagem(MAPA* m, POSICAO* p, char c);
int limitesMapa(MAPA* m, int x, int y);
int encontreiParede(MAPA* m, int x, int y);
int podeAndar(MAPA* m, int x, int y, char personagem);
int buscarPersonagem(MAPA* m, int x, int y, char cPersonagem);

#endif
