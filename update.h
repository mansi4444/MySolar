// update.cpp
//Model that controls the speed of planets 
//Inner planets will have more speed than outer planets due to its radius of curvature

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
