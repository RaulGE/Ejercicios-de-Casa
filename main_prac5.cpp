//Semestre 2019 - 2
//************************************************************//
/*

FI UNAM
Guzman Esquivel Raul
Grupo 02
Version visual studio 2017
Practica 4


*/
#include "Main.h"

float transZ = -10.0f;
float transX = 0.0f;
float transY = 0.0f;

float angleX = 0.0f;
float angleY = 0.0f;

float angHombro = 0.0f;
float angCodo = 0.0f;
float angMuñeca = 0.0f;
float angFpulgar = 0.0f;
float angFindice = 0.0f;
float angFmedio = 0.0f;
float angFanular = 0.0f;
float angFmeñique = 0.0f;

//Función para inicializar estados de GL
void inicializar(void)
{
	glClearColor(0.831, 0.949f, 0.988f, 1.0f);
	glClearDepth(1.0f);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

//función para dibujar un cubo a partir de polígonos
void prisma(void)
{
	GLfloat vertice[8][3] = {
		{ 0.5 ,-0.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ -0.5 ,-0.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ -0.5 ,-0.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 0.5 ,-0.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 0.5 ,0.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 0.5 ,0.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ -0.5 ,0.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ -0.5 ,0.5, 0.5 },    //Coordenadas Vértice 7 V7
	};

	glBegin(GL_POLYGON);	//Front

	glColor3f(0.647, 0.658, 0.643);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0, 0.0, 1.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.647, 0.658, 0.643);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0, 0.0, 1.0);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
	glColor3f(0,0,0); 
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0, 0 , 0);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}


void dibujar(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);  //Limpiamos pantalla y Depth
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();


	glTranslatef(transX, transY, transZ);

	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	glTranslatef(0, 8, 0);
	glScalef(3.0, 3.0, 1.5);

	prisma();

	glLoadIdentity();

	/////////////////////
	glTranslatef(transX, transY, transZ);

	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	glTranslatef(0, 6, 0);
	//glScalef(1.0, 2.0, 1.0);
	prisma();

	glLoadIdentity();
	/////////////////////
	glTranslatef(transX, transY, transZ);

	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	glTranslatef(0, 2, 0);
	glScalef(5.0, 7.0, 1.5);
	prisma();

	glLoadIdentity();

	//****************************************//
		/////////////////////
	glTranslatef(transX, transY, transZ);

	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	glTranslatef(-3.5, 5, 0);
	glScalef(2, 1, 1.3);
	prisma();

	glLoadIdentity();
	/////////////////////
	glTranslatef(transX, transY, transZ);

	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	glTranslatef(-5, 5, 0);
	glScalef(1, 1.2, 1.3);
	prisma();

	glLoadIdentity();
	/////////////////////
	glTranslatef(transX, transY, transZ);

	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	glTranslatef(-6, 5, 0);
	glScalef(1.5, 1, 1.3);
	prisma();

	glLoadIdentity();
	/////////////////////
	glTranslatef(transX, transY, transZ);

	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	glTranslatef(-7, 5, 0);
	glScalef(0.8, 1.1, 1.3);
	prisma();

	glLoadIdentity();
	/////////////////////
	glTranslatef(transX, transY, transZ);

	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	glTranslatef(-1.3, -2.5, 0);
	glScalef(1.6, 2, 1.3);
	prisma();

	glLoadIdentity();
	/////////////////////
	glTranslatef(transX, transY, transZ);

	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	glTranslatef(1.3, -2.5, 0);
	glScalef(1.6, 2, 1.3);
	prisma();

	glLoadIdentity();
	/////////////////////
	glTranslatef(transX, transY, transZ);

	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	glTranslatef(1.3, -4, 0);
	glScalef(1.8, 1.4, 1.3);
	prisma();

	glLoadIdentity();
	/////////////////////
	glTranslatef(transX, transY, transZ);

	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	glTranslatef(-1.3, -4, 0);
	glScalef(1.8, 1.4, 1.3);
	prisma();

	glLoadIdentity();
	/////////////////////
	glTranslatef(transX, transY, transZ);

	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	glTranslatef(-1.3, -5.5, 0);
	glScalef(1.6, 1.8, 1.3);
	prisma();

	glLoadIdentity();
	/////////////////////
	glTranslatef(transX, transY, transZ);

	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	glTranslatef(1.3, -5.5, 0);
	glScalef(1.6, 1.8, 1.3);
	prisma();

	glLoadIdentity();
	/////////////////////
	glTranslatef(transX, transY, transZ);

	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	glTranslatef(1.6, -7, 0);
	glScalef(2.3, 1.6, 1.5);
	prisma();

	glLoadIdentity();
	/////////////////////
	glTranslatef(transX, transY, transZ);

	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	glTranslatef(-1.6, -7, 0);
	glScalef(2.3, 1.6, 1.5);
	prisma();

	glLoadIdentity();

	//****************************//
		/////////////////////
	glTranslatef(transX, transY, transZ);
	
	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	glTranslatef(.8, 8.5, 0.28);
	glScalef(.5, .5, 1);
	glRotatef(90, 1, 0, 0);
	prisma();
	glRotatef(90, 1, 0, 0);
	glLoadIdentity();
	/////////////////////
	glTranslatef(transX, transY, transZ);

	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	glTranslatef(-.8, 8.5, 0.28);
	glScalef(.5, .5, 1);
	glRotatef(90, 1, 0, 0);
	prisma();
	glRotatef(90, 1, 0, 0);
	glLoadIdentity();
	/////////////////////
	glTranslatef(transX, transY, transZ);

	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	glTranslatef(0, 7.5, 0.28);
	glScalef(2, .5, 1);
	glRotatef(90, 1, 0, 0);
	prisma();
	glRotatef(90, 1, 0, 0);
	glLoadIdentity();
	////////////@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
	glTranslatef(transX, 0.0f, transZ);
	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	//Poner Código Aquí.
	glTranslatef(3, 5, 0);
	//hombro
	glRotatef(angHombro, 0, 0, 1);
	glColor3f(1, 1, 1);
	prisma();
	//bicep
	glTranslatef(1.5, 0, 0);
	glScalef(2, 1, 1);
	glColor3f(1, 0, 0);
	prisma();
	glScalef(0.5, 1, 1);
	//antebrazo
	glTranslatef(1, 0, 0);
	glRotatef(angCodo, 0, 0, 1);//articulacion codo
	glTranslatef(1.5, 0, 0);
	glScalef(3, 1, 1);
	glColor3f(0, 1, 0);
	prisma();
	glScalef(0.33, 1, 1);
	//palma
	glTranslatef(1.28, 0, 0);
	glRotatef(angMuñeca, 0, 1, 0);
	glTranslatef(0.75, 0, 0);
	glScalef(1.1, 1, 0.5);
	glColor3f(0, 0, 1);
	prisma();
	glScalef(0.67, 1, 1);
	//pulgar
	glTranslatef(-0.6, 0.5, 0);

	glRotatef(angFpulgar, 1, 0, 0);
	glTranslatef(0, 0.25, 0);
	glScalef(0.25, 0.5, 0.5);
	glColor3f(1, 1, 0);
	prisma();

	glScalef(1, 1, 1);

	//falange pulgar
	glTranslatef(0, 0.5, 0);

	glRotatef(angFpulgar * 2, 1, 0, 0);
	glTranslatef(0, 0.5, 0);
	glColor3f(0.2, 0.5, 0);
	prisma();


	//indice
	glTranslatef(5.248, -1.65, 0.25);
	glRotatef(angFindice, 0, 1, 0);
	glTranslatef(1.05, 0, -0.25);
	glColor3f(1, 1, 1);
	glScalef(1.7, 0.3, 0.5);
	prisma();
	glScalef(0.58, 3.3, 1);

	//falange indice
	glTranslatef(0.85, 0, 0.25);
	glRotatef(angFindice, 0, 1, 0);
	glTranslatef(0.835, 0, -0.25);
	glColor3f(0, 1, 0);
	glScalef(1.7, 0.3, 1);
	prisma();
	glScalef(0.58, 3.3, 1);

	//ultima falange indice
	glTranslatef(0.85, 0, 0.25);
	glRotatef(angFindice, 0, 1, 0);
	glTranslatef(0.835, 0, -0.25);
	glColor3f(1, 0, 0);
	glScalef(1.7, 0.3, 1);
	prisma();
	glScalef(0.58, 3.3, 1);
	glTranslatef(-0.85, 0, 0.25);

	//medio
	glTranslatef(-2.5, -0.18, 0);
	glRotatef(angFmedio, 0, 1, 0);
	glTranslatef(0.01, -0.18, 0);
	glColor3f(0, 1, 0);
	glScalef(1.9, 0.3, 1);
	prisma();
	glScalef(0.52, 3.3, 1);

	//falange medio
	glTranslatef(0.95, 0, 0);
	glRotatef(angFmedio, 0, 1, 0);
	glTranslatef(0.85, 0, 0);
	glColor3f(0, 0, 1);
	glScalef(1.9, 0.3, 1);
	prisma();
	glScalef(0.52, 3.3, 1);

	//falange final medio
	glTranslatef(0.95, 0, 0);
	glRotatef(angFmedio, 0, 1, 0);
	glTranslatef(0.85, 0, 0);
	glColor3f(1, 1, 1);
	glScalef(1.9, 0.3, 1);
	prisma();
	glScalef(0.52, 3.3, 1);
	glTranslatef(-0.95, 0, 0);

	//anular
	glTranslatef(-2.9, -0.29, 0);
	glRotatef(angFanular, 0, 1, 0);
	glTranslatef(0.02, -0.19, 0);
	glColor3f(1, 0, 1);
	glScalef(1.7, 0.3, 1);
	prisma();
	glScalef(0.58, 3.3, 1);

	//falange anular
	glTranslatef(0.85, 0, 0);
	glRotatef(angFanular, 0, 1, 0);
	glTranslatef(0.85, 0, 0);
	glColor3f(1, 1, 0);
	glScalef(1.7, 0.3, 1);
	prisma();
	glScalef(0.58, 3.3, 1);

	//falange final anular
	glTranslatef(0.85, 0, 0);
	glRotatef(angFanular, 0, 1, 0);
	glTranslatef(0.85, 0, 0);
	glColor3f(0, 1, 1);
	glScalef(1.7, 0.3, 1);
	prisma();
	glScalef(0.58, 3.3, 1);
	glTranslatef(-0.85, 0, 0);

	//meñique
	glTranslatef(-2.80, -0.39, 0);
	glRotatef(angFmeñique, 0, 1, 0);
	glTranslatef(0.02, -0.19, 0);
	glColor3f(1, 0, 0);
	glScalef(1.5, 0.3, 1);
	prisma();
	glScalef(0.57, 3.3, 1);

	//falange meñique
	glTranslatef(0.88, 0, 0);
	glRotatef(angFmeñique, 0, 1, 0);
	glTranslatef(0.75, 0, 0);
	glColor3f(0, 1, 0);
	glScalef(1.5, 0.3, 1);
	prisma();
	glScalef(0.57, 3.3, 1);

	//falange final meñique
	glTranslatef(0.88, 0, 0);
	glRotatef(angFmeñique, 0, 1, 0);
	glTranslatef(0.75, 0, 0);
	glColor3f(0, 1, 1);
	glScalef(1.5, 0.3, 1);
	prisma();
	glScalef(0.57, 3.3, 1);
	////////////@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

	glFlush();
}

void remodelar(int width, int height)
{
	if (height == 0)
	{
		height = 1;
	}
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	// tipo de vista
	//glOrtho(-5,5,-5,5,0.1,20);
	glFrustum(-5, 5, -5, 5, 4.0, 30.0);
	glutPostRedisplay();
}

void teclado(unsigned char key, int x, int y)
{
	switch (key)
	{
	case'w':case'W':		//acerca al objeto con traslación en Z pos
		transZ += 0.2f;
		break;

	case's':case'S':		//aleja al objeto con traslación en Z neg
		transZ -= 0.2f;
		break;

	case'a':case'A':		//traslada al objeto hacia la derecha en X pos
		transX += 0.2f;
		break;

	case'd':case'D':		//traslada al objeto hacia la izquierda en X neg
		transX -= 0.2f;
		break;

	case'e':case'E':		//traslada al objeto hacia arriba en Y pos
		transY += 0.2f;
		break;

	case'c':case'C':		//traslada al objeto hacia abajo en Y neg
		transY -= 0.2f;
		break;

	case 27:				//Si presiona la tecla ESC(ASCII 27) sale
		exit(0);
		break;
	case 'h':
		if (angHombro < 90)
			angHombro += 0.5f;
		break;
	case 'H':
		if (angHombro > -90)
			angHombro -= 0.5f;
		break;
	case 'm':
		if (angMuñeca < 90)
			angMuñeca += 0.5f;
		break;
	case 'M':
		if (angMuñeca > -45)
			angMuñeca -= 0.5f;
		break;
	case 'v':
		if (angCodo < 130)
			angCodo += 0.5f;
		break;
	case 'V':
		if (angCodo > 0)
			angCodo -= 0.5f;
	case '1'://rotacion de dedo
		if (angFpulgar < 45)
			angFpulgar += 0.5f;
		break;
	case '!':
		if (angFpulgar > 0)
			angFpulgar -= 0.5f;
		break;
	case '2'://rotacion de dedo
		if (angFindice > -90)
			angFindice -= 0.5f;
		break;
	case '"':
		if (angFindice < 0)
			angFindice += 0.5f;
		break;
	case '3'://rotacion de dedo
		if (angFmedio > -90)
			angFmedio -= 0.5f;
		break;
	case '#':
		if (angFmedio < 0)
			angFmedio += 0.5f;
		break;
	case '4'://rotacion de dedo
		if (angFanular > -90)
			angFanular -= 0.5f;
		break;
	case '$':
		if (angFanular < 0)
			angFanular += 0.5f;
		break;
	case '5'://rotacion de dedo
		if (angFmeñique > -90)
			angFmeñique -= 0.5f;
		break;
	case '%':
		if (angFmeñique < 0)
			angFmeñique += 0.5f;
		break;

	default:				//Si es cualquier otra tecla no hace nada
		break;
	}
	glutPostRedisplay();
}

void teclasFlechas(int tecla, int x, int y)
{
	switch (tecla) {
	case GLUT_KEY_UP:
		angleX += 2.0f;
		break;
	case GLUT_KEY_DOWN:
		angleX -= 2.0f;
		break;
	case GLUT_KEY_LEFT:
		angleY += 2.0f;
		break;
	case GLUT_KEY_RIGHT:
		angleY -= 2.0f;
		break;
	default:
		break;
	}
	glutPostRedisplay();
}


int main(int argc, char *argv[])
{
	
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE | GLUT_DEPTH); 

	glutInitWindowSize(650, 650);

	glutInitWindowPosition(550, 50);

	glutCreateWindow("Practica 4 CG02 Raul GE");

	inicializar();
	
	glutDisplayFunc(dibujar);
	glutReshapeFunc(remodelar);

	
	glutKeyboardFunc(teclado);

	glutSpecialFunc(teclasFlechas);
	glutMainLoop();

	return 0;
}