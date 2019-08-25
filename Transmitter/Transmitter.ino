#define GREEN_ 13
#define GREENW 12

#define BLUE_ 10
#define BLUEW 11

#define BROWN_ 8
#define BROWNW 9

#define ORANGE_ 7
#define ORANGEW 6


void setup() {
//  pinMode(GREEN_, INPUT);
//  pinMode(GREENW, INPUT);
//
//  pinMode(BLUE_, INPUT);
//  pinMode(BLUEW, INPUT);
//
//  pinMode(BROWN_, INPUT);
//  pinMode(BROWNW, INPUT);
//
//  pinMode(ORANGE_, INPUT);
//  pinMode(ORANGEW, INPUT);

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
//  Serial.write(
//    digitalRead(GREEN_)
//  );

//  digitalWrite(GREEN_, HIGH);
//  digitalWrite(GREENW, HIGH);
}
