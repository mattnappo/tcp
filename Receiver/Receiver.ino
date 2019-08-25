/* Mini Arduino */

#define GREEN_ 2
#define GREENW 3

#define BLUE_ 4
#define BLUEW 5

#define BROWN_ 6
#define BROWNW 7

#define ORANGE_ 8
#define ORANGEW 9


void setup() {
  pinMode(GREEN_, INPUT);
  pinMode(GREENW, INPUT);

  pinMode(BLUE_, INPUT);
  pinMode(BLUEW, INPUT);

  pinMode(BROWN_, INPUT);
  pinMode(BROWNW, INPUT);

  pinMode(ORANGE_, INPUT);
  pinMode(ORANGEW, INPUT);

  Serial.begin(9600);
}

void loop() {

}
