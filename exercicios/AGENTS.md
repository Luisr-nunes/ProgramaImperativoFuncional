# AGENTS.md — Coding Agent Instructions

## Project Overview

University coursework repository for **Programacao Imperativa e Funcional (PIF) — 2026.1**.
Language: **C** (standard C99/C11), compiled with **GCC**.
Author: Renan Costa Alencar.

Each `.c` file is a standalone single-file program (no multi-file linking).
Programs solve textbook exercises (Ascencio, Fernanda) or demonstrate classroom examples.

## Repository Structure

```
src/
  exemplos/                 # Classroom examples
    exemplo_<topic>.c
  exercicios_propostos/     # Textbook exercises
    ascencio_p<page>_q<question>[<variant>].c
```

- All source lives under `src/`.
- Compiled `.exe` binaries sit alongside their source files.
- There is no `Makefile`, `CMakeLists.txt`, or other build system — only VS Code tasks.

## Build Commands

### Compile a single file (command line)

**Windows (Chocolatey GCC):**
```bash
gcc -fdiagnostics-color=always -g -Wall -Wextra "<file>.c" -o "<file>.exe"
```

**Linux / macOS:**
```bash
gcc -fdiagnostics-color=always -g -Wall -Wextra "<file>.c" -o "<file>"
```

- `-g` enables debug symbols.
- `-Wall -Wextra` enable comprehensive warnings (recommended; not yet in VS Code tasks).
- Always compile from the directory containing the source file, or provide full paths.

### Compile via VS Code

Use `Ctrl+Shift+B` with the active `.c` file open. Two tasks are configured in
`.vscode/tasks.json`:
- **"C/C++: gcc build active file"** — Linux/macOS (`/usr/bin/gcc`)
- **"C/C++: gcc.exe build active file"** — Windows (`C:\ProgramData\chocolatey\bin\gcc.exe`)

### Run a compiled program

```bash
# Windows
.\<name>.exe

# Linux / macOS
./<name>
```

Programs read from `stdin` via `scanf`, so they require interactive terminal input.

## Tests

There is no test framework or test suite. Programs are verified manually by running
them and checking console output against expected results.

When creating or modifying a program, verify correctness by compiling and running it
with representative inputs, including edge cases and invalid inputs.

## Code Style Guidelines

### Language and Locale

- All variable names, output strings, and comments are in **Portuguese (Brazilian)**.
- Some files call `setlocale(LC_ALL, "Portuguese")` to enable accented characters in
  console output. Use this when the program prints Portuguese text with accents.

### Indentation and Braces

- **4 spaces** for indentation (no tabs).
- **Allman / BSD brace style** — opening brace on its own line:

```c
int main()
{
    if (x > 0)
    {
        // ...
    }
    else
    {
        // ...
    }
}
```

- `switch` `case` labels are **not indented** relative to the switch brace:

```c
switch (valor)
{
case 1:
    printf("Um\n");
    break;
case 2:
    printf("Dois\n");
    break;
default:
    printf("Outro\n");
}
```

### Naming Conventions

| Entity       | Convention              | Example                        |
|------------- |------------------------ |------------------------------- |
| Variables    | camelCase (Portuguese)  | `valorUnitario`, `juros`       |
| Functions    | camelCase               | (only `main` exists so far)    |
| Source files | snake_case, lowercase   | `exemplo_switch.c`             |
| Directories  | snake_case, lowercase   | `exercicios_propostos/`        |

### Includes

- Use angle-bracket includes for standard library headers: `#include <stdio.h>`
- `stdio.h` is always the first include.
- Additional headers follow on subsequent lines, one per line.
- No blank line between the file header comment and the first `#include`.

```c
/*
 * Description here
 */
#include <stdio.h>
#include <locale.h>
```

### File Header Comment

Every `.c` file **must** start with a block comment in this format:

```c
/*
 * <Description or textbook reference>
 * <Brief description of what the program does>
 * Author: Renan Costa Alencar
 * Date: YYYY-MM-DD
 * Version: 1.0
 */
```

- For exercises: first line references the source, e.g.
  `Ascencio, Fernanda. Exercicio Proposto 25 - Pagina 150`
- Date uses ISO 8601 format (`YYYY-MM-DD`).

### Variable Declarations

- Declare all variables at the **top of `main()`**, before any executable statements
  (C89/C90 style).
- Both one-per-line and comma-separated declarations are acceptable:

```c
int codigoProduto;
float valorUnitario, precoTotal;
```

### I/O Patterns

- Use `printf` for output and `scanf` for input.
- Prefer `"%d%*c"` format with `scanf` to consume the trailing newline when reading
  integers, preventing input-buffer issues on subsequent reads.
- Always print a prompt before `scanf` so the user knows what to enter.

### Error Handling

- Print a descriptive error message with `printf` when input is invalid.
- Use **early `return` with a non-zero exit code** to terminate on error:

```c
if (invalido)
{
    printf("Entrada invalida.\n");
    return 1;
}
```

- Use `return 1;` as the standard error exit code.
- `return 0;` at the end of `main()` for successful termination.

### Comments

- Use `/* ... */` block comments for file headers and multi-line explanations.
- No inline comments are currently used — rely on descriptive variable names.
- Do not use `//` single-line comments (for C89 compatibility).

## Things to Avoid

- Do **not** commit compiled binaries (`.exe`, `.o`, `.out`). These should be in
  `.gitignore`.
- Do **not** use `double` unless precision beyond `float` is explicitly required by the
  exercise.
- Do **not** add external dependencies — use only the C standard library.
- Do **not** create multi-file programs unless the exercise specifically requires it.
  Each program should be a self-contained single `.c` file.
