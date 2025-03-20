# MentorBitVL53

Librería para la lectura de datos de distancia utilizando el sensor VL53L1X en módulos compatibles con MentorBit.

## Descripción

La librería `MentorBitVL53` facilita la lectura de datos de distancia desde el sensor VL53L1X en módulos compatibles con MentorBit. Permite obtener mediciones precisas para aplicaciones de detección de proximidad, robótica y sistemas interactivos.

## Modo de Empleo

1.  **Instalación:**
    * Abre el IDE compatible con MentorBit.
    * Ve a "Herramientas" -> "Gestionar librerías..."
    * Busca "MentorBitVL53" e instálala.
    * **Nota:** Esta librería depende de la librería `Adafruit_VL53L1X`. Asegúrate de que también esté instalada.

2.  **Ejemplo básico:**

    ```c++
    #include <MentorBitVL53.h>

    MentorBitVL53 vl53;

    void setup() {
        vl53.begin();
        Serial.begin(9600);
        Serial.println("Sensor VL53L1X inicializado.");
    }

    void loop() {
        uint16_t distancia = vl53.leerDistancia();

        Serial.print("Distancia: ");
        Serial.print(distancia);
        Serial.println(" mm");

        delay(100);
    }
    ```

## Constructor y Métodos Públicos

### Constructor

* `MentorBitVL53()`: Crea un objeto `MentorBitVL53`.

### Métodos

* `void begin()`: Inicializa el sensor VL53L1X.
* `uint16_t leerDistancia()`: Lee la distancia en milímetros (mm).
