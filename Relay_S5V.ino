int relayInput = 2; // the input to relay pin


void setup() {
  // put your setup code here, to run once:
  pinMode(relayInput,OUTPUT); // Initialise pin as OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(relayInput,HIGH);// turn on relay
  delay(1000);

  digitalWrite(relayInput,LOW);// turn on relay
  delay(1000);
}
