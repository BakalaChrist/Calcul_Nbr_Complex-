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

Complexe somme(Complexe z1,Complexe z2){
	Complexe s;
	s.a=z1.a+z2.a;
	s.b=z1.b+z2.b;
	return s;
}

Complexe difference(Complexe z1,Complexe z2){
	Complexe s;
	s.a=z1.a-z2.a;
	s.b=z1.b-z2.b;
	return s;
}
main()
{
Complexe z,s,z2,z3,z4;
saisie(&z);
affichage(z);
printf("\n Complexe conjugue")	;
s=conjugue(z);
affichage(s);
printf("Saisir le complexe z2\n");
saisie(&z2);
z3=somme(z,z2);
printf("\n la somme de deux complexes");
affichage(z3);
z4=difference(z,z2);
printf("\n la difference de deux complexes");
affichage(z4);
}
