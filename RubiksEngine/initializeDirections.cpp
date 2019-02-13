/* RubiksCubeEngineClass
	Creator: Jakub Kordel
*/

#include "Rubiks.hpp"

void Rubiks::initializeDirections(){
	edgeUF.firstStic.dir = UP; 	    edgeUF.secondStic.dir = FRONT;
	edgeUB.firstStic.dir = UP; 	    edgeUB.secondStic.dir = BACK;
	edgeUL.firstStic.dir = UP; 	    edgeUL.secondStic.dir = LEFT;
	edgeUR.firstStic.dir = UP; 	    edgeUR.secondStic.dir = RIGHT;
	edgeDF.firstStic.dir = DOWN; 	edgeDF.secondStic.dir = FRONT;
	edgeDB.firstStic.dir = DOWN; 	edgeDB.secondStic.dir = BACK;
	edgeDL.firstStic.dir = DOWN; 	edgeDL.secondStic.dir = LEFT;
	edgeDR.firstStic.dir = DOWN; 	edgeDR.secondStic.dir = RIGHT;
	edgeFL.firstStic.dir = FRONT;	edgeFL.secondStic.dir = LEFT;
	edgeFR.firstStic.dir = FRONT;	edgeFR.secondStic.dir = RIGHT;
	edgeBL.firstStic.dir = BACK; 	edgeBL.secondStic.dir = LEFT;
	edgeBR.firstStic.dir = BACK; 	edgeBR.secondStic.dir = RIGHT;
	cornerUFL.firstStic.dir = UP; 	cornerUFL.secondStic.dir = FRONT; 	cornerUFL.thirdStic.dir = LEFT;
	cornerURF.firstStic.dir = UP; 	cornerURF.secondStic.dir = RIGHT; 	cornerURF.thirdStic.dir = FRONT;
	cornerULB.firstStic.dir = UP; 	cornerULB.secondStic.dir = LEFT; 	cornerULB.thirdStic.dir = BACK;
	cornerUBR.firstStic.dir = UP; 	cornerUBR.secondStic.dir = BACK; 	cornerUBR.thirdStic.dir = RIGHT;
	cornerDLF.firstStic.dir = DOWN; cornerDLF.secondStic.dir = LEFT; 	cornerDLF.thirdStic.dir = FRONT;
	cornerDFR.firstStic.dir = DOWN; cornerDFR.secondStic.dir = FRONT; 	cornerDFR.thirdStic.dir = RIGHT;
	cornerDBL.firstStic.dir = DOWN; cornerDBL.secondStic.dir = BACK; 	cornerDBL.thirdStic.dir = LEFT;
	cornerDRB.firstStic.dir = DOWN; cornerDRB.secondStic.dir = RIGHT; 	cornerDRB.thirdStic.dir = BACK;

	middleU.stic.dir = UP;
	middleD.stic.dir = DOWN;
	middleF.stic.dir = FRONT;
	middleB.stic.dir = BACK;
	middleL.stic.dir = LEFT;
	middleR.stic.dir = RIGHT;
}
