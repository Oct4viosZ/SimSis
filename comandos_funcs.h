void crr(){
//crr = criar

}

void sir(){
//sir = sair
	globalCondicao = -1;

}

void ter(){
//ter = terreno
	printf("Digite o número de slots do terreno: ");
	scanf("%d", &input);
	renderAll(criarTerreno(input));

}

void dmo(){
//dmo = demo
	int fim = 0;
	char a;
	turno = 0;
	
	printf("Digite o número de slots do terreno: ");
	scanf("%d", &input);
	Terreno t = criarTerreno(input);

	printf("//\n\t_Tabela de Comandos da Demonstração_\t\n_Pressione Enter para avançar o turno;\n_Digite 'a' para avançar automaticamente\n");
		 

	while(turno <= t.Nslots){
		system("clear");
		
		t.DINslots[turno] = 2;
		t.DINslots[turno-1] = 0;
		
		renderAll(t);
		
		turno++;
		
		if(a != 'a'){
			a = getchar();

		}else{sleep(1);}
		
	} 
	return;

}

void obj(){
//obj = objeto

}

