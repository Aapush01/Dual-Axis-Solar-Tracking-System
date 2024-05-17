void setup() {
  // initialize digital pin 13 as an output.
  
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6,OUTPUT );
  pinMode(7,OUTPUT );
  pinMode(8,OUTPUT );
  pinMode(9,OUTPUT );
}

// the loop function runs over and over again forever
void loop()
{
if( digitalRead(2)&&digitalRead(3)&&digitalRead(4)&&digitalRead(5)==HIGH)
{
 digitalWrite(6,LOW); 
 digitalWrite(7,LOW); 
 digitalWrite(8,LOW); 
 digitalWrite(9,LOW);    
} 
else if( digitalRead(2)&&digitalRead(4)==HIGH)
{
 digitalWrite(6,HIGH); 
 digitalWrite(7,LOW); 
 digitalWrite(8,HIGH); 
 digitalWrite(9,LOW);    
} 
  
else if( digitalRead(3)&&digitalRead(5)==HIGH)
{
 digitalWrite(6,LOW); 
 digitalWrite(7,HIGH); 
 digitalWrite(8,LOW); 
 digitalWrite(9,HIGH);    
}  
else if( digitalRead(2)&&digitalRead(5)==HIGH)
{
 digitalWrite(6,HIGH); 
 digitalWrite(7,LOW); 
 digitalWrite(8,LOW); 
 digitalWrite(9,HIGH);    
} 
  
else if( digitalRead(3)&&digitalRead(4)==HIGH)
{
 digitalWrite(6,LOW); 
 digitalWrite(7,HIGH); 
 digitalWrite(8,HIGH); 
 digitalWrite(9,LOW);    
}    
else  if( digitalRead(2)==HIGH)
{
 digitalWrite(6,HIGH); 
 digitalWrite(7,LOW); 
 digitalWrite(8,LOW); 
 digitalWrite(9,LOW);    
}
else if( digitalRead(3)==HIGH)
{
 digitalWrite(6,LOW); 
 digitalWrite(7,HIGH); 
 digitalWrite(8,LOW); 
 digitalWrite(9,LOW);    
} 
else if( digitalRead(4)==HIGH)
{
 digitalWrite(6,LOW); 
 digitalWrite(7,LOW); 
 digitalWrite(8,HIGH); 
 digitalWrite(9,LOW);    
}
else if( digitalRead(5)==HIGH)
{
 digitalWrite(6,LOW); 
 digitalWrite(7,LOW); 
 digitalWrite(8,LOW); 
 digitalWrite(9,HIGH);    
} 
else
{
 digitalWrite(6,LOW); 
 digitalWrite(7,LOW); 
 digitalWrite(8,LOW); 
 digitalWrite(9,LOW);    
}              
}
