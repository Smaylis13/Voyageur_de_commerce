/* 
 * File:   Chromosome.cc
 * Author: utilisateur
 * 
 * Created on 22 mars 2014, 11:00
 */

#include "../header/Chromosome.h"
#include <vector>
#include<iostream>
#include <ctime>
#include <cstdlib>
#include<cmath>
using namespace std;

Chromosome::Chromosome() {dist=0;
}
/*Ce constructeur permet de copier le chromosome d'origine
 afin d'etre cetain que notre population sera identique avant de commencer
 à mélanger les genes à l'intérieur de chaques chromosome*/
Chromosome::Chromosome(const Chromosome& orig) {
    for(int i=0;i<orig.chemin.size();i++){
        chemin.push_back(orig.chemin[i]);
    }
    Chromosome::distance();
}

Chromosome::~Chromosome() {
}
/*ajoute un gene dans le chromosome à la manière d'une pile*/
void Chromosome::add(Gene g){
    chemin.push_back(g);
}
/*retourne la donnée membre afin d'avoir accès aux méthodes de la class
 vector*/
vector<Gene> Chromosome::getVector(){
    return chemin;
}
/*inverse aléatoirement la position de 2 genes dans le chromosome*/
void Chromosome::muter(){
    int rand1 = rand()%chemin.size();
    int rand2 = rand()%chemin.size();
    Gene tmp;
    tmp = chemin[rand1];
    chemin[rand1] = chemin[rand2];
    chemin[rand2] = tmp;
    Chromosome::distance();
}
/*affiche le contenu d'un chromosome*/
void Chromosome::affic() {
    for(int i=0;i<chemin.size();i++){
        chemin[i].Affic();
    }
    cout<<"distancce du chemin: "<<dist <<endl;
}
/*inverse la position de 2 genes de façon répétée et totalement aléatoire*/
void Chromosome::melanger() {
    for(int i=0;i<chemin.size();i++){
        muter();
    }
    Chromosome::distance();
}
void Chromosome::distance() //
{	
	dist=0; 
	int x1,x2,y1,y2,len=chemin.size();
	/* un point de depart n'import lequel... */
	for(int i=0 ; i <  len-1 ; i++ ) // faire pow c du gaspillage sqrt( (x1-x2) (x1-x2)+ (y1-y2) (y1-y2) )
	{
		x1=chemin[i].GetcoordX();
		y1=chemin[i].GetcoordY();
		x2=chemin[i+1].GetcoordX();
		y2=chemin[i+1].GetcoordY();
		dist += sqrt( (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2) );
	}
	/* enfin point d'arrivee... donc le dernier d'indice len-1 et le premier indice 0*/
	x1=chemin[0].GetcoordX();
	y1=chemin[0].GetcoordY();
	x2=chemin[len-1].GetcoordX();
	y2=chemin[len-1].GetcoordY();
	dist += sqrt( (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2) );
}

float Chromosome::Getdist()/* retourne la distance du chemin en question */
{
	return dist;
}

bool Chromosome::operator<(const Chromosome &orig) const
{
	return dist < orig.dist;
}

