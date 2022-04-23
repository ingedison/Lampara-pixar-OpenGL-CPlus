#include <windows.h>
#include <gl\gl.h> 
#include <gl\glu.h>
//#include <GL/glut.h>
#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "glut32.lib")
#pragma comment(lib, "glu32.lib")

//Escritorio
const GLfloat esAmb[4] = {0.9,0.3,0,1};
const GLfloat esDif[4] = {0.9,0.3,0,1};
const GLfloat esSpe[4] = {0.9,0.3,0,1};
GLfloat esShi = 100;

const GLfloat oroAmb[4] = {0.24725f,0.2245f,0.0645f,1.0f};
const GLfloat oroDif[4] = {0.34615f,0.3143f,0.0903f,1.0f};
const GLfloat oroSpe[4] = {0.797357f,0.723991f,0.208006f,1.0f};
GLfloat oroShi = 10.0f;

const GLfloat esmeraldaAmb[4] = {0.0215f,0.1745f,0.0215f,0.55f};
const GLfloat esmeraldaDif[4] = {0.07568f,0.61424f,0.07568f,0.55f};
const GLfloat esmeraldaSpe[4] = {0.633f,0.727811f,0.633f,0.55};
GLfloat esmeraldaShi = 76.8f;

const GLfloat bomAmb[4] = {1,1,1,1};
const GLfloat bomDif[4] = {1,1,1,1};
const GLfloat bomSpe[4] = {1,1,1,1};
GLfloat bomShi = 76.8f;//100

const GLfloat rojo1[4] = {1,0,0};
const GLfloat rojo2[4] = {1,0,0};
const GLfloat rojo3[4] = {1,0,0};
GLfloat rojo4= 1.0f;

const GLfloat totalAmb[4] = {0.50f,0.50f,0.50f,1.0f};
const GLfloat total_Amb[4] = {1.0f,0.54902f,0.0f,1.0f};
const GLfloat totalDif[4] = {0.50f,0.50f,0.50f,1.0f};
const GLfloat totalSpe[4] = {1.0f,1.0f,1.0f,1.0f};
GLfloat totalShi = 128.0f;

const GLfloat mesaAmb[4] = {0.823529, 0.411765, 0.117647, 1.0};
const GLfloat mesaDif[4] = {0.50f,0.50f,0.50f,1.0f};
const GLfloat mesaSpe[4] = {1.0f,1.0f,1.0f,1.0f};
GLfloat mesaShi = 128.0f;

int on_off=0;
float a=0,b=0,c=0,d=0;

void body(){
     
	   glPushMatrix();//PALITO BOLA BOLA
   	   glTranslatef(13.5,9.5,-3.5);
   	   glRotatef(100,30,30,0);
       glScalef(1.5,1.5,6);
   	   glutSolidCube(0.6);
       glPopMatrix();
        
        glPushMatrix();//palito 1 vertical
    	glTranslatef(13.6,4.5,-3);
    	glRotatef(45,1,0,0);
    	glScalef(1,30,1);
    	glutSolidCube(0.3);
    	glPopMatrix();	
    	
    	glPushMatrix();//palito 2 vertical
    	glTranslatef(14.2,4.5,-3);
    	glRotatef(45,1,0,0);
    	glScalef(1,30,1);
    	glutSolidCube(0.3);
    	glPopMatrix();

		glPushMatrix();//palito 1 vertical
    	glTranslatef(13.4,-0.5,-3);
    	glRotatef(0,0,0,0);
    	glScalef(1,20,1);
    	glutSolidCube(0.3);
    	glPopMatrix();	
    	
    	glPushMatrix();//palito 2 vertical
    	glTranslatef(12.8,-0.5,-3);
    	glRotatef(0,0,0,0);
    	glScalef(1,20,1);
    	glutSolidCube(0.3);
    	glPopMatrix();

}

void head(){
	           //bombilla
	           glMaterialfv(GL_FRONT, GL_AMBIENT, bomAmb);
			   glMaterialfv(GL_FRONT, GL_DIFFUSE, bomDif);
			   glMaterialfv(GL_FRONT, GL_SPECULAR, bomSpe);
			   glMaterialf(GL_FRONT, GL_SHININESS, bomShi);

               glPushMatrix();
			   glTranslatef(8.5f,8.7f,0.0f);
			   glRotatef(180,60,90,40);
			   glutSolidSphere(1,30,30);
			   glPopMatrix();
				
			   glMaterialfv(GL_FRONT, GL_AMBIENT, esmeraldaAmb);
			   glMaterialfv(GL_FRONT, GL_DIFFUSE, esmeraldaDif);
			   glMaterialfv(GL_FRONT, GL_SPECULAR, esmeraldaSpe);
			   glMaterialf(GL_FRONT, GL_SHININESS, esmeraldaShi); 
  
			    glPushMatrix();
				glTranslatef(8.4,8.4,-1.3);
				glRotatef(180,1,1,1);
				glRotatef(-12,1,0,0);
				glutSolidCone(3,5,30,1);
			    glPopMatrix();


			   glMaterialfv(GL_FRONT, GL_AMBIENT, oroAmb);
			   glMaterialfv(GL_FRONT, GL_DIFFUSE, oroDif);
			   glMaterialfv(GL_FRONT, GL_SPECULAR, oroSpe);
			   glMaterialf(GL_FRONT, GL_SHININESS, esmeraldaShi);
    
			   glPushMatrix();//bola que sostiene la lampara
			   glTranslatef(11.5,10.7,-2);
			   glRotatef(0,1,1.0f,0.0f);
			   glRotatef(15.0f,1.0f,0.0f,0.0f);
			   glutSolidSphere(1.3,10,10);
			   glPopMatrix();

			   glMaterialfv(GL_FRONT, GL_AMBIENT, esmeraldaAmb);
			   glMaterialfv(GL_FRONT, GL_DIFFUSE, esmeraldaDif);
			   glMaterialfv(GL_FRONT, GL_SPECULAR, esmeraldaSpe);
			   glMaterialf(GL_FRONT, GL_SHININESS, esmeraldaShi);
 
       
  

}

void uniones(){
	            glMaterialfv(GL_FRONT, GL_AMBIENT, oroAmb);
			    glMaterialfv(GL_FRONT, GL_DIFFUSE, oroDif);
			    glMaterialfv(GL_FRONT, GL_SPECULAR, oroSpe);
			    glMaterialf(GL_FRONT, GL_SHININESS,oroShi);


	   glPushMatrix();//bola del palito
       glTranslatef(15,8,-3.5);
       glRotatef(0,0.0f,1.0f,0.0f);
       glRotatef(15.0f,1.0f,0.0f,0.0f);
       glutSolidSphere(1,10,10);
       glPopMatrix();
	        
        glPushMatrix();//bola del palito
        glTranslatef(13.3,2,-3.5);
        glRotatef(0,0.0f,1.0f,0.0f);
        glRotatef(15.0f,1.0f,0.0f,0.0f);
        glutSolidSphere(1,10,10);
        glPopMatrix();
		        
        glPushMatrix();//bola del palito
        glTranslatef(13.3,-4,-3.5);
        glRotatef(0,0.0f,1.0f,0.0f);
        glRotatef(15.0f,1.0f,0.0f,0.0f);
        glutSolidSphere(1,10,10);
        glPopMatrix();
	
		glMaterialfv(GL_FRONT, GL_AMBIENT, total_Amb);
			    glMaterialfv(GL_FRONT, GL_DIFFUSE, oroDif);
			    glMaterialfv(GL_FRONT, GL_SPECULAR, oroSpe);
			    glMaterialf(GL_FRONT, GL_SHININESS,oroShi);

		glPushMatrix();
        glTranslatef(13.3,-5.6,-3.5);
        glRotatef(-20.0f,0.0f,1.0f,0.0f);
        glRotatef(-80.0f,1.0f,0.0f,0.0f);
        glutSolidCone(3,2,8,6);
        glPopMatrix();

}

void shapes_decor(){

}



void render(void){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(0.0f,10.0f,40.0f,  0.0f,0.0f,0.0f,  0.0f,1.0f,0.0f);
    
	head();
    body();
	uniones();

   glMaterialfv(GL_FRONT, GL_AMBIENT, mesaAmb);
			    glMaterialfv(GL_FRONT, GL_DIFFUSE, mesaDif);
			    glMaterialfv(GL_FRONT, GL_SPECULAR, mesaSpe);
			    glMaterialf(GL_FRONT, GL_SHININESS,mesaShi);

        glPushMatrix();//palito 2 vertical
    	glTranslatef(4.2,-13.5,-25);
    	glRotatef(-5,1,0,0);
    	glScalef(140,6,120);
    	glutSolidCube(0.3);
    	glPopMatrix();
    	
 

glPushMatrix();//off-on
        
        glMaterialfv(GL_FRONT, GL_AMBIENT, rojo1);
        glMaterialfv(GL_FRONT, GL_DIFFUSE, rojo2);
        glMaterialfv(GL_FRONT, GL_SPECULAR, rojo3);
        glMaterialf(GL_FRONT, GL_SHININESS, rojo4);
        if(on_off==0){
        glTranslatef(13.3,-5,-2);
        }
    	if(on_off==1){
        glTranslatef(13.3,-5.2,-2);
        }
    	
        glRotatef(0,0,0,0);
    	glScalef(1,1,-1);
    	glutSolidCube(1);
    	glPopMatrix();
    	
    /////////////////////77////
 

    
    glutSwapBuffers();
}


void Redimensionar(GLsizei ancho, GLsizei alto){
	if(alto == 0){
	  alto = 1;
	}
	glViewport(0, 0, ancho, alto);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
	if(ancho>alto){
		gluPerspective(45,ancho/alto,1,150);
	}
	else{
		gluPerspective(45,alto/ancho,1,150);
	}
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void InicializarGL(){
   glClearColor(0.5,0.5,0.5,0);

	//Parametros de la luz 0
	GLfloat ambientlight[] =	{0.5f ,0.5f ,0.5f ,0.5f};
	GLfloat difuselight[] =		{0.0f ,0.0f ,0.0f ,0.0f};
	GLfloat specularlight[] =	{0.5f ,0.5f ,0.5f ,0.5f};
	GLfloat lightposition[] =	{-10.0f,-2.0f,30.0f,0.0f};
	
	GLfloat ambientlight1[] =	{0.4, 0.4, 0.4,0.4};
	GLfloat difuselight1[] =	{0.9, 0.9, 0.9, 0.9};
	GLfloat specularlight1[] =	{1.0, 1.0, 1.0, 1.0};
	GLfloat lightposition1[] =	{6.6,4.7,-1,0.5f};
	GLfloat direcciondeluz[] = {-5.0f,-1.0f,-1};

	//Se setean los parametros
	glLightfv(GL_LIGHT0,GL_AMBIENT,ambientlight);
	glLightfv(GL_LIGHT0,GL_DIFFUSE,difuselight);
	glLightfv(GL_LIGHT0,GL_SPECULAR,specularlight);
	glLightfv(GL_LIGHT0,GL_POSITION,lightposition);

	glLightfv(GL_LIGHT1,GL_AMBIENT,ambientlight1);
	glLightfv(GL_LIGHT1,GL_DIFFUSE,difuselight1);
	glLightfv(GL_LIGHT1,GL_SPECULAR,specularlight1);
	glLightfv(GL_LIGHT1,GL_POSITION,lightposition1);
	glLightf(GL_LIGHT1,GL_SPOT_CUTOFF,45);
    glLightfv(GL_LIGHT1,GL_SPOT_DIRECTION,direcciondeluz);

	glEnable(GL_DEPTH_TEST);	//Test de profundidad
	glEnable(GL_LIGHTING);	    //se activa la iluminacion

	if(on_off==1){
	              glEnable(GL_LIGHT1);	    //se activa la luz 0 que previamente se habia seteado
	}
	else{ 
		          glDisable(GL_LIGHT1);	
	}
	glEnable(GL_LIGHT0);
	glEnable(GL_COLOR_MATERIAL);	//Se activa lo materiales de color
	glColorMaterial(GL_BACK,GL_AMBIENT_AND_DIFFUSE);  //Se desean de tipo ambiente y difusión (tambien incluyen specular
	
   	
}


void keyboard(unsigned char key, int x, int y){
    float u=0;
    switch (key){
           case ' ':
                if(on_off==0){
                   on_off=1;
                   InicializarGL();
				   glutPostRedisplay();
                    }
                else{
                   on_off=0;
                   InicializarGL();
				   glutPostRedisplay();
                }
           break; 
           case 0x1B:
          glFlush();
          exit(0);
          break;         
    }
}


int  main(void){ 
//	glutInitWindowPosition(120,120);
	glutInitWindowSize(800,800);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutCreateWindow("Lampara");
	glutKeyboardFunc(keyboard);
	glEnable(GL_DEPTH_TEST);
	glutIdleFunc(render);
	InicializarGL();
	glutDisplayFunc(render);
    glutReshapeFunc(Redimensionar);
    glutMainLoop();
    return 0;
}