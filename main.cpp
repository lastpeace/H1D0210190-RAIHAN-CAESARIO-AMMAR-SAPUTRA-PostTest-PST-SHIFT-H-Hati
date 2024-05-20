#include <Arduino.h>
#include <Servo.h>

// Deklarasi objek servo
Servo myservo;

const int greenLedPin = 8; // Pin LED hijau
const int redLedPin = 9;   // Pin LED merah

void setup()
{
    // Menghubungkan servo ke pin D4
    myservo.attach(D4);

    // Mengatur pin LED sebagai output
    pinMode(greenLedPin, OUTPUT);
    pinMode(redLedPin, OUTPUT);
}

void loop()
{
    // Servo bergerak ke 90 derajat
    myservo.write(90);
    delay(3000); // Tunggu sampai servo mencapai posisi dengan waktu 3 detik

    // Menyalakan LED hijau
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(redLedPin, LOW);
    delay(5000); // Biarkan LED hijau menyala selama 5 detik

    delay(500); // Tunggu sampai servo mencapai posisi

    // Menyalakan LED merah
    digitalWrite(greenLedPin, LOW);
    digitalWrite(redLedPin, HIGH);
    delay(5000);      // Biarkan LED merah menyala selama 5 detik
    myservo.write(0); // Servo kembali ke 0 derajat

    // Mematikan kedua LED
    digitalWrite(greenLedPin, LOW);
    digitalWrite(redLedPin, LOW);

    delay(3000); // jeda 3 detik untuk loop berikutnya
}
