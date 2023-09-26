#include <reg51.h>

void copiaPorta(int porta){
	if(porta == 0){
		ativaBits();
	}
	else if(porta == 1){
		P1 = P0;
	}
	else if(porta == 2){
		P2 = P1;
	}
	else{
		P3 = P2;
	}
}

void ativaBits() {
	P0 = 0x00;
}

void desativaBits() {
     	P0 = 0xFF;
    	P1 = P0;
    	P2 = P1;
    	P3 = P2;
}

void tempoDeEspera(int tempo){
	int x;
	for(x = 0; x <= tempo; x++){
	}
}

void main() {
	int i;

	desativaBits();
    	while (1) {
    		tempoDeEspera(2);
        	for (i = 0; i < 4; i++) {
			copiaPorta(i);
        		tempoDeEspera(10);
        	}
        	desativaBits();
    }
}
