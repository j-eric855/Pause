unsigned long intervall = 500;
unsigned long startpunkt;
unsigned long endpunkt;


void setup()
{
  Serial.begin(9600);
}

void loop()
{

  endpunkt = millis();

  if ((endpunkt - startpunkt) >= intervall)
  {

    Serial.println(millis());
    startpunkt = millis();
  }


}
