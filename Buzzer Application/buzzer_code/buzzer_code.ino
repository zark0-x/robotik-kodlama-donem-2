void setup() {
  pinMode(2, OUTPUT);
}

void loop() {
  // We use increasing and decreasing frequencies for the ambulance siren.
  // Ambulans sireni için artan ve azalan frekansları kullanıyoruz.
  
  // Start with high frequency // Yüksek frekansla başla
  tone(2, 1000);  // 1000 Hz frequency // 1000 Hz frekans
  delay(200);     // 200ms duration // 200ms süre
  
  // Make the frequency a little lower // Frekansı biraz daha düşük yap
  tone(2, 1500);  // 1500 Hz frequency // 1500 Hz frekans
  delay(200);     // 200ms duration // 200ms süre
  
  // Lower the frequency a little more // Frekansı biraz daha düşür
  tone(2, 500);  
}