# Jogo com Recursividade

Atividade Avaliativa 1 — Estrutura de Dados 2026-02 — UTFPR
Professor: Clayton Kossoski
Tema: aplicar recursividade em um jogo

## Integrantes
 Jad Martins de Lima

### 1. `adivinha.c` — Adivinhe o Número 

O jogador pensa em um número de 1 a 9. O computador tenta adivinhar
usando busca binária recursiva, cortando o intervalo pela metade a cada
tentativa.

**Onde está a recursão:** função `adivinhar(limiteInferior, limiteSuperior, tentativa)`.
Ela chama a si mesma passando um intervalo cada vez menor, conforme a
resposta do jogador ('m' = maior, 'n' = menor, 'a' = acertou). O caso base
é o jogador confirmar o acerto.

## Estrutura do repositório

```
.
├── adivinha.c    #  adivinhação com busca binária recursiva
└── README.md     # este arquivo
```
