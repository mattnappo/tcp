/* Big Arduino */

#define STATUS LOW

#define GREEN_ 13
#define GREENW 12

#define BLUE_ 10
#define BLUEW 11

#define BROWN_ 8
#define BROWNW 9

#define ORANGE_ 7
#define ORANGEW 6

int write_green() {
  digitalWrite(GREEN_, STATUS);
  digitalWrite(GREENW, STATUS);
}


void setup() {
  pinMode(GREEN_, OUTPUT);
  pinMode(GREENW, OUTPUT);

  pinMode(BLUE_, OUTPUT);
  pinMode(BLUEW, OUTPUT);

  pinMode(BROWN_, OUTPUT);
  pinMode(BROWNW, OUTPUT);

  pinMode(ORANGE_, OUTPUT);
  pinMode(ORANGEW, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  
}
