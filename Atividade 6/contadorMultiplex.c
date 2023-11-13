#include <reg51.h>

#define SEG_A P0_0
#define SEG_B P0_1
#define SEG_C P0_2
#define SEG_D P0_3
#define SEG_E P0_4
#define SEG_F P0_5
#define SEG_G P0_6
#define DIGIT1 P1_0
#define DIGIT2 P1_1

void tempoDelay(int tempo) {
	while (tempo--) {
    	}
}

void ligaDigito(int digito) {
	DIGIT1 = 0;
    	DIGIT2 = 0;

    	if (digito == 1) {
        	DIGIT1 = 1;
    	} 
    	else if (digito == 2) {
        	DIGIT2 = 1;
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
    		P0_0 = 0;
    		P0_1 = 0;
    		P0_2 = 0;
    		P0_3 = 0;
    		P0_4 = 0;
    		P0_5 = 0;
    	}
    	else if(digito == 1){
    		P0_1 = 0;
    		P0_2 = 0;
    	}
    	else if(digito == 2){
    		P0_0 = 0;
    		P0_1 = 0;
    		P0_3 = 0;
    		P0_4 = 0;
    		P0_6 = 0;
    	}
    	else if(digito == 3){
    		P0_0 = 0;
    		P0_1 = 0;
    		P0_2 = 0;
    		P0_3 = 0;
    		P0_6 = 0;
    	}
    	else if(digito == 4){
    		P0_1 = 0;
    		P0_2 = 0;
    		P0_5 = 0;
    		P0_6 = 0;
    	}
    	else if(digito == 5){
    		P0_0 = 0;
    		P0_2 = 0;
    		P0_3 = 0;
    		P0_5 = 0;
    		P0_6 = 0;
    	}
    	else if(digito == 6){
    		P0_0 = 0;
    		P0_2 = 0;
    		P0_3 = 0;
    		P0_4 = 0;
    		P0_5 = 0;
    		P0_6 = 0;
    	}
    	else if(digito == 7){
    		P0_0 = 0;
    		P0_1 = 0;
    		P0_2 = 0;
    	}
    	else if(digito == 8){
    		P0_0 = 0;
    		P0_1 = 0;
    		P0_2 = 0;
    		P0_3 = 0;
    		P0_4 = 0;
    		P0_5 = 0;
    		P0_6 = 0;
    	}
    	else{
		P0_0 = 0;
    		P0_1 = 0;
    		P0_2 = 0;
    		P0_3 = 0;
    		P0_5 = 0;
    		P0_6 = 0;
 	}
}

void main() {
	
    	int d1, d2;

    	while (1) {

        	for (d1 = 0; d1 <= 9; d1++) {
            		for (d2 = 0; d2 <= 9; d2++) {

                		ligaDigito(1);
                		desativaLeds();
                		tempoDelay(1);
                		exibeDigito(d2);
                		tempoDelay(1);
				desativaLeds();

                		ligaDigito(2);
                		desativaLeds();
                		tempoDelay(1);
                		exibeDigito(d1);
                		tempoDelay(1);
                		desativaLeds();
            		}
            		desativaLeds();
        	}
	}
}

