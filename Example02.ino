
// Example 02: Turn on LED while the button is pressed
const int LED = 13; // the pin for the LED
const int BUTTON = 7; // the input pin where the
// pushbutton is connected
int pstate = 0; // val will be used to store the state
int pval = digitalRead(BUTTON);
int state = 0;
// of the input pin 
void setup() {
	pinMode(LED, OUTPUT); // tell Arduino LED is an output
	pinMode(BUTTON, INPUT); // and BUTTON is an input
}
void loop(){
	int val = digitalRead(BUTTON); // read input value and store it
	// KEY UP
	if(pval != val && val == LOW){
		state = 1 - state;
	}

	if( state != pstate ) {
		if(state == 1)
			digitalWrite(LED, HIGH);
		else
			digitalWrite(LED, LOW);
	}

	pstate = state;
	pval = val;
}