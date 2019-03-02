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
	/////////////////////
	glTranslatef(transX, transY, transZ);

	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	glTranslatef(3.5, 5, 0);
	glScalef(2, 1, 1.3);
	prisma();

	glLoadIdentity();
	/////////////////////
	glTranslatef(transX, transY, transZ);

	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	glTranslatef(5, 5, 0);
	glScalef(1, 1.2, 1.3);
	prisma();

	glLoadIdentity();
	/////////////////////
	glTranslatef(transX, transY, transZ);

	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	glTranslatef(6, 5, 0);
	glScalef(1.5, 1, 1.3);
	prisma();

	glLoadIdentity();
	/////////////////////
	glTranslatef(transX, transY, transZ);

	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	glTranslatef(7, 5, 0);
	glScalef(0.8, 1.1, 1.3);
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