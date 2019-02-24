void setup() {
    Serial.begin(9600);
    Serial.println("NFC Tag Writer"); // Serial Monitor Message
    nfc.begin();
}

void loop() {
    Serial.println("\nPlace an NFC Tag that you want to Record these Messages on!"); // Command for the Serial Monitor
    if (nfc.tagPresent()) {
        NdefMessage message = NdefMessage();
        message.addTextRecord("My First NFC Tag Write"); // Text Message you want to Record
        message.addUriRecord("http://allaboutcircuits.com"); // Website you want to Record
        message.addTextRecord("Way to Go, It Worked!");  // Ednding Message for you to Record
        boolean success = nfc.write(message);
        if (success) {
            Serial.println("Good Job, now read it with your phone!"); // if it works you will see this message 
        } else {
            Serial.println("Write failed"); // If the the rewrite failed you will see this message
        }
    }
    delay(10000);
}