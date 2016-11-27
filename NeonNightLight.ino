#define SWInputPin 6 //動作モード用SW
#define NeonOutputPin 4 //ネオン管点灯用ピン
#define CdsInputPin 5 //Cdsセル入力ピン

void setup() {
  pinMode(SWInputPin, INPUT);
  pinMode(NeonOutputPin, OUTPUT);
}

void loop(){

  if(LOW == digitalRead(SWInputPin)){
    //暗い時のみ
    if(analogRead(CdsInputPin) >= 900){
      digitalWrite(NeonOutputPin, HIGH);
    }else{
      digitalWrite(NeonOutputPin, LOW);
    }
  }
  //常時点灯
  else{
    digitalWrite(NeonOutputPin, HIGH);
  }

}
