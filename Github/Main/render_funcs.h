//Funções de renderização do "SociSim.c"
//Requer "global_elements.h", de "SociSim.c"

void renderQuadro(Terreno t, char type){
	
}

void renderSlots(Terreno t, int slotsIni, int slotsFin){
	int Nslots = t.Nslots;
	int invalidSlots = abs( (ceil(sqrt(Nslots)) * ceil((sqrt(Nslots)))) - Nslots );
	
	for(i = slotsIni; i <= slotsFin; i++)
	{
		if(slotsFin <= Nslots){
			printf(" ");//EspaçadorInicio	
			if(t.DINslots[i] == 0){printf("•");}
			if(t.DINslots[i] == 1){printf("X");}
			if(t.DINslots[i] == 10){printf("(");}
			
			printf(" ");//EspaçadorFim
		}	
			
		if(i >= Nslots - 1){
			for(int i2 = 0; i2 < invalidSlots; i2++){
			printf(" X ");
			}
		}
		//printf(" %d, %d", slotsIni, slotsFin);
	}
}

void renderCompleteSlots(Terreno t, char config){
	if(config = 'Q'){
		t.DINslots[5] = 10;
		int jumpLine = ceil(sqrt(t.Nslots));
		
		for(i3 = 0; i3 < jumpLine; i3++){
			renderSlots(t, jumpLine*i3, (jumpLine*(i3+1))-1);
			printf(" %d, %d \n", jumpLine*i3, jumpLine*(i3+1));
		}
		printf("\n");
	}
	
	
}

void renderAll(Terreno t){
	renderCompleteSlots(t, 'Q');
}




