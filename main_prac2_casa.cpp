//Semestre 2017 - 2
//************************************************************//
/*

FI UNAM
Guzman Esquivel Raul
Grupo 02
Version visual studio 2017
Practica 2 casa

*/

#include "Main.h"
void InitGL ( GLvoid )     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);				// Negro de fondo
	//glClearDepth(1.0f);									// Configuramos Depth Buffer
	//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	
	
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

	//Poner aqui codigo ha dibujar
	
	//amarillo
	glBegin(GL_QUADS);
	glColor3f(0.980, 0.937, 0);

	glVertex3f(-7, -2, 1);
	glVertex3f(-6, -2, 1);
	glVertex3f(-6, 2, 1);
	glVertex3f(-7, 2, 1);

	glVertex3f(5, -2, 1);
	glVertex3f(6, -2, 1);
	glVertex3f(6, 2, 1);
	glVertex3f(5, 2, 1);

	glVertex3f(-6, -4, 1);
	glVertex3f(5, -4, 1);
	glVertex3f(5, 5, 1);
	glVertex3f(-6, 5, 1);
	
	glVertex3f(-5,5,1);
	glVertex3f(4,5,1);
	glVertex3f(4,6,1);
	glVertex3f(-5,6,1);

	glVertex3f(-3,6,1);
	glVertex3f(2,6,1);
	glVertex3f(2,7,1);
	glVertex3f(-3,7,1);
		
	glVertex3f(-5, -5, 1);
	glVertex3f(4, -5, 1);
	glVertex3f(4, -4, 1);
	glVertex3f(-5, -4, 1);

	glVertex3f(-3, -6, 1);
	glVertex3f(2, -6, 1);
	glVertex3f(2, -5, 1);
	glVertex3f(-3, -5, 1);

	glEnd();

	//
	glBegin(GL_QUADS);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-3,7,1);
	glVertex3f(2,7,1);
	glVertex3f(2,8,1);
	glVertex3f(-3,8,1);

	glVertex3f(-5,6,1);
	glVertex3f(-3,6,1);
	glVertex3f(-3,7,1);
	glVertex3f(-5,7,1);

	glVertex3f(-6,5,1);
	glVertex3f(-5,5,1);
	glVertex3f(-5,6,1);
	glVertex3f(-6,6,1);

	glVertex3f(-7,3,1);
	glVertex3f(-6,3,1);
	glVertex3f(-6,5,1);
	glVertex3f(-7,5,1);
	//linea de los lentes
	glVertex3f(-8,2,1);
	glVertex3f(7,2,1);
	glVertex3f(7,3,1);
	glVertex3f(-8,3,1);
	//
	glVertex3f(-8,-2,1);
	glVertex3f(-7,-2,1);
	glVertex3f(-7,2,1);
	glVertex3f(-8,2,1);

	glVertex3f(-7,-4,1);
	glVertex3f(-6,-4,1);
	glVertex3f(-6,-2,1);
	glVertex3f(-7,-2,1);

	glVertex3f(-6,-5,1);
	glVertex3f(-5,-5,1);
	glVertex3f(-5,-4,1);
	glVertex3f(-6,-4,1);

	glVertex3f(-5,-6,1);
	glVertex3f(-3,-6,1);
	glVertex3f(-3,-5,1);
	glVertex3f(-5,-5,1);
	
	glVertex3f(-3,-7,1);
	glVertex3f(2,-7,1);
	glVertex3f(2,-6,1);
	glVertex3f(-3,-6,1);
	//
	glVertex3f(6, -2, 1);
	glVertex3f(7, -2, 1);
	glVertex3f(7, 2, 1);
	glVertex3f(6, 2, 1);

	glVertex3f(5, -4, 1);
	glVertex3f(6, -4, 1);
	glVertex3f(6, -2, 1);
	glVertex3f(5, -2, 1);

	glVertex3f(4, -5, 1);
	glVertex3f(5, -5, 1);
	glVertex3f(5, -4, 1);
	glVertex3f(4, -4, 1);

	glVertex3f(2, -6, 1);
	glVertex3f(4, -6, 1);
	glVertex3f(4, -5, 1);
	glVertex3f(2, -5, 1);
	//
	glVertex3f(2, 6, 1);
	glVertex3f(4, 6, 1);
	glVertex3f(4, 7, 1);
	glVertex3f(2, 7, 1);

	glVertex3f(4, 5, 1);
	glVertex3f(5, 5, 1);
	glVertex3f(5, 6, 1);
	glVertex3f(4, 6, 1);

	glVertex3f(5, 3, 1);
	glVertex3f(6, 3, 1);
	glVertex3f(6, 5, 1);
	glVertex3f(5, 5, 1);

	glVertex3f(-3,-4, 1);
	glVertex3f(2,-4, 1);
	glVertex3f(2,-3, 1);
	glVertex3f(-3,-3, 1);

	glVertex3f(2,-3, 1);
	glVertex3f(3,-3, 1);
	glVertex3f(3,-2, 1);
	glVertex3f(2,-2, 1);
	//lentes
	glVertex3f(-6,0,1);
	glVertex3f(-1,0, 1);
	glVertex3f(-1,2, 1);
	glVertex3f(-6,2, 1);

	glVertex3f(0,0, 1);
	glVertex3f(5,0, 1);
	glVertex3f(5,2, 1);
	glVertex3f(0,2, 1);

	glVertex3f(-1,1, 1);
	glVertex3f(0,1, 1);
	glVertex3f(0,2, 1);
	glVertex3f(-1,2, 1);

	glVertex3f(-5,-1, 1);
	glVertex3f(-2,-1, 1);
	glVertex3f(-2,0, 1);
	glVertex3f(-5,0, 1);

	glVertex3f(1,-1, 1);
	glVertex3f(4,-1, 1);
	glVertex3f(4,0, 1);
	glVertex3f(1,0, 1);

	glEnd();
	//Blanco
	glBegin(GL_QUADS);
	glColor3f(1, 1, 1);
	glVertex3f(-5, 0, 1);
	glVertex3f(-4, 0, 1);
	glVertex3f(-4, 2, 1);
	glVertex3f(-5, 2, 1);

	glVertex3f(-4, 1, 1);
	glVertex3f(-3, 1, 1);
	glVertex3f(-3, 2, 1);
	glVertex3f(-4, 2, 1);

	glVertex3f(1, 0, 1);
	glVertex3f(2, 0, 1);
	glVertex3f(2, 2, 1);
	glVertex3f(1, 2, 1);

	glVertex3f(2, 1, 1);
	glVertex3f(3, 1, 1);
	glVertex3f(3, 2, 1);
	glVertex3f(2, 2, 1);

	glEnd();

	//
	glFlush();
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
	if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	glOrtho(-10,15,-10,10,-10,10);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();									
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	 switch (key) 
	 {
		case 27: exit(0);
				 break;
	 }
	  glutPostRedisplay();
}    

int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitWindowSize  (500, 500);	// Tamaño de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 2 Ejercicio Casa RGE"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc	  (keyboard);	//Indicamos a Glut función de manejo de teclado
  glutMainLoop        ( );          // 

  return 0;
}

