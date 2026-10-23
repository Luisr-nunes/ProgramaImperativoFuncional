# Programação Imperativa e Funcional

<!-- badges -->
![C](https://img.shields.io/badge/C-A8B9CC?style=flat-square&logo=c&logoColor=white) ![GCC](https://img.shields.io/badge/GCC-A42E2B?style=flat-square&logo=gnu&logoColor=white)

[Read in English](README.en.md)

Exercícios em C da disciplina de Programação Imperativa e Funcional (PIF), semestre 2026.1, incluindo aulas, listas avaliativas, questões do livro-texto e cursos complementares de C.

## Conteúdo

| Pasta | Conteúdo |
| --- | --- |
| `CLASS/AULA_03_03` | Primeiros exercícios em aula e `switch/case` |
| `CLASS/AULA_05_05` | Calculadora e simulação de semáforo |
| `CLASS/AULA_12_05` | Seis exercícios práticos da aula |
| `HOMEWORK/listaDeExercicios1`, `listaDeExercicio2`, `listaDeExercicio3` | Listas de exercícios avaliativas |
| `exercicios/` | Questões do livro de Ascencio (*Fundamentos da Programação de Computadores*), identificadas por página e número, como `ascencio_p150_q24.c` |
| `COURSES/2026.1.BP2.C_ESSENTIALS1` | Curso C Essentials 1, módulos 1 a 5: operadores, fluxo de controle, entrada e saída, conversões, laços, vetores, bubble sort, ponteiros, strings, matrizes e memória dinâmica |
| `COURSES/2026.1AP.C_FUNDAMENTALS1` | Curso C Fundamentals 1 |

## Conteúdos praticados

- Tipos, variáveis e operadores
- Decisão (`if`, `switch`) e repetição (`for`, `while`, `do-while`)
- Funções, parâmetros e escopo
- Vetores, matrizes e strings
- Ponteiros e a relação entre ponteiros e vetores
- Alocação dinâmica (`malloc`, `free`)
- Ordenação com bubble sort

## Como executar

Pré-requisito: GCC (no Windows, MinGW ou WSL).

```bash
git clone https://github.com/Luisr-nunes/ProgramaImperativoFuncional.git
cd ProgramaImperativoFuncional

gcc -Wall CLASS/AULA_05_05/calculadora.c -o calculadora
./calculadora
```

Os arquivos `.exe`, `.obj`, `.pdb` e `.ilk` presentes em algumas pastas são binários gerados no Windows e não são necessários para compilar.

## Autor

Luís Nunes — [GitHub](https://github.com/Luisr-nunes) · [LinkedIn](https://www.linkedin.com/in/luis-nunes-dev/)

Projeto acadêmico do curso de Análise e Desenvolvimento de Sistemas da Cesar School.
