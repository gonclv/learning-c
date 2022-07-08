#include <stdio.h>
 
int main() {
	int horaInicial, horaFinal, duracao;
	scanf("%d%d", &horaInicial, &horaFinal);

	if (horaFinal > horaInicial) {
		duracao = horaFinal - horaInicial;
		printf("O JOGO DUROU %d HORA(S)\n", duracao);
	}
	if (horaFinal == horaInicial){
		duracao = 24;
		printf("O JOGO DUROU %d HORA(S)\n", duracao);
	}
	if (horaFinal < horaInicial) {
		duracao = (24 - horaInicial) + horaFinal;
		printf("O JOGO DUROU %d HORA(S)\n", duracao);
	}

    return 0;
}
