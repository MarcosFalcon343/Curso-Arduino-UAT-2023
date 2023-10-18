# Hola mundo (Enciende un LED con Arduino)

## Materiales

- 1 Arduino UNO
- 1 Resistencia de 330 ohmios
- 1 LED
- Cables de conexión

## Marco teórico

### Resistencia

Una resistencia es un componente electrónico que se utiliza para limitar la corriente que fluye a través de un circuito. Las resistencias se miden en ohmios (Ω). Para conectar un LED a Arduino, es necesario usar una resistencia para evitar que el LED se queme. Una resistencia de 220 ohmios o superior es adecuada para la mayoría de los LEDs. Las terminales de la resistencia no tienen polaridad.

### LED

Un LED es un diodo emisor de luz. Los LEDs se utilizan para generar luz cuando se aplica una corriente eléctrica. Los LEDs tienen dos terminales: el ánodo y el cátodo. El ánodo es el terminal positivo y el cátodo es el terminal negativo. Para conectar un LED a Arduino, el ánodo debe conectarse al pin de Arduino y el cátodo debe conectarse al pin GND.
![Led](img/imagen%20led.jpg)

### Arduino

Arduino es una plataforma de hardware y software de código abierto para la creación de prototipos electrónicos. Arduino consta de una placa de circuito impreso (PCB) con un microcontrolador, pines de entrada y salida, y un conector USB. El microcontrolador es el cerebro de la placa Arduino. Los pines de entrada y salida se utilizan para conectar sensores, actuadores y otros componentes electrónicos. El conector USB se utiliza para conectar la placa Arduino a un ordenador.

## Conexiones

1. Inserta la resistencia en cualquier posición de tu protoboard. La resistencia ayudará a proteger el LED de daños.
![Imagen01](img/Imagen01.jpg)
2. El pin de salida número 13 de tu Arduino debe conectarse mediante un cable de conexión a una terminal de tu resistencia. Este pin enviará la corriente eléctrica al LED.
![Imagen2](img/Imagen2.jpg)
3. La otra terminal de la resistencia debe conectarse a la terminal ánodo (positiva) del LED. Este es el terminal que recibe la corriente eléctrica.
![Imagen3](img/Imagen3.jpg)
4. El cátodo (negativo) del LED debe conectarse al GND del Arduino mediante un cable de conexión. Este pin sirve como conexión a tierra.
![Imagen4](img/Imagen4.jpg)

## Código
