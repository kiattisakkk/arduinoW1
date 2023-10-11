int x = 0;
float y_sin = 0.0;
float y_cos = 0.0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  x = x + 1;
  y_sin = sin(x * -0.3);  
  y_cos = cos(x * 0.3);  
  
  y_sin = y_sin * 2-1;
  y_cos = y_cos * 2-1;

 
  int scaled_y_sin = (y_sin + 1) *100 ;
  int scaled_y_cos = (y_cos + 1) * 100;

  Serial.printf("%d %d %d\n", 0, scaled_y_sin, scaled_y_cos);
  delay(100); 
}