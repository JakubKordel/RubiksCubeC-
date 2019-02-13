/* RubiksCubeEngineClass
	Creator: Jakub Kordel
*/

#pragma once
#include <cstdlib>

enum Colour { WHITE, YELLOW, BLUE, GREEN, RED, ORANGE };
enum Direction { LEFT, RIGHT, FRONT, BACK, UP, DOWN };

struct Sticker {
	Direction dir;
	Colour	col;
};

struct Edge {
	Sticker firstStic;
	Sticker secondStic;
};

struct Corner {
	Sticker firstStic;
	Sticker secondStic;
	Sticker thirdStic;
};

struct Middle {
	Sticker stic;
};

class Rubiks {
    public:
	Edge edgeUF; Edge edgeUB; Edge edgeUL; Edge edgeUR; // Edges on 'UP' layer
	Edge edgeDF; Edge edgeDB; Edge edgeDL; Edge edgeDR; // Edges on 'DOWN' layer
    	Edge edgeFL; Edge edgeFR; Edge edgeBL; Edge edgeBR; // Edges on 'MIDDlE' layer
	Corner cornerUFL; Corner cornerURF; Corner cornerULB; Corner cornerUBR; // Corners on 'UP' layer
	Corner cornerDLF; Corner cornerDFR; Corner cornerDBL; Corner cornerDRB; // Corners on 'DOWN' layer
	Middle middleU; Middle middleD; Middle middleF; Middle middleB; Middle middleL; Middle middleR; // Middles on every layer

	// classic rubics cube moves notation, R, L, U, D, B, F -  clockwise moves, Rr, Lr, Ur, Dr, Br, Fr - reverse moves
	Rubiks();
	void moveR();
	void moveRr();
	void moveL();
	void moveLr();
	void moveU();
	void moveUr();
	void moveD();
	void moveDr();
	void moveB();
	void moveBr();
	void moveF();
	void moveFr();
	void reset(); // Sets all colours on start position
	private:
	void initializeDirections();
	void resetColourStick( Sticker & sticker );
	void resetColoursEdge( Edge & edge );
	void resetColoursCorner( Corner & corner );
	void resetColourMiddle( Middle & middle );
	void rotateFourStickers( Sticker & first, Sticker & second, Sticker & third, Sticker & fourth );
	void rotateLayer( Direction layer, Edge & edgeFirst, Edge & edgeSecond, Edge & edgeThird, Edge & edgeFourth,
    Corner & cornerFirst, Corner & cornerSecond, Corner & cornerThird,  Corner & cornerFourth  );
};
