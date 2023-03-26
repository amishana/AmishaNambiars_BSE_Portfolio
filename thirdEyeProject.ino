  #include <ESP32Tone.h>
  #include <ESP32Servo.h>
  
  Servo servo;
  int angle = 10;
  const int switchPin = 34;
  const int pingTrigPin = 33; //Trigger connected to D33  
  const int pingEchoPin = 32; //Echo connected to D32   
  int buz=14; //Buzzer to D14 
  
  void setup() 
  {   
  Serial.begin(115200);   
  pinMode(buz, OUTPUT);
  servo.attach(26);
  servo.write(angle);
  pinMode(switchPin, INPUT);   
  }   
  
  void loop()   
  {   
    long duration, cm;   
    pinMode(pingTrigPin, OUTPUT);   
    digitalWrite(pingTrigPin, LOW);   
    delayMicroseconds(2);   
    digitalWrite(pingTrigPin, HIGH);   
    delayMicroseconds(5);   
    digitalWrite(pingTrigPin, LOW);   
    pinMode(pingEchoPin, INPUT);   
    duration = pulseIn(pingEchoPin, HIGH);   
    cm = microsecondsToCentimeters(duration);   
    
    if(cm<=50 && cm>0)   
    {
      if (digitalRead(switchPin))
      {
        tone(buz, 262, 500);
        noTone(buz); 
      }
    
      else
      {
        Serial.println("servo is being used");
        for(angle = 10; angle < 120; angle++)  
        {                                  
          servo.write(angle);               
          delay(15);                   
        }
     
        // now scan back from 180 to 0 degrees
        for(angle = 120; angle > 10; angle--)    
        {                                
          servo.write(angle);           
          delay(15);   
        }
      }
    }
       
    Serial.print(cm);    
    Serial.print("cm");   
    Serial.println();   
    delay(100);   
  }   
  
  long microsecondsToCentimeters(long microseconds)   
  {   
    return microseconds / 29 / 2;   
  } 
