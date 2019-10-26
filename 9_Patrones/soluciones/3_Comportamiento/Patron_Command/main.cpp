#include "Light.h"
#include "Command.h"
#include "FlipUpCommand.h"
#include "FlipDownCommand.h"
#include "Switch.h"

int main(){
	Light *lamp = new Light();
	Command *switchUp = new FlipUpCommand(lamp);
	Command *switchDown = new FlipDownCommand(lamp);

	     
	Switch myswitch(switchUp, switchDown);
	myswitch.flipUp();
	myswitch.flipDown();
	myswitch.flipUp();
	myswitch.flipDown();
	
	delete switchUp;
	delete switchDown;
	delete lamp;
	
}
