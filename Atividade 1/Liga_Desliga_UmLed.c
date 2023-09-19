#include <reg51.h>

void espera(){
	int i;
	for(i = 0; i < 20; i++){
	}
}

void main(void){

	P0_0 = 0;

	while(1){
		if(P0_0 == 1){
			P0_0 = 0;
		}
		else{
			P0_0 = 1;
		}
		espera();
	}
}