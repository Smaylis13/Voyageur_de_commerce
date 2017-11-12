/* 
 * File:   Gene.h
 * Author: utilisateur
 *
 * Created on 22 mars 2014, 09:49
 */

#ifndef GENE_H
#define	GENE_H

class Gene {
public:
    Gene();
    Gene(const Gene& orig);
    virtual ~Gene();
    void Affic();
    void operator = (const Gene&);
    int GetcoordX();
    int GetcoordY();
private:
    int coordY;
    int coordX;
};

#endif	/* GENE_H */

