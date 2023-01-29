#include <stdio.h>
#include <string.h>
struct complexe {
	int a;
	int b;
};
typedef struct complexe Complexe;
void saisie(struct complexe * Z){
	printf("Donnez la partie reelle:");
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
Complexe conjugue(Complexe Z){
	Complexe s;
	s.a=Z.a;
	s.b=-Z.b;
	return s;
}
main()
{
Complexe z,s;
saisie(&z);
affichage(z);
printf("\n Complexe conjugue")	;
s=conjugue(z);
affichage(s);
}
