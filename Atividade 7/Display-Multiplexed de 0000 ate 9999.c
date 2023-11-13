#include <reg51.h>

#define SEG_A P0_0
#define SEG_B P0_1
#define SEG_C P0_2
#define SEG_D P0_3
#define SEG_E P0_4
#define SEG_F P0_5
#define SEG_G P0_6
#define DEZENA P1_0
#define UNIDADE P1_1
#define CENTENA P1_2
#define MILHAR P1_3

void tempoDelay(int tempo) {
	while (tempo--) {
    	}
}

void ligaDigito(int digito) {
	DEZENA = 1;
    	UNIDADE = 1;
    	CENTENA = 1;
    	MILHAR = 1;

    	if (digito == 1) {
    		UNIDADE = 0;
    	} 
    	else if (digito == 2) {
        	DEZENA = 0;
    	}
    	else if(digito == 3){
		CENTENA = 0;	
    	}
    	else{
    		MILHAR = 0;
    	}
}

void desativaLeds() {
	SEG_A = 1;
    	SEG_B = 1;
    	SEG_C = 1;
    	SEG_D = 1;
    	SEG_E = 1;
    	SEG_F = 1;
    	SEG_G = 1;
}

void exibeDigito(int digito) {

	if(digito == 0){
    		SEG_A = 0;
    		SEG_B = 0;
    		SEG_C = 0;
    		SEG_D = 0;
    		SEG_E = 0;
    		SEG_F = 0;
    	}
    	else if(digito == 1){
    		SEG_B = 0;
    		SEG_C = 0;
    	}
    	else if(digito == 2){
    		SEG_A = 0;
    		SEG_B = 0;
    		SEG_D = 0;
    		SEG_E = 0;
    		SEG_G = 0;
    	}
    	else if(digito == 3){
    		SEG_A = 0;
    		SEG_B = 0;
    		SEG_C = 0;
    		SEG_D = 0;
    		SEG_G = 0;
    	}
    	else if(digito == 4){
    		SEG_B = 0;
    		SEG_C = 0;
    		SEG_F = 0;
    		SEG_G = 0;
    	}
    	else if(digito == 5){
    		SEG_A = 0;
    		SEG_C = 0;
    		SEG_D = 0;
    		SEG_F = 0;
    		SEG_G = 0;
    	}
    	else if(digito == 6){
    		SEG_A = 0;
    		SEG_C = 0;
    		SEG_D = 0;
    		SEG_E = 0;
    		SEG_F = 0;
    		SEG_G = 0;
    	}
    	else if(digito == 7){
    		SEG_A = 0;
    		SEG_B = 0;
    		SEG_C = 0;
    	}
    	else if(digito == 8){
    		SEG_A = 0;
    		SEG_B = 0;
    		SEG_C = 0;
    		SEG_D = 0;
    		SEG_E = 0;
    		SEG_F = 0;
    		SEG_G = 0;
    	}
    	else{
		SEG_A = 0;
    		SEG_B = 0;
    		SEG_C = 0;
    		SEG_D = 0;
    		SEG_F = 0;
    		SEG_G = 0;
 	}
}

void main() {
	
    	int d1 = 0, d2 = 0, d3 = 0, d4 = 0;

    	while (1) {

    		ligaDigito(1);
                desativaLeds();
                tempoDelay(0);
                exibeDigito(d1);
                tempoDelay(0);
		desativaLeds();

		ligaDigito(2);
                desativaLeds();
                tempoDelay(0);
                exibeDigito(d2);
                tempoDelay(0);
		desativaLeds();

		ligaDigito(3);
                desativaLeds();
                tempoDelay(0);
                exibeDigito(d3);
                tempoDelay(0);
		desativaLeds();

		ligaDigito(4);
                desativaLeds();
                tempoDelay(0);
                exibeDigito(d4);
                tempoDelay(0);
		desativaLeds();

		d1++;

		if(d1 > 9){
			d1 = 0;
			d2++;
		}
		if(d2 > 9){
			d2 = 0;
			d3++;
		}
		if(d3 > 9){
			d3 = 0;
			d4++;
		}
		if(d4 > 9){
			d4 = 0;
		}
		desativaLeds();
	}
}

