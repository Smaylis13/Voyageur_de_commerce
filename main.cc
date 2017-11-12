/* 
 * File:   main.cc
 * Author: utilisateur
 *
 * Created on 22 mars 2014, 09:48
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdlib>
#include <algorithm> // sort
#include "header/Gene.h"
#include "header/Chromosome.h"
#include "header/Population.h"
#include "header/Algorithme.h"

using namespace std;

/*
 * 
 */
    bool cmp( Chromosome lhs, Chromosome rhs)
   {
      return (lhs < rhs);
   }

/*pour le moment rien n'est prévu au niveau de l'algorithme pur, le main se compose essentiellement
 de test de méthodes*/
int main(int argc, char** argv) {
    srand(time(NULL));
   
    Chromosome trajet ;
    /*cette boucle permet de généré un chromosome composé de 5 genes (changer la valeur de la
     boucle pour décider du nombre de gene composant le chromosome*/
    for(int i=0; i<5 ; i++){
        Gene ville ; // pk des pointeurs ?
        trajet.add(ville);
    }
    /*divers tests d'affichage et de test de méthodes de la class chromosome
     (voir commentaires du fichier Chromosome.cc)*/
    cout << "Chromosome d'origine : " << endl;
    trajet.distance();
  //  trajet.affic();
    cout << "apres mutation :" <<trajet.Getdist()<< endl;
    
    trajet.muter();
    //trajet.affic();
    cout << "aprer mélange : " << endl;
    
    trajet.melanger();
    trajet.distance();
 //   trajet.affic();
    
    cout << "affichage de la copie : " << endl;
    Chromosome trajet2(trajet);
	trajet2.distance();//
//    trajet2.affic();
    
    Population solution ;
    /*meme chose que pour le chromosome mais avec une population*/
    for(int j=0; j<10 ; j++){
        Chromosome trajet3(trajet);
        trajet.melanger();
        solution.add(trajet3);        
    }
    cout << "Affichage de la population :" << endl;
    solution.affic(); 


    cout << "\t\t\t\t\ttt\ttttAprès le trie :" << endl;

    Algorithme temp;
    Population nouvel;
    
    
    nouvel=temp.Nouvelle(solution,0.5);   
    
    nouvel.affic();    
    
    
     

    return 0;
}

