#include <reg51.h>

void tempoDelay(int tempo){
	if(tempo < 1){
		tempo = 10;
	}
	else{
		int i;
		for(i = 0; i < tempo; i++){
			
		}
	}
}

void ligaZero(){
	int x;

	for(x = 0; x < 7; x++ ){

		if(x == 0){
			P0_0 = 0;
		}
		else if(x == 1){
			P0_1 = 0;
		}
		else if(x == 2){
			P0_2 = 0;
		}
		else if(x == 3){
			P0_3 = 0;
		}
		else if(x == 4){
			P0_4 = 0;
		}
		else if(x == 5) {
			P0_5 = 0;
		}
		tempoDelay(2);
	}
}

void ligaUm(){
	int x;

	for(x = 0; x < 7; x++ ){

		if(x == 3){
			P0_3 = 0;
		}
		else if(x == 4){
			P0_4 = 0;
		}
		tempoDelay(2);
	}
}

void ligaDois(){
	int x;

	for(x = 0; x < 7; x++ ){

		if(x == 2){
			P0_2 = 0;
		}
		else if(x == 3){
			P0_3 = 0;
		}
		else if(x == 6){
			P0_6 = 0;
		}
		else if(x == 0){
			P0_0 = 0;
		}
		else if(x == 5){
			P0_5 = 0;
		}
		tempoDelay(2);
	}
}

void ligaTres(){
	int x;

	for(x = 0; x < 7; x++ ){

		if(x == 2){
			P0_2 = 0;
		}
		else if(x == 3){
			P0_3 = 0;
		}
		else if(x == 6){
			P0_6 = 0;
		}
		else if(x == 4){
			P0_4 = 0;
		}
		else if(x == 5){
			P0_5 = 0;
		}
		tempoDelay(2);
	}
}

void ligaQuatro(){
	int x;

	for(x = 0; x < 7; x++ ){

		if(x == 1){
			P0_1 = 0;
		}
		else if(x == 3){
			P0_3 = 0;
		}
		else if(x == 6){
			P0_6 = 0;
		}
		else if(x == 4){
			P0_4 = 0;
		}
		tempoDelay(2);
	}
}

void ligaCinco(){
	int x;

	for(x = 0; x < 7; x++ ){

		if(x == 1){
			P0_1 = 0;
		}
		else if(x == 2){
			P0_2 = 0;
		}
		else if(x == 6){
			P0_6 = 0;
		}
		else if(x == 4){
			P0_4 = 0;
		}
		else if(x == 5){
			P0_5 = 0;
		}
		tempoDelay(2);
	}
}

void ligaSeis(){
	int x;

	for(x = 0; x < 7; x++ ){

		if(x == 1){
			P0_1 = 0;
		}
		else if(x == 2){
			P0_2 = 0;
		}
		else if(x == 6){
			P0_6 = 0;
		}
		else if(x == 4){
			P0_4 = 0;
		}
		else if(x == 5){
			P0_5 = 0;
		}
		else if(x == 0){
			P0_0 = 0;
		}
		tempoDelay(2);
	}
}

void ligaSete(){
	int x;

	for(x = 0; x < 7; x++ ){

		if(x == 3){
			P0_3 = 0;
		}
		else if(x == 2){
			P0_2 = 0;
		}
		else if(x == 4){
			P0_4 = 0;
		}
		tempoDelay(2);
	}
}

void ligaOito(){
	int x;

	for(x = 0; x < 7; x++ ){

		if(x == 3){
			P0_3 = 0;
		}
		else if(x == 2){
			P0_2 = 0;
		}
		else if(x == 4){
			P0_4 = 0;
		}
		else if(x == 1){
			P0_1 = 0;
		}
		else if(x == 5){
			P0_5 = 0;
		}
		else if(x == 6){
			P0_6 = 0;
		}
		else if(x == 0){
			P0_0 = 0;
		}
		tempoDelay(2);
	}
}

void ligaNove(){
	int x;

	for(x = 0; x < 7; x++ ){

		if(x == 3){
			P0_3 = 0;
		}
		else if(x == 2){
			P0_2 = 0;
		}
		else if(x == 4){
			P0_4 = 0;
		}
		else if(x == 1){
			P0_1 = 0;
		}
		else if(x == 5){
			P0_5 = 0;
		}
		else if(x == 6){
			P0_6 = 0;
		}
		tempoDelay(2);
	}
}

void ligaA(){
	int x;

	for(x = 0; x < 7; x++ ){

		if(x == 3){
			P0_3 = 0;
		}
		else if(x == 2){
			P0_2 = 0;
		}
		else if(x == 4){
			P0_4 = 0;
		}
		else if(x == 1){
			P0_1 = 0;
		}
		else if(x == 0){
			P0_0 = 0;
		}
		else if(x == 6){
			P0_6 = 0;
		}
		tempoDelay(2);
	}
}

void ligaB(){
	int x;

	for(x = 0; x < 7; x++ ){

		if(x == 5){
			P0_5 = 0;
		}
		else if(x == 6){
			P0_6 = 0;
		}
		else if(x == 4){
			P0_4 = 0;
		}
		else if(x == 1){
			P0_1 = 0;
		}
		else if(x == 0){
			P0_0 = 0;
		}
		tempoDelay(2);
	}
}

void ligaC(){
	int x;

	for(x = 0; x < 7; x++ ){

		if(x == 5){
			P0_5 = 0;
		}
		else if(x == 2){
			P0_2 = 0;
		}
		else if(x == 0){
			P0_0 = 0;
		}
		else if(x == 1){
			P0_1 = 0;
		}
		tempoDelay(2);
	}
}

void ligaD(){
	int x;

	for(x = 0; x < 7; x++ ){

		if(x == 5){
			P0_5 = 0;
		}
		else if(x == 6){
			P0_6 = 0;
		}
		else if(x == 4){
			P0_4 = 0;
		}
		else if(x == 3){
			P0_3 = 0;
		}
		else if(x == 0){
			P0_0 = 0;
		}
		tempoDelay(2);
	}
}

void ligaE(){
	int x;

	for(x = 0; x < 7; x++ ){

		if(x == 5){
			P0_5 = 0;
		}
		else if(x == 6){
			P0_6 = 0;
		}
		else if(x == 1){
			P0_1 = 0;
		}
		else if(x == 2){
			P0_2 = 0;
		}
		else if(x == 0){
			P0_0 = 0;
		}
		tempoDelay(2);
	}
}

void ligaF(){
	int x;

	for(x = 0; x < 7; x++ ){

		if(x == 6){
			P0_6 = 0;
		}
		else if(x == 1){
			P0_1 = 0;
		}
		else if(x == 2){
			P0_2 = 0;
		}
		else if(x == 0){
			P0_0 = 0;
		}
		tempoDelay(2);
	}
}

void desativaLeds(){
	P0_0 = 1;
	P0_1 = 1;
	P0_2 = 1;
	P0_3 = 1;
	P0_4 = 1;
	P0_5 = 1;
	P0_6 = 1;
	P0_7 = 1;
}

void main(){
	int x;
	
	while(1){

		for(x = 0; x < 16; x++){

			desativaLeds();
			
			if(x == 0){
				ligaZero();
			}
			else if( x == 1){
				ligaUm();
			}
			else if( x == 2){
				ligaDois();
			}
			else if( x == 3){
				ligaTres();
			}
			else if( x == 4){
				ligaQuatro();
			}
			else if( x == 5){
				ligaCinco();
			}
			else if( x == 6){
				ligaSeis();
			}
			else if( x == 7){
				ligaSete();
			}
			else if( x == 8){
				ligaOito();
			}
			else if( x == 9){
				ligaNove();
			}
			else if( x == 10){
				ligaA();
			}
			else if( x == 11){
				ligaB();
			}
			else if( x == 12){
				ligaC();
			}
			else if( x == 13){
				ligaD();
			}
			else if( x == 14){
				ligaE();
			}
			else {
				ligaF();
			}
			tempoDelay(30);
		}
		
	}
}


