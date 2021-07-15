#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
	system("chcp 1252");
	system("color F4");
	printf("hello world\nolá mundo");
	//frequencia em Hertz, tempo em milissegundos
	//Beep(500, 1000);
	
	
	//para i = 0 enquanto menor ou igual 9 imprima i
	for (int i = 5; i <= 20000; i++){
	int f = i * 10;
		printf("\nFrequência: %d a", f);
		Beep(f, 10);
	}
	
}
