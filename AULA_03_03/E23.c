#include <stdio.h>

int main() {
	int codigo, quantidade;
	float preco_unitario, preco_total, desconto, preco_final,percentual_desconto;

	// ENTRADA DE DADOS
	printf("Digite o código do produto: ");
	scanf("%d", &codigo);

	printf("Digite a quantidade comprada: ");
	scanf("%d", &quantidade);

	// TABELA DE VALORES UNITÁRIOS
	if (codigo >= 1 && codigo <= 10) {
		preco_unitario = 10.0;
	} else if (codigo >= 11 && codigo <= 20) {
		preco_unitario = 15.0;
	} else if (codigo >= 21 && codigo <= 30) {
		preco_unitario = 20.0;
	} else if (codigo >= 31 && codigo <= 40) {
		preco_unitario = 30.0;
	} else {
		printf("Código de produto inválido!\n");
		return 1;
	}

	// CALCULO DE PREÇO TOTAL
	preco_total = preco_unitario * quantidade;

	// CALCULO DO PERCENTUAL DE DESCONTO
	if (preco_total <= 250.0) {
		percentual_desconto = 0.05;
	} else if (preco_total <= 500.0) {
		percentual_desconto = 0.10;
	} else {
		percentual_desconto = 0.15;
	}

	// CALCULO DO VALOR DO DESCONTO
	desconto = preco_total * percentual_desconto;
	// CALCULO DO PREÇO FINAL APÓS DESCONTO
	preco_final = preco_total - desconto;

	// RESULTADOS
	printf("\nPreço unitário: R$ %.2f\n", preco_unitario);
	printf("Preço total da nota: R$ %.2f\n", preco_total);
	printf("Valor do desconto: R$ %.2f\n", desconto);
	printf("Preço final após desconto: R$ %.2f\n", preco_final);

	return 0;
}
