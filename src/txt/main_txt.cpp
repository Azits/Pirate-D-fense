#include "winTxt.h"
#include "txtJeu.h"

using namespace  std;



int main(int argc, char **argv)
{
	termClear();
	Jeu jeu;
	txtBoucle(jeu);
	termClear();
	return 0;
}

