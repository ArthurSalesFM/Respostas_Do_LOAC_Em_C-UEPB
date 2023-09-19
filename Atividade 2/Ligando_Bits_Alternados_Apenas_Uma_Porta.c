#include <reg51.h>

void ligaBit(int bit){

	if(bit == 0){
		P0_0 = 0;
	}
	else if(bit == 1){
		P0_1 = 0;
	}
	else if(bit == 2){
		P0_2 = 0;
	}
	else if(bit == 3){
		P0_3 = 0;
	}
	else if(bit == 4){
		P0_4 = 0;
	}
	else if(bit == 5){
		P0_5 = 0;
	}
	else if(bit == 6){
		P0_6 = 0;
	}
	else{
		P0_7 = 0;
	}
}

void temporizador(){
	int i;
	for(i = 0; i < 5; i++){
	}
}

void desligaBits(){
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
	int i;
	while(1){
		for(i = 0; i < 8; i++){
			desligaBits();
			ligaBit(i);
			temporizador();
		}
	}
}