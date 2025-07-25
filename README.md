# MentorBit-VL53

Esta librería está diseñada para que puedas medir distancias con gran precisión utilizando tu placa MentorBit y el **módulo de sensor de distancia láser VL53**.

Si estás empezando en el mundo de la electrónica, ¡no te preocupes! MentorBit está pensado para que aprender sea fácil y divertido. Esta placa ya incluye un montón de componentes (LEDs, pulsadores, pantallas, etc.) y utiliza conectores especiales (JST) para que puedas añadir nuevos sensores y módulos sin tener que pelearte con un montón de cables. Pásate por nuestra web para saber más de MentorBit y nuestros productos [pinchando aquí](https://digitalcodesign.com/).

![Render del Módulo MentorBit de Distancia Láser.](https://github.com/DigitalCodesign/MentorBit-VL53/blob/main/assets/Laser_ranging_module.png)

Con esta librería, podrás medir distancias de forma precisa, rápida y segura, ideal para proyectos donde el control de proximidad o posicionamiento es clave.

---

## Descripción

### ¿Qué es un sensor VL53?

El **VL53L0X** (u otras variantes similares) es un sensor de medición de distancia basado en un láser infrarrojo. Utiliza una tecnología llamada **Time-of-Flight** (tiempo de vuelo), que mide cuánto tarda el láser en rebotar en un objeto para calcular su distancia. Es mucho más preciso y confiable que sensores ultrasónicos o de infrarrojos tradicionales.

Gracias a este sensor puedes medir distancias cortas (hasta unos 2 metros en condiciones ideales) con gran exactitud.

---

### ¿Qué hace esta librería?

La librería **MentorBit-VL53** facilita la comunicación entre la placa MentorBit y el sensor láser, ocultando los detalles técnicos para que tú puedas obtener la distancia con una simple instrucción.

Te permite centrarte en el desarrollo de tus ideas, sin preocuparte por configuraciones complejas.

---

### ¿Qué puedes construir con este módulo?

- Un sistema de aparcamiento asistido con avisos de proximidad.
- Contadores de personas o de objetos que cruzan una línea.
- Robots que detectan obstáculos con precisión milimétrica.
- Dispositivos que reaccionan al movimiento o presencia de objetos cercanos.

---

## Cómo empezar

### 1. **Conexión del Módulo**

Conecta el módulo VL53 al puerto marcado como ***I2C*** en la sección de comunicaciones de la placa MentorBit. Este sensor se comunica usando el protocolo I2C, por lo que solo necesitas ese conector.

### 2. **Instalación de la Librería**

- Abre tu entorno de programación IDE de Arduino.
- Ve al menú *Programa -> Incluir Librería -> Administrar Librerías...*
- En el buscador, escribe ***MentorBit-VL53*** y haz clic en "Instalar".
- El IDE también instalará las dependencias necesarias automáticamente.

![Ejemplo de búsqueda en el gestor de librerías del IDE de Arduino.](https://github.com/DigitalCodesign/MentorBit-VL53/blob/main/assets/library_instalation_example.png)

---

## Ejemplo Básico: Leer distancia

Este ejemplo muestra la distancia detectada por el sensor cada medio segundo.

```cpp
#include <MentorBitVL53.h>

// Creamos el objeto sensor
MentorBitVL53 miVL53;

void setup() {
    // Inicializamos el monitor serial
    Serial.begin(9600);
    miVL53.begin(); // Inicializamos el sensor
    Serial.println("Sensor VL53 listo para medir.");
}

void loop() {
    Serial.print("Distancia: ");
    Serial.print(miVL53.leerDistancia());
    Serial.println(" mm");
    delay(500);
}
```

---

## Funciones Principales

- `void begin()`  
  Inicializa el sensor láser y lo prepara para las mediciones.

- `int leerDistancia()`  
  Devuelve la distancia detectada en milímetros. Ideal para usar dentro del loop del programa.

---

## Recursos Adicionales

- [Web del fabricante](https://digitalcodesign.com/)
- [Tienda Online de Canarias](https://canarias.digitalcodesign.com/shop)
- [Tienda Online de Península](https://digitalcodesign.com/shop)
- [Web Oficial de MentorBit](https://digitalcodesign.com/mentorbit)
- [Web Oficial del Módulo VL53](https://canarias.digitalcodesign.com/shop/00040035-mentorbit-modulo-de-distancia-laser-8731?category=226&order=create_date+desc#attr=)
- [Manual de usuario del Módulo](https://drive.google.com/file/d/1UMrXTiSCMVW2M3-_IAQQQmDTvdz3N0M2/view?usp=drive_link)
- [Modelo 3D del Módulo VL53 en formato .STEP](https://drive.google.com/file/d/1IHaLJrd9-LV5mNg28pJ0SFHB24afn18g/view?usp=drive_link)
