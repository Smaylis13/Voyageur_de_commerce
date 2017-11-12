#include "../header/Algorithme.h"


Algorithme::Algorithme()
{
	proba=0.05;
}


Population Algorithme::Nouvelle(Population p,float pourcent)
{	int i;
	Population meilleur;
	p.trie();// trie les chemins en fonction de leur distance..
	proba = p.Getsize() * pourcent;
	/* pourcentage de ce qu'on va prendre de l'ancienne generation */
	vector <Chromosome> kiks=p.getVector();
	for (i=0 ; i < proba ; i++ )
	{
		meilleur.add(kiks[i]);// on remplie la nouvelle generation ??
	}
	vector <Chromosome> Lasuite;
	for(int j=i;j<10;j++)
	{
		Lasuite.push_back(kiks[j]);
	}
		
	return meilleur;// on retourne la nouvelle generation avec les x% meilleur.*/
}


