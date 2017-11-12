/* 
 * File:   Population.h
 * Author: utilisateur
 *
 * Created on 24 mars 2014, 15:29
 */

#ifndef POPULATION_H
#define	POPULATION_H
#include "Chromosome.h"

class Population 
{
public:
    Population();
    Population(const Population& orig);
    void affic();
    void add(Chromosome);
    vector<Chromosome> getVector();
    void trie();//
    Population& operator=(const Population&);
    int Getsize();
    void Melanger();

private:
    vector<Chromosome> carte;
};


#endif	/* POPULATION_H */


 


