//Funções do terreno do "SociSim.c"
//Requer "global_elements.h", de "SociSim.c"

Terreno criarTerreno(){
	Terreno t;
	t = type_terreno(t);
	for(i = 0; i < t.Nslots; i ++){
		t.DINslots[i] = 0;
	}
	return t;
}

