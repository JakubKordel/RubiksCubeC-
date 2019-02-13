/* RubiksCubeEngineClass
	Creator: Jakub Kordel
*/

#include "Rubiks.hpp"

void Rubiks::rotateFourStickers( Sticker & first, Sticker & second, Sticker & third, Sticker & fourth ){
	Colour firstBuf = first.col;
	Colour secondBuf = second.col;
	Colour thirdBuf = third.col;
	Colour fourthBuf = fourth.col;
	first.col = fourthBuf;
	second.col = firstBuf;
	third.col = secondBuf;
	fourth.col = thirdBuf;
}

