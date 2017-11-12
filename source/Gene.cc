/* 
 * File:   Gene.cc
 * Author: utilisateur
 * 
 * Created on 22 mars 2014, 09:49
 */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "../header/Gene.h"
using namespace std;


/*un gene est composé de 2 positions aléatoire*/
Gene::Gene() {
    coordX = rand()%10;
    coordY = rand()%10;    
}
/*sert pour copier les genes lors de la copie d'un chromosome*/
Gene::Gene(const Gene& orig) {
    coordX = orig.coordX;
    coordY = orig.coordY;        
}

Gene::~Gene() {
}
/*Affiche les données membre d'un gene*/
void Gene::Affic(){
    cout << coordX << " axe X\t" << coordY << " axe Y" << endl;
}
/*surchage d'operateur pour facilité la lecture du code et l'algo d'inversement des genes dans un chromosome*/
void Gene::operator =(const Gene& g) {
    coordX = g.coordX;
    coordY = g.coordY;
}

/* retourne les coordonne x */
int Gene::GetcoordX()
{
	return coordX;
}

/* retourne les coordonne y */
int Gene::GetcoordY()
{
	return coordY;
}
