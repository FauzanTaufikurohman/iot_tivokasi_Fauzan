#include <Arduino.h>
int lampuMerah = 26;
int lampuKuning = 27;
int lampuHijau = 14;

void setup() {
  Serial.begin(115200);
  pinMode(lampuMerah, OUTPUT);
  pinMode(lampuKuning, OUTPUT);
  pinMode(lampuHijau, OUTPUT);
}

void loop() {
  // Nyalakan lampu merah selama 5 detik
  digitalWrite(lampuMerah, HIGH);
  digitalWrite(lampuKuning, LOW);
  digitalWrite(lampuHijau, LOW);
  Serial.println("LAMPU MERAH");
  delay(5000); // Perbaiki dari 2000 ke 5000
  
  // Nyalakan lampu kuning selama 2 detik
  digitalWrite(lampuMerah, LOW);
  digitalWrite(lampuKuning, HIGH);
  digitalWrite(lampuHijau, LOW);
  Serial.println("LAMPU KUNING");
  delay(2000); // Perbaiki dari 1000 ke 2000
  
  // Nyalakan lampu hijau selama 5 detik
  digitalWrite(lampuMerah, LOW);
  digitalWrite(lampuKuning, LOW);
  digitalWrite(lampuHijau, HIGH);
  Serial.println("LAMPU HIJAU");
  delay(5000); // Perbaiki dari 2000 ke 5000
}
