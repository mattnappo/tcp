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

  return 0;
}

int write_blue() {
  digitalWrite(BLUE_, STATUS);
  digitalWrite(BLUEW, STATUS);

  return 0;
}

int write_brown() {
  digitalWrite(BROWN_, STATUS);
  digitalWrite(BROWNW, STATUS);

  return 0;
}

int write_orange() {
  digitalWrite(ORANGE_, STATUS);
  digitalWrite(ORANGEW, STATUS);

  return 0;
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
  write_blue();
}
