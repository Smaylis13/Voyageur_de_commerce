/* 
 * File:   Population.cc
 * Author: utilisateur
 * 
 * Created on 24 mars 2014, 15:29
 */

#include "../header/Population.h"

Population::Population() {

}
/*Copi une population pour passé à une nouvelle génération*/
Population::Population(const Population& orig) {
    for(int i=0;i<orig.carte.size();i++){
        carte.push_back(orig.carte[i]);
    }
}

//Population::~Population() {}

/*affiche le contenu de la population*/
void Population::affic() {
    for(int i=0;i<carte.size();i++){
        carte[i].affic();
    }
}
/*ajoute un chromosome dans la population*/
void Population::add(Chromosome c) {
    carte.push_back(c);
}
/*retourne la donnée membre afin d'avoir accès aux méthodes de la class
 vector*/
vector<Chromosome> Population::getVector() {
    return carte;
}

/* fct trie une population en fct de la distance */
void Population::trie()
{
	sort( carte.begin(), carte.end());
}

/*******affecter l'ancien population a une nouvelle*******/
Population& Population::operator=(const Population& a)
{
	if(&a != this)
	{
		carte.clear();
		for(int i=0 ; i < a.carte.size() ; i++ )
			add(a.carte[i]);
	}
	return *this;
}		

/*
 * retourne la taille d'une population
 */
int Population::Getsize()
{
	return carte.size();
}


void Population::Melanger()
{
	int i = 0;
	for (int j=0; j < carte.size(); j++)
	{
		do
     	{
			i = rand() % carte.size();
   		}while (i != j);
 
     /*std::*/swap(carte[j], carte[i]);
     j++;
	}
}
