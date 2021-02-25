#include "Arbol.h"

Arbol::Arbol()
{

}

void Arbol::DibujarArbol()
{
	glPushMatrix();

	//Copa arbol
	glPushMatrix();
		glTranslatef(-3.0f, 0.5f, 0.0f);
		glutSolidSphere(1.0f, 20, 20);
	glPopMatrix();

	//Tronco
	glPushMatrix();
		glRotatef(90, 1, 0, 0);
		glTranslatef(-3.0f, 0.0f, 0.0f);
		glutSolidCylinder(0.5f, 1.0f, 20, 20);
	glPopMatrix();


	glPopMatrix();
}

Arbol::~Arbol()
{

}
