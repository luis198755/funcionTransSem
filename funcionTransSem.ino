unsigned long var00 = 0b10010010010000100100000000000000;
unsigned long var01 = 0b00100100110000110000000000000000;

unsigned long funcCoreTrans(unsigned long esc01, unsigned long esc02) {

  unsigned long trans = 0;

  bool X;
  bool Y;
  bool Z;

  for (int i=0; i<6; i++) {
    bool A = bitRead(esc01, 31-i); 
    bool B = bitRead(esc01, 31-i+1); 
    bool C = bitRead(esc01, 31-i+2); 

    bool D = bitRead(esc02, 31-i); 
    bool E = bitRead(esc02, 31-i+1); 
    bool F = bitRead(esc02, 31-i+2);

    Serial.println("ELEMENTOS");
    Serial.println(A);
    Serial.println(B);
    Serial.println(C);
    Serial.println(D);
    Serial.println(E);
    Serial.println(F);
    
    X = A && !F; 
    Y = !A && !C;
    Z = C;
  
    Serial.println("RESULTADO");
    Serial.print("X = ");
    Serial.println(X);
    Serial.print("Y = ");
    Serial.println(Y);
    Serial.print("Z = ");
    Serial.println(Z);

    delay(1000);
  }

  

  
  

  return trans;
}

void setup() {
  Serial.begin(9600);
  
  funcCoreTrans(var00, var01);
}

void loop() {
  
}