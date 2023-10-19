# Introduccion a la sesion 01

## ¿Qué es Arduino?

Arduino es una plataforma de hardware y software libre, basada en un microcontrolador, diseñada para facilitar el uso de la electrónica en proyectos multidisciplinares. Arduino es una tecnología con el uso de directo de hardware y software.

## ¿Para qué sirve Arduino?

Arduino se puede utilizar para una amplia gama de proyectos, desde simples proyectos de bricolaje hasta aplicaciones industriales. Algunos ejemplos de proyectos que se pueden realizar con Arduino incluyen:

- **Electrónica recreativa**: Arduino se puede utilizar para crear juguetes, juegos y otras aplicaciones de entretenimiento.
- **Automatización**: Arduino se puede utilizar para controlar dispositivos y procesos de forma automática.
- **Sensores**: Arduino se puede utilizar para recopilar datos de sensores y controlar dispositivos basados en esos datos.
- **Internet de las cosas (IoT)**: Arduino se puede utilizar para crear dispositivos conectados a Internet.

## Placas de desarrollo Arduino

Las placas de la familia Arduino se pueden dividir en 3 tipos de familias:

### Core

El tipo Core es el tipo más común de placa Arduino. Estas placas utilizan microcontroladores ATmega de 8 bits. Son una buena opción para proyectos básicos y de nivel intermedio.

Las placas Core son una buena opción para proyectos básicos y de nivel intermedio. Son fáciles de usar y tienen una amplia gama de recursos disponibles.

#### Algunos ejemplos de placas Core incluyen

- Arduino UNO
- Arduino MEGA
- Arduino Leonardo
- Arduino Due
- Arduino Uno R4 WiFi 😍

![Imagen01](img/Imagen1.png)

#### Algunos ejemplos de proyectos que se pueden realizar con placas Core incluyen

- Control de dispositivos
- Sensores
- Automatización
- Electrónica recreativa

### Mkr

El tipo Mkr es un tipo más nuevo de placa Arduino. Estas placas utilizan microcontroladores ARM de 32 bits. Son una buena opción para proyectos que requieren un mayor rendimiento o funcionalidad.

Las placas Mkr son una buena opción para proyectos que requieren un mayor rendimiento o funcionalidad. Son más potentes que las placas Core y tienen características adicionales, como conectividad WiFi y Bluetooth.

#### Algunos ejemplos de placas Mkr incluyen

- Arduino MKR1000
- Arduino MKRZero
- Arduino MKR1010
- Arduino MKR1000 WiFi

![Imagen02](img/Imagen2.png)

#### Algunos ejemplos de proyectos que se pueden realizar con placas Mkr incluyen

- Proyectos IoT
- Proyectos de inteligencia artificial
- Proyectos de visión artificial
- Proyectos de robótica

### Nano

El tipo Nano es un tipo de placa Arduino de tamaño pequeño. Estas placas son una buena opción para proyectos compactos o para aplicaciones de wearables.

Las placas Nano son una buena opción para proyectos compactos o para aplicaciones de wearables. Son pequeñas y ligeras, lo que las hace ideales para proyectos que deben caber en espacios reducidos.

#### Algunos ejemplos de placas Nano incluyen

- Arduino Nano
- Arduino Nano Every
- Arduino Nano 33 BLE
- Arduino Nano ESP32 😍

![Imagen03](img/Imagen3.png)

#### Algunos ejemplos de proyectos que se pueden realizar con placas Nano incluyen

- Proyectos de wearables
- Proyectos de Internet de las cosas
- Proyectos de automatización
- Proyectos de electrónica recreativa

## Placas de desarrollo independientes de la familia Arduino

### ESP8266

La placa ESP8266 es una placa WiFi que se puede utilizar para conectar Arduino a Internet. Es una buena opción para proyectos IoT, como sensores remotos y dispositivos controlados por aplicaciones.

![ESP8266Module](img/ESP8266Module.jpeg)
![ESP8266Board](img/ESP8266Board.jpg)

Características principales

- Microcontrolador ESP8266EX de 32 bits
- Conectividad WiFi
- Puertos GPIO
- Puerto UART
- Puerto SPI

Usos comunes

- Sensores remotos
- Dispositivos controlados por aplicaciones
- Automatización
- IoT

### ESP32

La placa ESP32 es una placa WiFi y Bluetooth que se puede utilizar para conectar Arduino a Internet y a otros dispositivos. Es una buena opción para proyectos que requieren una mayor potencia o funcionalidad, como robótica y visión artificial.

![ESP32](img/ESP32.jpg)

Características principales:

- Microcontrolador ESP32 de 32 bits
- Conectividad WiFi y Bluetooth
- Puertos GPIO
- Puerto UART
- Puerto SPI
- Puerto I2C

Usos comunes:

- Robótica
- Visión artificial
- IoT
- Inteligencia artificial

### Raspberry Pi

La Raspberry Pi es una computadora de placa única que se puede utilizar con Arduino para crear proyectos más avanzados. Es una buena opción para proyectos que requieren un mayor rendimiento o funcionalidad, como visión artificial y aprendizaje automático.

![RaspberryPi](img/Raspberry%20Pi.jpg)

Características principales:

- Procesador de cuatro núcleos
- Memoria RAM de 1 GB o 2 GB
- Puertos USB
- Puerto Ethernet
- Puerto HDMI

Usos comunes:

- Visión artificial
- Aprendizaje automático
- Robótica
- IoT

### PIC

Las placas PIC son una familia de microcontroladores de 8 bits que se utilizan en una amplia gama de aplicaciones. Son una buena opción para proyectos que requieren un bajo consumo de energía o un tamaño compacto.

![PIC](img/PIC.jpg)

Características principales:

- Microcontrolador PIC de 8 bits
- Puertos GPIO
- Puerto UART
- Puerto SPI
- Puerto I2C

Usos comunes:

- Control de dispositivos
- Sensores
- Automatización
- Electrónica recreativa

## Arduino UNO R3

El Arduino Uno es una placa de microcontrolador de código abierto basado en el microchip ATmega328P y desarrollado por Arduino.cc.1​2​ La placa está equipada con conjuntos de pines de E/S digitales y analógicas que pueden conectarse a varias placas de expansión y otros circuitos. La placa tiene 14 pines digitales, 6 pines analógicos y programables con el Arduino IDE (Entorno de desarrollo integrado) a través de un cable USB tipo B.3​ Puede ser alimentado por el cable USB o por una batería externa
![ArduinoUNO](img/ArduinoUNO.png)

### Pines (Pin Out)

#### Pines de alimentacion

Los pines de alimentación de Arduino UNO R3 proporcionan energía a la placa y a los componentes conectado a ella

- **Vin**: Este pin se puede utilizar para alimentar la placa desde una fuente externa de 7 a 20 voltios.
- **5V**: Este pin proporciona una salida de 5 voltios a la placa.
- **3.3V**: Este pin proporciona una salida de 3.3 voltios a la placa.
- **GND**: Este pin es la conexión a tierra de la placa.

#### Pines analogicos

Los pines analógicos de Arduino UNO R3 se pueden utilizar para leer datos de sensores analógicos. Cada pin analógico proporciona 10 bits de resolución, lo que significa que puede leer 1024 valores diferentes.

A0-A5: Estos pines proporcionan una entrada analógica de 0 a 5 voltios.

#### Pines digitales

Los pines digitales de Arduino UNO R3 se pueden utilizar para controlar dispositivos digitales, como luces LED y motores. Cada pin digital puede funcionar como entrada o salida. **0-13: Estos pines pueden funcionar como entrada o salida.**

- **Entrada**: Los pines digitales de entrada se pueden utilizar para leer datos de sensores.
- **Salida**: Los pines digitales de salida se pueden utilizar para controlar dispositivos.

##### PWM

PWM significa "modulación de ancho de pulso". Es una técnica que se utiliza para controlar la salida de un dispositivo digital. Con PWM, se puede variar el ancho de un pulso para controlar la potencia o el brillo de un dispositivo.

> En Arduino, los pines 3, 5, 6, 9, 10 y 11 pueden utilizarse para PWM.

#### Comunicacion

Los puertos de comunicación de Arduino UNO R3 se pueden utilizar para conectar Arduino a otros dispositivos.

- **USB**: El puerto USB se utiliza para conectar Arduino a una computadora.
- **UART**: El puerto UART se utiliza para la comunicación serie.
- **SPI**: El puerto SPI se utiliza para la comunicación en serie de alta velocidad.
- **I2C**: El puerto I2C se utiliza para la comunicación en serie de baja velocidad.

##### Comunicación I2C

I2C es un protocolo de comunicación serie de baja velocidad que se utiliza para conectar dispositivos electrónicos. Arduino UNO R3 tiene dos pines I2C:

- SDA: Este pin se utiliza para la transmisión de datos.
- SCL: Este pin se utiliza para la sincronización de la transmisión de datos.

##### Comunicación SPI

SPI es un protocolo de comunicación serie de alta velocidad que se utiliza para conectar dispositivos electrónicos. Arduino UNO R3 tiene cuatro pines SPI:

- MISO: Este pin se utiliza para la recepción de datos.
- MOSI: Este pin se utiliza para la transmisión de datos.
- SCK: Este pin se utiliza para la sincronización de la transmisión de datos.
- SS: Este pin se utiliza para seleccionar el dispositivo de destino.

##### Comunicación UART

UART es un protocolo de comunicación serie que se utiliza para conectar dispositivos electrónicos. Arduino UNO R3 tiene dos pines UART:

- TX: Este pin se utiliza para la transmisión de datos.
- RX: Este pin se utiliza para la recepción de datos.
