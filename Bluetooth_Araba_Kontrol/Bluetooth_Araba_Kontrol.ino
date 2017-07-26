const int sol_i = 8;
const int sol_g = 9;
const int sag_i = 10;
const int sag_g = 11;
String metin;

void setup()
{
  Serial.begin(9600);
  pinMode(sag_i, OUTPUT);
  pinMode(sag_g, OUTPUT);
  pinMode(sol_i, OUTPUT);
  pinMode(sol_g, OUTPUT);
}

void loop()
{ Serial.print("a");
  
  while (Serial.available()) {
    Serial.print("b");
    delay(5);
    char m = Serial.read();
    metin += m;
  }
  if (metin.length() > 0)
  {
    
    Serial.println(metin);

    if (metin == "ileri")
    {
      digitalWrite(sag_i, HIGH);
      digitalWrite(sag_g, LOW);
      digitalWrite(sol_i, HIGH);
      digitalWrite(sol_g, LOW);
      delay(300);
    }
    if (metin == "geri")
    {
      digitalWrite(sag_i, LOW);
      digitalWrite(sag_g, HIGH);
      digitalWrite(sol_i, LOW);
      digitalWrite(sol_g, HIGH);
      delay(300);
    }
    if (metin == "sag")
    {
      digitalWrite(sag_i, LOW);
      digitalWrite(sag_g, HIGH);
      digitalWrite(sol_i, HIGH);
      digitalWrite(sol_g, LOW);
      delay(300);
    }
    if (metin == "sol")
    {

      digitalWrite(sag_i, HIGH);
      digitalWrite(sag_g, LOW);
      digitalWrite(sol_i, LOW);
      digitalWrite(sol_g, HIGH);
      delay(300);
      metin = "";
      digitalWrite(sag_i, LOW);
      digitalWrite(sag_g, LOW);
      digitalWrite(sol_i, LOW);
      digitalWrite(sol_g, LOW);
    }


    else
    {
      digitalWrite(sag_i, LOW);
      digitalWrite(sag_g, LOW);
      digitalWrite(sol_i, LOW);
      digitalWrite(sol_g, LOW);

    }
    metin = "";

  }

}
