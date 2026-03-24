# Programação Imperativa e Funcional - 2026.1

Repositório de exercícios e exemplos da disciplina **Programação Imperativa e Funcional (PIF)**, semestre 2026.1.

**Autor:** Renan Costa Alencar

## Estrutura do Projeto

```
src/
  exemplos/                 # Exemplos de sala de aula
    exemplo_<topico>.c
  exercicios_propostos/     # Exercicios do livro-texto
    ascencio_p<pagina>_q<questao>[<variante>].c
```

Cada arquivo `.c` e um programa independente (compilação individual, sem linkagem entre arquivos).

**Livro-texto:** Ascencio, Fernanda — *Fundamentos da Programação de Computadores*.

## Pre-requisitos

- **GCC** (GNU Compiler Collection)
  - Windows: instalar via [Chocolatey](https://chocolatey.org/) com `choco install mingw`
  - Linux: `sudo apt install gcc` (Debian/Ubuntu) ou equivalente
  - macOS: `xcode-select --install`

## Como Compilar

### Linha de comando

```bash
# Windows
gcc -fdiagnostics-color=always -g -Wall -Wextra "arquivo.c" -o "arquivo.exe"

# Linux / macOS
gcc -fdiagnostics-color=always -g -Wall -Wextra "arquivo.c" -o "arquivo"
```

### VS Code

Abra o arquivo `.c` desejado e pressione `Ctrl+Shift+B`. As tarefas de build estão
configuradas em `.vscode/tasks.json` para Windows e Linux/macOS.

## Como Executar

```bash
# Windows
.\nome_do_programa.exe

# Linux / macOS
./nome_do_programa
```

Os programas leem entrada via `scanf`, entao e necessário fornecer dados pelo terminal.

## Tecnologias

- **Linguagem:** C (C99/C11)
- **Compilador:** GCC
- **IDE:** Visual Studio Code
- **Bibliotecas:** apenas a biblioteca padrão do C (`stdio.h`, `locale.h`, etc.)
