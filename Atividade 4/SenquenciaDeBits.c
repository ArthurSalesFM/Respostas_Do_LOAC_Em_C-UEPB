#include <reg51.h>

void acendeUmLedPorVezDeFormaSequencial(int valor){

	if(valor == 0){
		P0_0 = 0;
	}
	
	else if(valor == 1){
		P0_1 = 0;
	}
	
	else if(valor == 2){
		P0_2 = 0;
	}
	
	else if(valor == 3){
		P0_3 = 0;
	}
	
	else if(valor == 4){
		P0_4 = 0;
	}
	
	else if(valor == 5){
		P0_5 = 0;
	}
	
	else if(valor == 6){
		P0_6 = 0;
	}
	
	else {
		P0_7 = 0;
	}
}

void acendeUmLedPorVezDeFormaNaoSequencial(int valor){

	if(valor == 0){
		P0_0 = 0;
	}
	else if(valor == 2){
		P0_1 = 0;
	}
	else if(valor == 4){
		P0_2 = 0;
	}
	else if(valor == 6){
		P0_3 = 0;
	}
	else if(valor == 1){
		P0_4 = 0;
	}
	else if(valor == 3){
		P0_5 = 0;
	}
	else if(valor == 5){
		P0_6 = 0;
	}
	else {
		P0_7 = 0;
	}
	
}

void acendeDoisLedPorVezDeFormaSequencial(int valor){

	if(valor == 0){
		P0_0 = 0;
		P0_1 = 0;
	}
	
	else if(valor == 1){
		P0_2 = 0;
		P0_3 = 0;
	}
	
	else if(valor == 2){
		P0_4 = 0;
		P0_5 = 0;
	}
	
	else {
		P0_6 = 0;
		P0_7 = 0;
	}
}

void acendeDoisLedPorVezDeNaoFormaSequencial(int valor){
	if(valor == 0){
		P0_0 = 0;
		P0_1 = 0;
	}
	
	else if(valor == 2){
		P0_2 = 0;
		P0_3 = 0;
	}
	
	else if(valor == 1){
		P0_4 = 0;
		P0_5 = 0;
	}
	
	else {
		P0_6 = 0;
		P0_7 = 0;
	}
}

void desligaLed(){
	P0_0 = 1;
	P0_1 = 1;
	P0_2 = 1;
	P0_3 = 1;
	P0_4 = 1;
	P0_5 = 1;
	P0_6 = 1;
	P0_7 = 1;
}

void tempoDeEspera(){
	int i;

	for(i = 0; i < 20; i++){
	}
}

void main(){
	int x;
	
	while(1){

		desligaLed();
		
		for(x = 0; x < 8; x++){
			acendeUmLedPorVezDeFormaSequencial(x);
			tempoDeEspera();
		}
		
		desligaLed();
		tempoDeEspera();

		
		for(x = 0; x < 4; x++){
			acendeDoisLedPorVezDeFormaSequencial(x);
			tempoDeEspera();
		}

		desligaLed();
		tempoDeEspera();

		for(x = 0; x < 8; x++){
			acendeUmLedPorVezDeFormaNaoSequencial(x);
			tempoDeEspera();
		}

		desligaLed();
		tempoDeEspera();

		for(x = 0; x < 4; x++){
			acendeDoisLedPorVezDeNaoFormaSequencial(x);
			tempoDeEspera();
		}
	}
	
}


