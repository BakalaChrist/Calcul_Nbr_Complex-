#include <stdio.h>
#include <string.h>
struct complexe {
	int a;
	int b;
};
void saisie(struct complexe * Z){
	printf("Donnez la partie réelle:");
	scanf("%d",&Z->a);
	printf("Donnez la partie imaginaire:");
	scanf("%d",&Z->b);
}

void affichage(struct complexe Z){
	if(Z.a==0){
		printf("\n%di\n",Z.b);
	    }
	else if(Z.b>0)printf("\n%d+%di\n",Z.a,Z.b);
	     else printf("\n%d%di\n",Z.a,Z.b);
}
main()
{
struct complexe z;
saisie(&z);
affichage(z);	
}
