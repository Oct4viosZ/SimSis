//Funções de renderização do "SimSis.c"
//Requer "global_elements.h", de "SimSis.c"

void renderQuadro(Terreno t, char type){
	char tipo_de_quadro;	
	
	switch (type){
		
		case 'C':
		printf("╔");
		for(i = 0; i < ceil(sqrt(t.Nslots))*3; i++)
		{
			printf("═");
		}
		printf("╗\n");
		break;
		
		case 'L':
		printf("║");
		break;
		
		case 'B':
		printf("╚");
		for(i = 0; i < ceil(sqrt(t.Nslots))*3; i++)
		{
		printf("═");
		} 
		printf("╝\n");
		break;
		
	}
}

void renderSlots(Terreno t, int slotsIni, int slotsFin){ 

	int Nslots = t.Nslots;
	int invalidSlots = abs( Nslots - (ceil(sqrt(Nslots)) * ceil((sqrt(Nslots)))));
	
	for(i = slotsIni; i <= slotsFin; i++)
	{
		if(i < Nslots){
			printf(" ");//EspaçadorInicio	
			if(t.DINslots[i] == 0){printf("•");}
			if(t.DINslots[i] == 1){printf("X");}
			if(t.DINslots[i] == 2){printf(">");}
			if(t.DINslots[i] == 10){printf("(");}
			//printf("%d", i);
			
			printf(" ");//EspaçadorFim
		}else{printf(" X ");}
			
		//printf("[%d](%d)(%d-%d)", Nslots, i, slotsIni, slotsFin);
	}
}

void renderCompleteSlots(Terreno t, char config){
	switch (config)
	{
	 case 'Q':
		
		renderQuadro(t, 'C');
		
		int jumpLine = ceil(sqrt(t.Nslots));
		for(i3 = 0; i3 < jumpLine; i3++)
		{
			renderQuadro(t, 'L');
			
			renderSlots(t, jumpLine*i3, jumpLine*(i3+1)-1 );
			
			//printf("(%d, %d)", jumpLine*i3, jumpLine*(i3+1)-1);
			//printf("%d, %d", i3, jumpLine);
			renderQuadro(t, 'L');
			
			printf("\n");
			if(i3 == jumpLine-1){renderQuadro(t, 'B');}
			
		}
	break;
	
	}
	
	
}

void renderAll(Terreno t){
	//AçãoDemo//
	char genCon;
	while(genCon != 'e'){
		genCon = generalConsole();
		
		printf("\n");
		
		system("clear");
		
		t.DINslots[turno] = 2;
		t.DINslots[turno-1] = 0;
		
		renderCompleteSlots(t, 'Q');
		
		turno++;
	}
}




