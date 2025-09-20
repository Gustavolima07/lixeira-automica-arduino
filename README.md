# 🗑️ Lixeira Automática com Arduino / Automatic Trash Bin with Arduino

[🇧🇷 Português](#-português) | [🇬🇧 English](#-english)

---

## 🇧🇷 Português

Este projeto implementa uma **lixeira automática** utilizando um **Arduino Uno**, um **sensor ultrassônico HC-SR04** e um **servo motor**.
Quando o sensor detecta um objeto (como a mão do usuário) dentro de uma determinada distância, o servo abre a tampa da lixeira automaticamente.

### ⚙️ Componentes Utilizados

* Arduino Uno
* Sensor Ultrassônico HC-SR04
* Servo Motor (SG90 ou similar)
* Protoboard e jumpers
* Cabo USB

### 🔌 Esquema de Ligações

* **Servo Motor**:

  * Sinal → Pino 9
  * VCC → 5V
  * GND → GND

* **Sensor Ultrassônico (HC-SR04)**:

  * VCC → 3.3V
  * GND → GND
  * Trig → Pino 8
  * Echo → Pino 7

### 💻 Código

O código em Arduino C++ está disponível no arquivo **lixeira_automatica.ino**.

Funcionamento:

1. O sensor mede a distância do objeto.
2. Se o objeto estiver a até **25 cm**, o servo abre a tampa (90°).
3. Caso contrário, a tampa permanece fechada (0°).

### 🚀 Como Executar

1. Instale a IDE do Arduino ([download aqui](https://www.arduino.cc/en/software)).
2. Conecte o Arduino ao computador via cabo USB.
3. Carregue o código na placa.
4. (Opcional) Abra o monitor serial para verificar o funcionamento.

### 🔮 Possíveis Melhorias

* Adicionar **display LCD** para mensagens (ex: "Abra a lixeira").
* Incluir um **sensor de peso** para detectar quando a lixeira estiver cheia.
* Utilizar **bateria** para maior mobilidade.

---

## 🇬🇧 English

This project implements an **automatic trash bin** using an **Arduino Uno**, an **HC-SR04 ultrasonic sensor**, and a **servo motor**.
When the sensor detects an object (such as a hand) within a certain distance, the servo automatically opens the lid.

### ⚙️ Components Used

* Arduino Uno
* Ultrasonic Sensor HC-SR04
* Servo Motor (SG90 or similar)
* Breadboard and jumper wires
* USB cable

### 🔌 Wiring Diagram

* **Servo Motor**:

  * Signal → Pin 9
  * VCC → 5V
  * GND → GND

* **Ultrasonic Sensor (HC-SR04)**:

  * VCC → 3.3V
  * GND → GND
  * Trig → Pin 8
  * Echo → Pin 7

### 💻 Code

The Arduino C++ code is available in the **lixeira_automatica.ino** file.

How it works:

1. The sensor measures the object’s distance.
2. If the object is within **25 cm**, the servo opens the lid (90°).
3. Otherwise, the lid remains closed (0°).

### 🚀 How to Run

1. Install the Arduino IDE ([download here](https://www.arduino.cc/en/software)).
2. Connect the Arduino to your computer via USB cable.
3. Upload the code to the board.
4. (Optional) Open the serial monitor to check the process.

### 🔮 Possible Improvements

* Add an **LCD display** to show messages (e.g., "Open the bin").
* Include a **weight sensor** to detect when the bin is full.
* Power the project with a **battery** for portability.

---

## 📷 Demonstração / Demonstration

[! Demonstração da lixeira automática / Automatic Trash Can Demo](./auto_trash.gif)

---

## 🏷️ Licença / License

Este projeto é de uso livre para fins educacionais.
This project is free to use for educational purposes.

---
