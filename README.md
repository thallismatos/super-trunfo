# Batalha de Cartas no Super Trunfo - Desafios em C

Este repositório contém a implementação de três níveis do desafio **Batalha de Cartas no Super Trunfo** em linguagem C. Cada nível incrementa funcionalidades e complexidade, preparando para a batalha final entre cartas da matéria de Introdução à Programação da Faculdade de Ciência da Computação.

---

## Desafios

### Nível Novato

- Entrada dos dados de duas cartas.
- Armazenamento e exibição dos dados básicos (estado, código, nome da cidade, população, área, PIB e pontos turísticos).
- Sem cálculos adicionais.

### Nível Aventureiro

- Mantém tudo do nível novato.
- Calcula e exibe **densidade populacional** (população / área).
- Calcula e exibe **PIB per capita** (PIB em reais dividido pela população).

### Nível Mestre

- População armazenada como **unsigned long int** para números maiores.
- Mantém todos os cálculos do nível aventureiro.
- Calcula o **Super Poder** de cada carta, que é a soma de todos os atributos numéricos, incluindo o inverso da densidade populacional (quanto menor a densidade, maior o poder).
- Compara as duas cartas atributo por atributo:
  - Para todos os atributos, exceto densidade, vence o maior valor.
  - Para densidade populacional, vence o menor valor.
- Exibe o resultado das comparações indicando qual carta venceu cada atributo (1 para Carta 1, 0 para Carta 2).

---

## Como usar

### Requisitos

- Um compilador C instalado (como gcc).
- No PC, Linux, macOS ou Windows com WSL.
- No celular, pode usar o app **Termux** (Android) ou apps que permitam compilar e executar código C.

---

### Passo a passo para compilar e executar

1. **Abra o terminal (ou Termux no celular).**

2. **Navegue até a pasta onde estão os arquivos `.c`.**

3. **Compile o código do nível desejado usando o gcc:**

```bash
gcc novato.c -o novato
gcc aventureiro.c -o aventureiro
gcc mestre.c -o mestre