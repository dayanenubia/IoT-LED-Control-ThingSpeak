# IoT-LED-Control-ThingSpeak

## Descrição do Repositório

Este repositório contém o código para um projeto IoT usando um ESP8266 que lê dados de um canal ThingSpeak e controla um LED com base nesses dados. O projeto conecta o ESP8266 a uma rede Wi-Fi, lê os valores de um campo específico no ThingSpeak e acende ou apaga um LED dependendo do valor lido.

## Componentes Utilizados

- **ESP8266**: Microcontrolador com capacidade Wi-Fi para conectividade à internet.
- **ThingSpeak**: Plataforma de IoT para armazenar e visualizar dados de sensores.
- **LED**: Indicador visual que é controlado pelo ESP8266.

## Funcionalidades

- Conexão à rede Wi-Fi configurada.
- Leitura dos valores de um campo específico de um canal ThingSpeak.
- Controle de um LED baseado nos valores lidos do ThingSpeak.
- Atualização dos dados do LED em tempo real.

## Como Usar

1. Clone este repositório.
2. Abra o arquivo `.ino` no Arduino IDE.
3. Insira as credenciais da sua rede Wi-Fi no código.
4. Substitua o `ChaveLeituraAPI` e `canal` pelos seus valores do ThingSpeak.
5. Compile e faça o upload do código para o ESP8266.
6. Monitore os dados do sensor em tempo real no monitor serial.
