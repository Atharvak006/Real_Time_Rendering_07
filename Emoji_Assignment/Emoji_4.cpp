#include<GL/freeglut.h>
#include<math.h>

#define PI 3.14159
bool bIsFullScreen = false;

int main(int argc, char* argv[])
{
	void initialize(void);
	void uninitialize(void);
	void resize(int, int);
	void display(void);
	void keyboard(unsigned char, int, int);
	void mouse(int, int, int, int);

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Emoji 4: Atharva Rahul Kshirsagar");

	initialize();

	glutReshapeFunc(resize);
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
	glutCloseFunc(uninitialize);

	glutMainLoop();

	return(0);

}

void initialize(void) {
	
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void resize(int width, int height)
{
	if (height <= 0)
		height = 1;
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glViewport(0, 0, (GLsizei)width, (GLsizei)height);

}

void DrawFace(void)
{
    float radius = 0.6f;
    float x_coordinate = 0.0f;
    float y_coordinate = 0.0f;

    float angle_in_radians;

    glBegin(GL_TRIANGLE_FAN);

    glColor3f( 1.00000f, 0.87059f, 0.20392f );

    for(int i = 0; i < 360; i++)
    {
        angle_in_radians = i * PI/180;

        x_coordinate = radius * cos(angle_in_radians) + 0.0f;
        y_coordinate = radius * sin(angle_in_radians) + 0.0f;

        glVertex3f(x_coordinate,y_coordinate,0.0f);
    }

    glEnd();
}

void DrawLeftEye(void)
{
    float radius = 0.06f;
    float x_coordinate = 0.0f;
    float y_coordinate = 0.0f;

    float angle_in_radians;

    glBegin(GL_TRIANGLE_FAN);

    glColor3f( 0.0f,0.0f,0.0f );

    for(int i = 0; i < 360; i++)
    {
        angle_in_radians = i * PI/180;

        x_coordinate = radius * cos(angle_in_radians) - 0.2601368564482f;
        y_coordinate = radius * sin(angle_in_radians) + 0.2029792206576f;

        glVertex3f(x_coordinate,y_coordinate,0.0f);
    }

    glEnd();
}

void DrawRightEye(void)
{
    float radius = 0.06f;
    float x_coordinate = 0.0f;
    float y_coordinate = 0.0f;

    float angle_in_radians;

    glBegin(GL_TRIANGLE_FAN);

    glColor3f( 0.0f,0.0f,0.0f );

    for(int i = 0; i < 360; i++)
    {
        angle_in_radians = i * PI/180;

        x_coordinate = radius * cos(angle_in_radians) + 0.2617006374478f;
        y_coordinate = radius * sin(angle_in_radians) + 0.2012495715051f;

        glVertex3f(x_coordinate,y_coordinate,0.0f);
    }

    glEnd();
}

void DrawMouth(void)
{
    float coordinates_of_Point1_X = -0.26f;
    float coordinates_of_Point1_y = -0.13f;
    float coordinates_of_Point2_X = 0.26f;
    float coordinates_of_Point2_y = -0.13f;

    float centerX = (coordinates_of_Point1_X + coordinates_of_Point2_X) / 2.0f; 
    float centerY = (coordinates_of_Point1_y + coordinates_of_Point2_y) / 2.0f;

    float radius = 0.26f;

    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(5.0f);

    glBegin(GL_LINE_STRIP);

    glVertex3f(-0.3f, -0.3f,0.0f);
    glVertex3f(0.3f, -0.3f,0.0f);

    glEnd();
}
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

    DrawFace();
    DrawLeftEye();
    DrawRightEye();
    DrawMouth();

    glutSwapBuffers();

}

void keyboard(unsigned char key,int x, int y)
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
	// Code
}