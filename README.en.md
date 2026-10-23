# Imperative and Functional Programming

<!-- badges -->
![C](https://img.shields.io/badge/C-A8B9CC?style=flat-square&logo=c&logoColor=white) ![GCC](https://img.shields.io/badge/GCC-A42E2B?style=flat-square&logo=gnu&logoColor=white)

[Ler em Português](README.md)

C exercises from the Imperative and Functional Programming course (PIF), 2026.1 semester, including in-class work, graded exercise lists, textbook questions and supplementary C courses.

## Contents

| Folder | Content |
| --- | --- |
| `CLASS/AULA_03_03` | First in-class exercises and `switch/case` |
| `CLASS/AULA_05_05` | Calculator and traffic light simulation |
| `CLASS/AULA_12_05` | Six in-class practice exercises |
| `HOMEWORK/listaDeExercicios1`, `listaDeExercicio2`, `listaDeExercicio3` | Graded exercise lists |
| `exercicios/` | Questions from Ascencio's textbook (*Fundamentos da Programação de Computadores*), named by page and number, such as `ascencio_p150_q24.c` |
| `COURSES/2026.1.BP2.C_ESSENTIALS1` | C Essentials 1 course, modules 1 to 5: operators, control flow, input and output, conversions, loops, arrays, bubble sort, pointers, strings, matrices and dynamic memory |
| `COURSES/2026.1AP.C_FUNDAMENTALS1` | C Fundamentals 1 course |

## Topics practiced

- Types, variables and operators
- Decisions (`if`, `switch`) and loops (`for`, `while`, `do-while`)
- Functions, parameters and scope
- Arrays, matrices and strings
- Pointers and the pointer/array relationship
- Dynamic allocation (`malloc`, `free`)
- Bubble sort

## Running

Requirement: GCC (on Windows, MinGW or WSL).

```bash
git clone https://github.com/Luisr-nunes/ProgramaImperativoFuncional.git
cd ProgramaImperativoFuncional

gcc -Wall CLASS/AULA_05_05/calculadora.c -o calculadora
./calculadora
```

The `.exe`, `.obj`, `.pdb` and `.ilk` files in some folders are Windows build outputs and are not needed to compile.

## Author

Luís Nunes — [GitHub](https://github.com/Luisr-nunes) · [LinkedIn](https://www.linkedin.com/in/luis-nunes-dev/)

Academic project from the Systems Analysis and Development program at Cesar School.
