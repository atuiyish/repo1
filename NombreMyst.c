#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
	int nombreMystere, nbrImp, continuerPartie = 1, compteur, mode = 1, nbrCho, lvl;
	int MIN, MAX;
	srand(time(NULL));
	
while (mode != 1 || mode !=2 && continuerPartie != 2)
{	
	printf("\n\n===MODE===\n\n");
	printf("1.MODE SOLO\n");
	printf("2.MODE MULTI\n\n");
	
	scanf("%d", &mode);
	
	switch (mode)
	{
	case 1:
			for (lvl; lvl < 1 || lvl > 3;)
			{
			printf("\n\n===DIFFICULTER===\n\n");
			printf("1.NIVEAU 1 (1<->10)\n");
			printf("2.NIVEAU 2 (1<->100)\n");
			printf("3.NIVEAU 3 (1<->200)\n\n");
		
			scanf("%d", &lvl);
		
			switch (lvl)
			{
			case 1:
				for (continuerPartie = 1; continuerPartie == 1;)
				{
				compteur = 1;
				MIN = 1; MAX = 10;
				nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
				while (nbrImp != nombreMystere)
				{
					printf("Quel est le nombre ? ");
					scanf("%d", &nbrImp);
					if (nbrImp < nombreMystere)
					{
						printf("C'est plus !\n");
					}
					else if (nbrImp > nombreMystere)
					{
						printf("C'est moins !\n");
					}
					else
					{
						printf("\n\nBravo, vous avez trouve le nombre mystere en %d coups !!!", compteur);
						printf("\n\nUne autre partie ?\n\n");
						printf("1.OUI\n");
						printf("2.NON\n\n");
						
					}
					compteur++;
				}
				scanf("%d", &continuerPartie);
				}
			break;
			case 2:
				for (continuerPartie = 1; continuerPartie == 1;)
				{
				compteur = 1;
				MIN = 1; MAX = 100;
				nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
				while (nbrImp != nombreMystere)
				{
					printf("Quel est le nombre ? ");
					scanf("%d", &nbrImp);
					if (nbrImp < nombreMystere)
					{
						printf("C'est plus !\n");
					}
					else if (nbrImp > nombreMystere)
					{
						printf("C'est moins !\n");
					}
					else
					{
						printf("\n\nBravo, vous avez trouve le nombre mystere en %d coups !!!", compteur);
						printf("\n\nUne autre partie ?\n\n");
						printf("1.OUI\n");
						printf("2.NON\n\n");
						
					}
					compteur++;
				}
				scanf("%d", &continuerPartie);
				}
			break;
			case 3:
				for (continuerPartie = 1; continuerPartie == 1;)
				{
				compteur = 1;
				MIN = 1; MAX = 200;
				nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
				while (nbrImp != nombreMystere)
				{
					printf("Quel est le nombre ? ");
					scanf("%d", &nbrImp);
					if (nbrImp < nombreMystere)
					{
						printf("C'est plus !\n");
					}
					else if (nbrImp > nombreMystere)
					{
						printf("C'est moins !\n");
					}
					else
					{
						printf("\n\nBravo, vous avez trouve le nombre mystere en %d coups !!!", compteur);
						printf("\n\nUne autre partie ?\n\n");
						printf("1.OUI\n");
						printf("2.NON\n\n");
					}
					compteur++;
				}
				scanf("%d", &continuerPartie);
				}
			break;
			default:
				printf ("\nERREUR SAISIE\n\n");
			break;
			}
			}
			break;
			case 2:
			while (continuerPartie == 1)
			{
				compteur = 1;
				nbrCho = 1;
				printf("Entrer le nombre mystere:\n\n");
				scanf("%d", &nbrCho);
			
				while (nbrImp != nbrCho)
				{
					printf("Quel est le nombre ? ");
					scanf("%d", &nbrImp);
					if (nbrImp < nbrCho)
					{
						printf("C'est plus !\n");
					}
					else if (nbrImp > nbrCho)
					{
						printf("C'est moins !\n");
					}
					else
					{
						printf("\n\nBravo, vous avez trouve le nombre mystere en %d coups !!!", compteur);
						printf("\n\nUne autre partie ?\n\n");
						printf("1.OUI\n");
						printf("2.NON\n\n");
						scanf("%d", &continuerPartie);
					}
					compteur++;
				}
			}
			return 0;
		break;
		default:
			printf("ERREUR DE SAISIE");
		}
	}
return 0;
}
