#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<math.h>
//
#include "global_vars.h"
#include "ui_funcs.h"

#include "global_elements.h"
#include "terreno_funcs.h"

#include "render_funcs.h"

int main(){
	printf("___---!Start!---___\n");
	
	renderAll(criarTerreno());
	
	printf("___---End---___\n");

}



