/* RubiksCubeEngineClass
	Creator: Jakub Kordel
*/

#include "Rubiks.hpp"

void Rubiks::reset(){
	resetColoursEdge( edgeUF );
	resetColoursEdge( edgeUB );
	resetColoursEdge( edgeUL );
	resetColoursEdge( edgeUR );
	resetColoursEdge( edgeDF );
	resetColoursEdge( edgeDB );
	resetColoursEdge( edgeDL );
	resetColoursEdge( edgeDR );
	resetColoursEdge( edgeFL );
	resetColoursEdge( edgeFR );
	resetColoursEdge( edgeBL );
	resetColoursEdge( edgeBR );
	resetColoursCorner( cornerUFL );
	resetColoursCorner( cornerURF );
	resetColoursCorner( cornerULB );
	resetColoursCorner( cornerUBR );
	resetColoursCorner( cornerDLF );
	resetColoursCorner( cornerDFR );
	resetColoursCorner( cornerDBL );
	resetColoursCorner( cornerDRB );
	resetColourMiddle( middleU );
	resetColourMiddle( middleD );
	resetColourMiddle( middleF );
	resetColourMiddle( middleB );
	resetColourMiddle( middleL );
	resetColourMiddle( middleR );
}

void Rubiks::resetColourStick( Sticker & sticker ){
	switch ( sticker.dir ){
		case UP:
			sticker.col = YELLOW;
			break;
		case DOWN:
			sticker.col = WHITE;
			break;
		case FRONT:
			sticker.col = GREEN;
			break;
		case BACK:
			sticker.col = BLUE;
			break;
		case LEFT:
			sticker.col = RED;
			break;
		case RIGHT:
			sticker.col = ORANGE;
			break;
	}
}

void Rubiks::resetColoursEdge( Edge & edge ){
	resetColourStick( edge.firstStic );
	resetColourStick( edge.secondStic );
}

void Rubiks::resetColoursCorner( Corner & corner ){
	resetColourStick( corner.firstStic );
	resetColourStick( corner.secondStic );
	resetColourStick( corner.thirdStic );
}

void Rubiks::resetColourMiddle( Middle & middle ){
	resetColourStick ( middle.stic );
}
