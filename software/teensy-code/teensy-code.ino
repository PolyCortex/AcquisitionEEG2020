/*
 ______      _       _______                                 _               _
(_____ \    | |     (_______)             _                 (_)          _  | |
 _____) )__ | |_   _ _       ___   ____ _| |_ _____ _   _    _  ___    _| |_| |__  _____
|  ____/ _ \| | | | | |     / _ \ / ___|_   _) ___ ( \ / )  | |/___)  (_   _)  _ \| ___ |
| |   | |_| | | |_| | |____| |_| | |     | |_| ____|)   (   | |___ |    | |_| | | | ____|
|_|    \___/ \_)__  |\______)___/|_|      \__)_____|_/ \_)  |_(___/      \__)_| |_|_____)  (shit)
              (____/
*/

int ACH_1_pin = A0;
int ACH_2_pin = A1;
int ACH_3_pin = A2;
int ACH_4_pin = A3;

uint32_t ACH_1 = 0;
uint32_t ACH_2 = 0;
uint32_t ACH_3 = 0;
uint32_t ACH_4 = 0;

unsigned long start_usecs;

void setup() {
  Serial.begin(115200);
  start_usecs = micros();
}

void loop() {
  if (micros() - start_usecs > 5000){

    //reset start time
    start_usecs = micros();

    //read analog data
    ACH_1 = analogRead(ACH_1_pin);
    ACH_2 = analogRead(ACH_2_pin);
    ACH_3 = analogRead(ACH_3_pin);
    ACH_4 = analogRead(ACH_4_pin);

    //send the data over serial
    Serial.println(ACH_1);
    Serial.println(ACH_2);
    Serial.println(ACH_3);
    Serial.println(ACH_4);
    
  }
}
