void func_1m()
{
   if(temperature>40.00){
      digitalWrite(pinReleuVentIna219,HIGH);
      digitalWrite(pinReleuVentESP,HIGH);
   }else {
      digitalWrite(pinReleuVentIna219,LOW);
      digitalWrite(pinReleuVentESP,LOW);
   }
}
