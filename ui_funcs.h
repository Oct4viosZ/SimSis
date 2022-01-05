int questionUI(char typeQuestion){
	switch(typeQuestion){
		case 't':
			printf("Digite o número de slots do terreno: ");
		break;
		
		/*case 's'
			printf("Digite o número de turnos: ");
		break;*/
		
	}
	
	scanf("%d", &input);
	return input;
}

int generalConsole(){
	printf("Tabela de comandos\n e : Terminar SimSis\n");
	
	char cmd;
	printf("|> ");
	scanf("%c", &cmd);
	
	/*if(cmd == 't'){
		printf("Digite o número do quadro: ");
		scanf("%d", &turno);
	}*/
	
	return cmd;
}
