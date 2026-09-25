# ESP32 - Do Giro ao Brilho

Projeto desenvolvido para a Prática 1b da disciplina de Sistemas Ciberfísicos e Colaborativos, utilizando um **ESP32 DevKit V1** e a **Arduino IDE**.

## 📌 Objetivo

Controlar a intensidade do brilho de um LED azul utilizando um potenciômetro.

A posição do potenciômetro é lida através do **GPIO34**, e o valor obtido é convertido para controlar o brilho do LED conectado ao **GPIO25**.

## 🔧 Componentes

* ESP32 DevKit V1
* Potenciômetro linear de 10 kΩ
* LED azul
* Resistor de 330 Ω
* Protoboard
* Jumpers

## 🔌 Ligações

### Potenciômetro

| Terminal         | Ligação |
| ---------------- | ------- |
| Externo esquerdo | GND     |
| Central          | GPIO 34 |
| Externo direito  | 3V3     |

### LED

| Componente    | Ligação |
| ------------- | ------- |
| LED azul      | GPIO 25 |
| Resistor      | 330 Ω   |
| Cátodo do LED | GND     |

O potenciômetro deve ser alimentado utilizando **3V3**.

## 💻 Funcionamento

O ESP32 realiza a leitura analógica do potenciômetro através do GPIO34.

A leitura do ADC varia de:

```text
0 até 4095
```

Esse valor é convertido para uma escala de:

```text
0 até 255
```

O valor convertido é utilizado para controlar o brilho do LED por PWM.

### Exemplos

| Leitura ADC | PWM | Brilho        |
| ----------: | --: | ------------- |
|           0 |   0 | Apagado       |
|        2048 | 127 | Intermediário |
|        4095 | 255 | Máximo        |

O programa realiza essa leitura continuamente, com uma pausa de 10 ms entre as atualizações.

## 🛠️ Tecnologias

* C++
* Arduino IDE
* ESP32 DevKit V1
* Leitura analógica
* ADC
* PWM
* Potenciômetro

## 🎯 Resultado esperado

Ao girar o potenciômetro, o brilho do LED azul deve variar de acordo com sua posição.

No menor valor, o LED permanece apagado. Conforme o potenciômetro é girado, o brilho aumenta até atingir o brilho máximo.
