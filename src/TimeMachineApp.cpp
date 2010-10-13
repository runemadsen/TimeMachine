#include "cinder/app/AppBasic.h"
#include <list>
using namespace ci;
using namespace ci::app;
using namespace std;

class TimeMachineApp : public AppBasic 
{
 public:
	void setup();
	void update();
	void draw();
};

void TimeMachineApp::setup()
{
	//int rc = system("open Projects/");
	
	//cout << "Ran command: " << rc << endl;
	
	int i;
	printf ("Checking if processor is available...");
	if (system(NULL)) 
		puts ("Ok");
    else 
		puts ("Not Ok");
	printf ("Executing command LS...\n");
	i = system("open .");
	printf ("The value returned was: %d.\n",i);
}

void TimeMachineApp::update()
{

}

void TimeMachineApp::draw()
{
	gl::clear( Color( 0.1f, 0.1f, 0.1f ) );
}

// This line tells Cinder to actually create the application
CINDER_APP_BASIC( TimeMachineApp, RendererGl )
