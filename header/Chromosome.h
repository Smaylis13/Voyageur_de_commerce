/* 
 * File:   Chromosome.h
 * Author: utilisateur
 *
 * Created on 22 mars 2014, 11:00
 */

#ifndef CHROMOSOME_H
#define	CHROMOSOME_H
#include "Gene.h"
#include <vector>
#include<algorithm> // pour le trie "sort"

using namespace std;

class Chromosome {
public:
    Chromosome();
    Chromosome(const Chromosome& orig);
    virtual ~Chromosome();
    void add(Gene);
    vector<Gene> getVector();
    void melanger();
    void affic();
    void muter();
    void distance();
    float Getdist();
    bool operator<(const Chromosome&) const;
    
private:
    vector<Gene> chemin;
    float dist;
};

#endif	/* CHROMOSOME_H */

