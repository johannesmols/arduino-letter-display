int pin2 = 2; //upper left
int pin3 = 3; //middle horizontal 
int pin4 = 4; //bottom right 
int pin5 = 5; //botom horizontal
int pin6 = 6; //bottom left
int pin7 = 7; //Dot
int pin8 = 8; //upper horizontal
int pin9 = 9; //upper right

//String to display
char input[] = "1337";
int waitBetweenWordLoops = 1000;

void setup() {
	//Set up pins as output
	pinMode(pin2, OUTPUT);
	pinMode(pin3, OUTPUT);
	pinMode(pin4, OUTPUT);
	pinMode(pin5, OUTPUT);
	pinMode(pin6, OUTPUT);
	pinMode(pin7, OUTPUT);
	pinMode(pin8, OUTPUT);
	pinMode(pin9, OUTPUT);
}

void runInput() {
	for(int i = 0; i < sizeof(input) - 1; i++) {
		sortInput(input[i], 1000, 500); //1000ms = default time for display of one letter; 500ms = default time for pause between two letters
	}
	//delay when one word has finished, optional
	delay(waitBetweenWordLoops);
}

void sortInput(char letter, int onTime, int offTime) {
	switch(letter) {
		case 'a':
			digitalWrite(pin6, HIGH);
			digitalWrite(pin2, HIGH);
			digitalWrite(pin3, HIGH);
			digitalWrite(pin8, HIGH);
			digitalWrite(pin9, HIGH);
			digitalWrite(pin4, HIGH);
			delay(onTime);
			digitalWrite(pin6, LOW);
			digitalWrite(pin2, LOW);
			digitalWrite(pin3, LOW);
			digitalWrite(pin8, LOW);
			digitalWrite(pin9, LOW);
			digitalWrite(pin4, LOW);
			delay(offTime);
			break;
		case 'b':
			digitalWrite(pin2, HIGH);
			digitalWrite(pin3, HIGH);
			digitalWrite(pin4, HIGH);
			digitalWrite(pin5, HIGH);
			digitalWrite(pin6, HIGH);
			digitalWrite(pin8, HIGH);
			digitalWrite(pin9, HIGH);
			delay(onTime);
			digitalWrite(pin2, LOW);
			digitalWrite(pin3, LOW);
			digitalWrite(pin4, LOW);
			digitalWrite(pin5, LOW);
			digitalWrite(pin6, LOW);
			digitalWrite(pin8, LOW);
			digitalWrite(pin9, LOW);
			delay(offTime);
			break;
		case 'c':
			digitalWrite(pin5, HIGH);
			digitalWrite(pin6, HIGH);
			digitalWrite(pin2, HIGH);
			digitalWrite(pin8, HIGH);
			delay(onTime);
			digitalWrite(pin5, LOW);
			digitalWrite(pin6, LOW);
			digitalWrite(pin2, LOW);
			digitalWrite(pin8, LOW);
			delay(offTime);
     break;
     case 'd':
      digitalWrite(pin5, HIGH);
      digitalWrite(pin6, HIGH);
      digitalWrite(pin2, HIGH);
      digitalWrite(pin8, HIGH);
      digitalWrite(pin9, HIGH);
      digitalWrite(pin4, HIGH);
      delay(onTime);
      digitalWrite(pin5, LOW);
      digitalWrite(pin6, LOW);
      digitalWrite(pin2, LOW);
      digitalWrite(pin8, LOW);
      digitalWrite(pin9, LOW);
      digitalWrite(pin4, LOW);
      delay(offTime);
			break;
    case '.':
      digitalWrite(pin7, HIGH);
      delay(offTime);
      digitalWrite(pin7, LOW);
      delay(offTime);
      break;
    case '-':
      digitalWrite(pin3, HIGH);
      delay(offTime);
      digitalWrite(pin3, LOW);
      delay(offTime);
      break;
    case ' ':
           delay(offTime);
      break;
    case '7':
      digitalWrite(pin8, HIGH);
      digitalWrite(pin9, HIGH);
      digitalWrite(pin4, HIGH);
      delay(onTime);
      digitalWrite(pin8, LOW);
      digitalWrite(pin9, LOW);
      digitalWrite(pin4, LOW);
      delay(offTime);
      break;
    case '1':
      digitalWrite(pin9, HIGH);
      digitalWrite(pin4, HIGH);
      delay(onTime);
      digitalWrite(pin9, LOW);
      digitalWrite(pin4, LOW);
      delay(offTime);
      break;
    case '3':
      digitalWrite(pin8, HIGH);
      digitalWrite(pin9, HIGH);
      digitalWrite(pin4, HIGH);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin5, HIGH);
      delay(onTime);
      digitalWrite(pin8, LOW);
      digitalWrite(pin9, LOW);
      digitalWrite(pin4, LOW);
      digitalWrite(pin3, LOW);
      digitalWrite(pin5, LOW);
      delay(offTime);
      break;
    case '_':
      digitalWrite(pin5, HIGH);
      delay(offTime);
      digitalWrite(pin5, LOW);
      delay(offTime);
    default:
      break;
	}
}  

void loop()	{
	//Write this in loop() to let it repeat endlessly, write this in setup() to only run it once
	runInput();
}
