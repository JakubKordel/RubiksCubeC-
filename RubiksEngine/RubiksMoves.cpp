/* RubiksCubeEngineClass
	Creator: Jakub Kordel
*/

#include "Rubiks.hpp"

void Rubiks::moveR(){
    rotateLayer( RIGHT, edgeUR, edgeBR, edgeDR, edgeFR, cornerURF, cornerUBR, cornerDRB, cornerDFR );
}

void Rubiks::moveRr(){
    rotateLayer( RIGHT, edgeFR, edgeDR, edgeBR, edgeUR, cornerDFR, cornerDRB, cornerUBR, cornerURF );
}

void Rubiks::moveL(){
    rotateLayer( LEFT, edgeFL, edgeDL, edgeBL, edgeUL, cornerULB, cornerUFL, cornerDLF, cornerDBL );
}

void Rubiks::moveLr(){
    rotateLayer( LEFT, edgeUL, edgeBL, edgeDL, edgeFL, cornerDBL, cornerDLF, cornerUFL, cornerULB );
}

void Rubiks::moveU(){
    rotateLayer( UP, edgeUL , edgeUB, edgeUR, edgeUF, cornerUFL, cornerULB, cornerUBR, cornerURF );
}

void Rubiks::moveUr(){
    rotateLayer( UP, edgeUF , edgeUR, edgeUB, edgeUL, cornerURF, cornerUBR, cornerULB, cornerUFL );
}

void Rubiks::moveD(){
    rotateLayer( DOWN, edgeDL, edgeDF, edgeDR, edgeDB, cornerDLF, cornerDFR, cornerDRB, cornerDBL );
}

void Rubiks::moveDr(){
    rotateLayer( DOWN, edgeDB, edgeDR, edgeDF, edgeDL, cornerDBL, cornerDRB, cornerDFR, cornerDLF );
}

void Rubiks::moveB(){
    rotateLayer( BACK, edgeUB, edgeBL, edgeDB, edgeBR, cornerULB, cornerDBL, cornerDRB, cornerUBR );
}

void Rubiks::moveBr(){
    rotateLayer( BACK, edgeBR , edgeDB, edgeBL, edgeUB, cornerUBR, cornerDRB, cornerDBL, cornerULB );
}

void Rubiks::moveF(){
    rotateLayer( FRONT, edgeUF, edgeFR, edgeDF, edgeFL, cornerUFL, cornerURF, cornerDFR, cornerDLF );
}

void Rubiks::moveFr(){
    rotateLayer( FRONT, edgeFL , edgeDF, edgeFR, edgeUF, cornerDLF, cornerDFR, cornerURF, cornerUFL );
}
