//copied from Vellman example
int pwm_a = 3;  //PWM control for motor outputs 1 and 2 
int dir_a = 2;  //direction control for motor outputs 1 and 2 

void setup()

{
  
pinMode(pwm_a, OUTPUT);  //Set control pins to be outputs
  
pinMode(dir_a, OUTPUT);
  
}



void loop()
{
  

digitalWrite(dir_a, LOW); 
  
  
  
analogWrite(pwm_a, 50);  
  
delay(1000);
  
  

analogWrite(pwm_a, 100);  
  
delay(1000);
  
 
 
analogWrite(pwm_a, 50);  

delay(1000);
  
 
 
analogWrite(pwm_a, 0);  

delay(1000);
  
  

digitalWrite(dir_a, HIGH); 
  

analogWrite(pwm_a, 50);  
  
delay(1000);
  
  

analogWrite(pwm_a, 100);  
  
delay(1000);
  
 
 
analogWrite(pwm_a, 50);  

delay(1000);
  
 
 
analogWrite(pwm_a, 0);  

delay(1000);
  
  


}


