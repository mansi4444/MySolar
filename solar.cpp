#include <GL/glut.h>
#include<math.h>
#define PI 3.14
float angleMercury,angleVenus,angleEarth,angleMars,angleJupiter,angleSaturn,angleUranus,angleNeptune=0.0;
GLfloat sx=0.2,sy=0.2,sz=0.2;
GLfloat sc[8]={0.4 , 0.40,0.50, 0.60,0.80,1.0,1.05,1.13};
double ang=2*PI/360;
GLfloat qPos[]={0,0,0,0.1};        //position


void initLighting()
{
	
//lighting color
GLfloat black[]={0.0f,0.0f,0.0f,1.0f};
GLfloat white[]={1.0f,1.0f,1.0f,1.0f};
GLfloat blue[]={0.0f,0.0f,0.9f,1.0f};
GLfloat er[]={0.0f,5.0f,0.9f,1.0f};
GLfloat yellow[]={0.7f,0.2f,0.0f,1.0f};
//lighting intensity
GLfloat qAmb[]={0.1,0.1,0.1,1.0};//ambient lighting
GLfloat qDif[]={1.0,1.0,1.0,1.0};//diffuse lighting
GLfloat qSpec[]={.50,.50,.50,.10};//specular lighting

	//enable lighting
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT7);

    glLightfv(GL_LIGHT7,GL_AMBIENT,qAmb);
    glLightfv(GL_LIGHT7,GL_DIFFUSE,qDif);
    glLightfv(GL_LIGHT7,GL_SPECULAR,qSpec);

 }


void myinit()
{
   glClearColor(0.0,0.0,0.0,0.0);//black background
   glPointSize(3.0);
   glLineWidth(3.0);

}


//function to draw orbits using white dots
void orbit()
{
glColor3f(0.5,0.5,0.5);    //white color
for(int i=0;i<8;i++){
glPushMatrix();
glRotatef(63,1.0,0.0,0.0);    ///angle,x,y,z axes
glScalef(sc[i],sc[i],sc[i]);   
glBegin(GL_POINTS);
double ang1=0.0;
  for(int i=0;i<360;i++)
  {glVertex2d(cos(ang1),sin(ang1));
   ang1+=2*PI/360;  }
glEnd();
glPopMatrix();
}
}


void draw(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT); //clear prev color and depth values
    glColor3f(0.5,0.50,0.50);                        //white
    orbit();               
    glLoadIdentity();                                //reset to identity matrix
    glPushMatrix();
   // glEnable(GL_DEPTH_TEST);
   glEnable(GL_COLOR_MATERIAL);
       glPushMatrix();
       glColor3f(0.65,0.45,0.0);
       glScalef(sx,sy,sz);
        glLightfv(GL_LIGHT7,GL_POSITION,qPos);
       glutSolidSphere(1,50,50);                      //sun
       glPopMatrix();
       glScalef(0.2,0.2,0.2);
            
       
       //mercury
       glPushMatrix();
         glRotatef(angleMercury,0.0,1.0,-0.5);
         glTranslatef(1.5,0.0,0.0);
         glColor3f(1.0,0.9,0.0);
         glScalef(0.08,0.08,0.08);
         glutSolidSphere(1,50,50);
       glPopMatrix();

        //venus
       glPushMatrix();
         glRotatef(angleVenus,0.0,1.0,-0.5);
         glTranslatef(2.0,0.0,0.0);
         glColor3f(0.9,0.1,0.0);
         glScalef(0.1,0.1,0.1);
         glutSolidSphere(1,50,50);
       glPopMatrix();
        
        //earth
       glPushMatrix();
         glRotatef(angleEarth,0.0,1.0,-0.5);
         glTranslatef(2.5,0.0,0.0);
         glColor3f(0.0,0.1,0.7);
         glScalef(0.23,0.23,0.23);
         glutSolidSphere(1,50,50);
        glPopMatrix();
        
		//mars
       glPushMatrix();
         glRotatef(angleMars,0.0,1.0,-0.5);
         glTranslatef(-3.0,0.0,0.0);
         glColor3f(0.05,0.05,0.01);
         glScalef(0.17,0.17,0.17);
         glutSolidSphere(1,50,50);
       glPopMatrix();

        //jupiter
       glPushMatrix();
         glRotatef(angleJupiter,0.0,1.0,-0.5);
         glTranslatef(-4.0,0.0,0.0);
         glColor3f(0.4,0.2,0.0);
         glScalef(0.5,0.5,0.5);
         glutSolidSphere(1,50,50);
       glPopMatrix();

        //saturn
       glPushMatrix();
         glRotatef(angleSaturn,0.0,1.0,-1.0);
         glTranslatef(-5.0,0.0,0.0);
         glColor3f(0.9,0.0,0.0);
         glScalef(0.4,0.4,0.4);
         glutSolidSphere(1,50,50);
         glPushMatrix();
             glRotatef(45,1.0,0.0,0.0);
             glPointSize(3);
             glColor3f(5.0,3.0,1.0);
             glScalef(1.2,1.2,1.2);
             glBegin(GL_POINTS);
                double ang1=0.0;
                int i=0;
                for(i=0;i<50;i++)
                  {glVertex2d(cos(ang1),sin(ang1));
                   ang1+=2*PI/50;  }
            glEnd();

            glPointSize(2);
           glPopMatrix();//ring of saturn made
       glPopMatrix();

        //uranus
       glPushMatrix();
         glRotatef(angleUranus,0.0,1.0,-0.5);
         glTranslatef(5.2,0.0,0.0);
         glColor3f(0.0,0.5,0.9);
         glScalef(0.23,0.23,0.23);
         glutSolidSphere(1,50,50);
       glPopMatrix();

        //neptune
       glPushMatrix();
         glRotatef(angleNeptune,0.0,1.0,-0.5);
         glTranslatef(-5.7,0.0,0.0);
         glColor3f(0.0,0.0,0.9);
         glScalef(0.2,0.2,0.2);
         glutSolidSphere(1,50,50);
       glPopMatrix();


glPopMatrix();
     glFlush();
}





//inner planets will have more speed than outer
void update(int value)
{
	
angleMercury+=3;            ///if we decrease 3 to 2,,,planet will move slower
if(angleMercury>360){
    angleMercury-=360;}
    
angleVenus+=2;
if(angleVenus>360){
    angleVenus-=360;}          ///angle-360 done so that after one circle it becomes angle again... 

angleEarth+=1.7;
if(angleEarth>360){
    angleEarth-=360;}

angleMars+=1.5;
if(angleMars>360){
    angleMars-=360;}

angleJupiter+=1;
if(angleJupiter>360){
    angleJupiter-=360;}

angleSaturn+=0.5;
if(angleSaturn>360){
    angleSaturn-=360;}
    
angleUranus+=0.45;
if(angleUranus>360){
    angleUranus-=360;}

angleNeptune+=0.3;
if(angleNeptune>360){
    angleNeptune-=360;}


glutPostRedisplay();      
glutTimerFunc(20,update,0);    // (no.ofmilliseconds,callbackfunction,value)....if value comes,we will stop this fucntion to call update function
}



int main(int argc, char **argv)
{
	
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(800,800);
    glutCreateWindow("Solar System Animation");
    initLighting();
	myinit();
    glutDisplayFunc(draw);
	glutTimerFunc(20,update,0);
    glutMainLoop();
    
	return 0;
}
