/* RubiksCubeEngineClass
	Creator: Jakub Kordel
*/

#include "Rubiks.hpp"

Sticker & sticEdge( Direction layer, bool onLayer, Edge & edge ){
	if ( onLayer ){
		if ( layer == edge.firstStic.dir )
			return edge.firstStic;
		if ( layer == edge.secondStic.dir )
			return edge.secondStic;
		exit ( EXIT_FAILURE );
	}
	if ( layer == edge.firstStic.dir )
		return edge.secondStic;
	if ( layer == edge.secondStic.dir )
		return edge.firstStic;
	exit ( EXIT_FAILURE );
}

Sticker & sticCorner( Direction layer, int i, Corner & corner ){
	if ( i == 0 ){
		if ( layer == corner.firstStic.dir )
			return corner.firstStic;
		if ( layer == corner.secondStic.dir )
			return corner.secondStic;
		if ( layer == corner.thirdStic.dir )
			return corner.thirdStic;
	}
	if ( i == 1 ){
		if ( layer == corner.firstStic.dir )
			return corner.secondStic;
		if ( layer == corner.secondStic.dir )
			return corner.thirdStic;
		if ( layer == corner.thirdStic.dir )
			return corner.firstStic;
	}
	if ( i == 2 ){
		if ( layer == corner.firstStic.dir )
			return corner.thirdStic;
		if ( layer == corner.secondStic.dir )
			return corner.firstStic;
		if ( layer == corner.thirdStic.dir )
			return corner.secondStic;
	}
	exit ( EXIT_FAILURE );
}

void Rubiks::rotateLayer( Direction layer, Edge & edgeFirst, Edge & edgeSecond, Edge & edgeThird, Edge & edgeFourth,
Corner & cornerFirst, Corner & cornerSecond, Corner & cornerThird,  Corner & cornerFourth  ){
	rotateFourStickers ( sticEdge( layer, true, edgeFirst ), sticEdge( layer, true, edgeSecond ), sticEdge( layer, true, edgeThird ), sticEdge( layer, true, edgeFourth ) );
	rotateFourStickers ( sticEdge( layer, false, edgeFirst ), sticEdge( layer, false, edgeSecond ), sticEdge( layer, false, edgeThird ), sticEdge( layer, false, edgeFourth ) );
	rotateFourStickers ( sticCorner( layer, 0, cornerFirst ), sticCorner( layer, 0, cornerSecond ), sticCorner( layer, 0, cornerThird ), sticCorner( layer, 0, cornerFourth ) );
	rotateFourStickers ( sticCorner( layer, 1, cornerFirst ), sticCorner( layer, 1, cornerSecond ), sticCorner( layer, 1, cornerThird ), sticCorner( layer, 1, cornerFourth ) );
	rotateFourStickers ( sticCorner( layer, 2, cornerFirst ), sticCorner( layer, 2, cornerSecond ), sticCorner( layer, 2, cornerThird ), sticCorner( layer, 2, cornerFourth ) );
}
