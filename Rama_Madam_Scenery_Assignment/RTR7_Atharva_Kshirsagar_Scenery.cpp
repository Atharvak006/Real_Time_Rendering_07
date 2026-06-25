/*
	My understanding
	glcolor3f(r,g,b,alpha) -> Hya function mule apn color set karu shakto ekhadya object cha
	Pn pahile aplyala rgb values kadhun ghyachet, pn te values apn directly nai vapru shakat
	aplyala floating rgb vaprava lagta. Hence we need to convert rgb values to floating by dividing by 255 
	or using converters.
*/

#include <GL/freeglut.h>
#include<math.h>

#define PI 3.14159

bool bIsFullScreen = false;

// function declarations


void drawSun(void);
void drawMountain1(void);
void drawMountain2(void);
void drawMountain3(void);

void SmallBackgroundmountain1(void);
void SmallBackgroundmountain2(void);

void drawHouse1(void);
void drawHouse2(void);

void drawTree1(void);
void drawTree2(void);
void drawTree3(void);

void drawBird1(void);
void drawBird2(void);
void drawBird3(void);

int main(int argc, char *argv[])
{
    
    void initialize(void);
    void uninitialize(void);
    void resize(int,int);
    void display(void);
    void keyboard(unsigned char, int, int);
    void mouse(int,int,int,int);

    glutInit(&argc,argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

    glutInitWindowSize(800,600);
    glutInitWindowPosition(100,100);

    glutCreateWindow("RTR-7 Atharva Kshirsagar Scenery");

    initialize();

    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutCloseFunc(uninitialize);

    glutMainLoop();

    return 0;
}

void initialize(void)
{
    // function che paramters
	// void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
	// Hya function mule aplyala background color mhanjech aplya case madhe sky cha color blue set hoto
	// Pn adhi glClear(GL_COLOR_BUFFER_BIT) he function call hota ani mg akha sky cha color adhi blue ni set hoto
	// ani mg apn tyavr mountains, trees, houses vagere kadhto

    glClearColor(0.40000f,1.00000f,1.00000f,1.0f);
}

void resize(int width, int height)
{
    if(height <= 0)
    {
        height = 1;
    }
    glViewport(0,0,width,height);
}

void drawSun(void)
{
    glBegin(GL_TRIANGLE_FAN);

    float x_coordinate = 0.0f;
    float y_coordinate = 0.0f;

    float radius = 0.15f;
    float Angle_In_Radians = 0.0f;

    glColor3f(0.94902f,0.72157f,0.02745f);

    int iCnt = 0;
    for(iCnt = 0; iCnt < 360; iCnt++)
    {
        Angle_In_Radians = iCnt * PI / 180;

        x_coordinate = radius * cos(Angle_In_Radians) + 0.75;
        y_coordinate = radius * sin(Angle_In_Radians) + 0.75;

    	// Ikde apn + 0.75 add karto karan jar apan add nai kela tr circle che center
		// che coordinates x = 0 and y = 0 astil
		// pn aplyala apla circle top right corner madhe havay
		// mhanun apan apla circle x + 0.75 ani y + 0.75 karto

        glVertex3f(x_coordinate,y_coordinate,0.0f);
    }

    glEnd();
}

void drawMountain1(void)
{
    glBegin(GL_TRIANGLES);

    glColor3f(0.5f,0.2f,0.1f); // Medium Brown
    glVertex3f(-1.0f,-0.2f,0.0f);

    glColor3f(0.7f,0.2f,0.2f);  // Light brown
    glVertex3f(-0.65f,0.55f, 0.0f);

    glColor3f(0.3f,0.1f,0.1f);  // darker brown
    glVertex3f(-0.3f,-0.2f,0.0f);

    glEnd();
}

void drawMountain2(void)
{
    glBegin(GL_TRIANGLES);

    glColor3f(0.5f,0.2f,0.1f);
    glVertex3f(-0.2f,-0.2f, 0.0f);

    glColor3f(0.7f, 0.2f, 0.2f);
    glVertex3f(0.15f, 0.75f, 0.0f);

    glColor3f(0.3f,0.1f,0.1f);
    glVertex3f(0.5f,-0.2f,0.0f);

    glEnd();
}

void drawMountain3(void)
{
    glBegin(GL_TRIANGLES);

    glColor3f(0.5f,0.2f,0.1f);
    glVertex3f(0.4f,-0.2f,0.0f);

    glColor3f(0.7f,0.2f,0.2f);
    glVertex3f(0.7f,0.45f,0.0f);

    glColor3f(0.3f,0.1f,0.1f);
    glVertex3f(1.0f,-0.2f,0.0f);

    glEnd();
}

void drawHouse1(void)
{
    // gharachi body

    glBegin(GL_QUADS); // QUADS mhanje quadrilateral
    
    glColor3f(0.7f,0.35f,0.2f);

    glVertex3f(-0.8f,-0.75f,0.0f);
    glVertex3f(-0.52f, -0.75f, 0.0f);
	glVertex3f(-0.52f, -0.55f, 0.0f);
	glVertex3f(-0.8f, -0.55f, 0.0f);

    glEnd();

    // gharacha roof

    glBegin(GL_TRIANGLES);

    glColor3f(0.3f, 0.2f, 0.2f);

	glVertex3f(-0.82f, -0.55f, 0.0f);
	glVertex3f(-0.66f, -0.43f, 0.0f);
	glVertex3f(-0.50f, -0.55f, 0.0f);

	glEnd();

    // door

    glBegin(GL_QUADS);

	glColor3f(1.0f, 1.0f, 0.8f);

	glVertex3f(-0.688f, -0.75f, 0.0f);
	glVertex3f(-0.632f, -0.75f, 0.0f);
	glVertex3f(-0.632f, -0.65f, 0.0f);
	glVertex3f(-0.688f, -0.65f, 0.0f);

	glEnd();

}

void drawHouse2(void)
{
	// dusrya gharachi body

	glBegin(GL_QUADS);

	glColor3f(0.7f, 0.35f, 0.2f);

	glVertex3f(-0.25f, -0.75f, 0.0f);
	glVertex3f(-0.03f, -0.75f, 0.0f);
	glVertex3f(-0.03f, -0.57f, 0.0f);
	glVertex3f(-0.25f, -0.57f, 0.0f);

	glEnd();

	// gharachi roof

	glBegin(GL_TRIANGLES);

	glColor3f(0.3f, 0.2f, 0.2f);

	glVertex3f(-0.27f, -0.57f, 0.0f);
	glVertex3f(-0.14f, -0.45f, 0.0f);
	glVertex3f(-0.01f, -0.57f, 0.0f);

	glEnd();

	// Door

	glBegin(GL_QUADS);

	glColor3f(1.0f, 1.0f, 0.8f);

	glVertex3f(-0.162f, -0.75f, 0.0f);
	glVertex3f(-0.118f, -0.75f, 0.0f);
	glVertex3f(-0.118f, -0.66f, 0.0f);
	glVertex3f(-0.162f, -0.66f, 0.0f);

	glEnd();
}
void drawTree1(void)
{
	// Trunk

	glBegin(GL_QUADS);

	glColor3f(0.5f, 0.25f, 0.1f);

	glVertex3f(-0.9f, -0.95f, 0.0f);
	glVertex3f(-0.86f, -0.95f, 0.0f);
	glVertex3f(-0.86f, -0.80f, 0.0f);
	glVertex3f(-0.9f, -0.80f, 0.0f);

	glEnd();

	// Leaves

	glBegin(GL_TRIANGLES);

	glColor3f(0.0f, 0.6f, 0.0f);

	glVertex3f(-0.98f, -0.80f, 0.0f);
	glVertex3f(-0.88f, -0.63f, 0.0f);
	glVertex3f(-0.78f, -0.80f, 0.0f);

	glEnd();
}

void drawTree2(void)
{
	// Trunk

	glBegin(GL_QUADS);

	glColor3f(0.5f, 0.25f, 0.1f);

	glVertex3f(0.08f, -0.75f, 0.0f);
	glVertex3f(0.12f, -0.75f, 0.0f);
	glVertex3f(0.12f, -0.60f, 0.0f);
	glVertex3f(0.08f, -0.60f, 0.0f);

	glEnd();

	// Leaves

	glBegin(GL_TRIANGLES);

	glColor3f(0.0f, 0.6f, 0.0f);

	glVertex3f(0.00f, -0.60f, 0.0f);
	glVertex3f(0.10f, -0.43f, 0.0f);
	glVertex3f(0.20f, -0.60f, 0.0f);

	glEnd();
}

void drawTree3(void)
{
	// Trunk

	glBegin(GL_QUADS);

	glColor3f(0.5f, 0.25f, 0.1f);

	glVertex3f(0.62f, -0.75f, 0.0f);
	glVertex3f(0.66f, -0.75f, 0.0f);
	glVertex3f(0.66f, -0.60f, 0.0f);
	glVertex3f(0.62f, -0.60f, 0.0f);

	glEnd();

	// Leaves

	glBegin(GL_TRIANGLES);

	glColor3f(0.0f, 0.6f, 0.0f);

	glVertex3f(0.54f, -0.60f, 0.0f);
	glVertex3f(0.64f, -0.43f, 0.0f);
	glVertex3f(0.74f, -0.60f, 0.0f);

	glEnd();
}

void drawBird1(void)
{
	glBegin(GL_LINES); // don vertices ghyayche ani tyanchi ek line banvaychi. 

	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex3f(-0.53f, 0.60f, 0.0f);
	glVertex3f(-0.50f, 0.63f, 0.0f);

	glVertex3f(-0.50f, 0.63f, 0.0f);
	glVertex3f(-0.47f, 0.60f, 0.0f);

	glEnd();
}

void drawBird2(void)
{
	glBegin(GL_LINES);

	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex3f(-0.23f, 0.72f, 0.0f);
	glVertex3f(-0.20f, 0.75f, 0.0f);

	glVertex3f(-0.20f, 0.75f, 0.0f);
	glVertex3f(-0.17f, 0.72f, 0.0f);

	glEnd();
}

void drawBird3(void)
{
	glBegin(GL_LINES);

	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex3f(0.17f, 0.62f, 0.0f);
	glVertex3f(0.20f, 0.65f, 0.0f);

	glVertex3f(0.20f, 0.65f, 0.0f);
	glVertex3f(0.23f, 0.62f, 0.0f);

	glEnd();
}

void SmallBackgroundmountain1()
{
	glBegin(GL_TRIANGLES);

	glColor3f(0.4f, 0.08f, 0.08f);

	// left base
	glVertex3f(-0.38f, -0.2f, 0.0f);

	// right base
	glVertex3f(-0.1f, -0.2f, 0.0f);

    // top
	glVertex3f(-0.25f, 0.20f, 0.0f);

	glEnd();
}

void SmallBackgroundmountain2()
{
	glBegin(GL_TRIANGLES);

	glColor3f(0.45f, 0.08f, 0.08f);

	// left base
	glVertex3f(0.3f, -0.2f, 0.0f);

	// right base
	glVertex3f(0.6f, -0.2f, 0.0f);

	glVertex3f(0.45f, 0.2f, 0.0f);

	glEnd();
}
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	// Ground

	glBegin(GL_QUADS);

	glColor3f(0.0f, 0.9f, 0.0f);

	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -0.2f, 0.0f);
	glVertex3f(-1.0f, -0.2f, 0.0f);

	glEnd();

	// Mountains

	SmallBackgroundmountain1();
	SmallBackgroundmountain2();
	
	drawMountain1();
	drawMountain2();
	drawMountain3();

	// Sun

	drawSun();

	// Houses

	drawHouse1();
	drawHouse2();

	// Birds

	drawBird1();
	drawBird2();
	drawBird3();

	// Trees

	drawTree1();
	drawTree2();
	drawTree3();

	glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 27:
		glutLeaveMainLoop();
		break;

	case 'F':
	case 'f':

		if (bIsFullScreen == false)
		{
			glutFullScreen();
			bIsFullScreen = true;
		}
		else
		{
			glutLeaveFullScreen();
			bIsFullScreen = false;
		}
		break;

	default:
		break;
	}
}

void mouse(int button, int state, int x, int y)
{
	switch (button)
	{
	case GLUT_RIGHT_BUTTON:
		glutLeaveMainLoop();
		break;

	default:
		break;
	}
}

void uninitialize(void)
{

}
