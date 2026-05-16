const int sensors[4] = {A0,A1,A2,A3};
const char keys[4] = {'d','f','j','k'};
const int hitThreshold = 80; //depending on how hard the hit is

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  for (int i = 0; i < 4; i++){
    int hitValue = analogRead(sensors[i]);
    
    if (hitValue > hitThreshold){
      Serial.println(keys[i]);
      delay(60);
    }

  }
}
