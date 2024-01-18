int PulseSensorPurplePin = 2; // Variabel untuk menyimpan pin signal dari sensor
int Signal; // Variabel untuk menyimpan signal dari sensor

void setup(){
  Serial.begin(9600); // Inisiasi komunikasi serial dengan kecepatan baud 9600
  /*
  Menempatkan semua konfigurasi yang diperlukan untuk mengatur kondisi awal dan parameter dasar, 
  seperti inisialisasi pin, pengaturan komunikasi serial, atau pengaturan awal untuk sensor dan perangkat keras lainnya.
  */
}

void loop(){
  Signal = analogRead(PulseSensorPurplePin); // Membaca nilai sinyal analog dari pin sensor dan menyimpannya ke dalam variabel Signal
  Serial.println(Signal); // Menampilkan nilai Signal ke Serial Monitor
  delay(1000); // Jeda 1 detik
}