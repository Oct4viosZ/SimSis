#include<string.h>
int i, i2, i3, i4;


typedef struct Terreno{
	int slots[45];
	//Dinâmico
	int *DINslots;
	int Nslots;

}Terreno;

Terreno DINslots_terreno(Terreno t, size_t size, char aloc){
	Terreno *terr = &t;			
	
	switch (aloc){
		case 'a':
		terr->DINslots = malloc(size * sizeof *terr->slots);
		terr->Nslots = size; 			
		break;
		
		case 'd':
		free(terr->DINslots);
		memset(terr, 0, sizeof *terr);
		break;
		
		case 'r':
		for(size_t i = 0; i < terr->Nslots; ++i) {
   		int *elem = &terr->DINslots[i];
    		// faça alguma coisa com elem...
		}
		break;
	

		default:
		printf("Erro interno <DINslots, mau configurado.");
	}
	return t;

}

Terreno type_terreno(Terreno t){
	int input;
	scanf("%d", &input);
	t = DINslots_terreno(t, input, 'a');
	return t;
}




