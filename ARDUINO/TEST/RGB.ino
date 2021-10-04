#define LED_R 3       // R의 핀 번호 3
#define LED_Y 4       // Y의 핀 번호 4
#define LED_G 5       // G의 핀 번호 5
 
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_R, OUTPUT);
  pinMode(LED_Y, OUTPUT);
  pinMode(LED_G, OUTPUT);
}
 
void loop() {
  turnOffAll();                  // LED 다 끕니다.
  
  digitalWrite(LED_R, HIGH);     // 빨간 불 켜기
  delay(3000);                   // 3초간 유지
  turnOffAll();                  // 불 다 끄기
  
  digitalWrite(LED_G, HIGH);     // 초록 불 켜기
  delay(3000);                   // 3초간 유지
  turnOffAll();                  // 불 다 끄기
 
 digitalWrite(LED_Y, HIGH);      // 노란 불 켜기
  delay(2000);                   // 2초간 유지
  turnOffAll();                  // 불 다 끄기
 
}
 
void turnOffAll() {              // turnOffAll 함수 정의
  digitalWrite(LED_R, LOW);      // 빨간 불 끄기
  digitalWrite(LED_Y, LOW);      // 노란 불 끄기
  digitalWrite(LED_G, LOW);      // 초록 불 끄기
}
