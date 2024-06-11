#include <ThingSpeak.h>
#include <ESP8266WiFi.h>

int leitura;
int led = D1;

// Nome da rede e senha
char ssid[] = "projetos_auto"; // Nome da rede SSID
char pass[] = "CybertronIFM23"; // Nome da senha
int status = WL_IDLE_STATUS;
WiFiClient client;
int sensorValue; // variável que armazena o valor analógico lido

// Informações disponíveis no ThingSpeak, número de canal e chave de escrita
unsigned long canal = 2556747;
const char * ChaveLeituraAPI = "7DD43IYPIXBUF6Q0";

void setup() {
  WiFi.begin(ssid, pass);
  ThingSpeak.begin(client);
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}
void loop() {
  //Lê o último valor escrito no canal a partir dos parâmetros abaixo (CANAL, CAMPO, Chave de Leitura)
  leitura = ThingSpeak.readLongField(canal, 1, ChaveLeituraAPI);
  //Escreve o valor lido no Serial Monitor
  Serial.print("Leitura: ");
  Serial.println(leitura);
  if(leitura < 1000){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
}
