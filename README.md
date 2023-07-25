# GT-100 MIDI Cab Sim Integration

This project aims to integrate the Boss GT-100 Amp Effects Processor with the Joyo Cab Box Cab Sim & IR Loader using MIDI communication.

## Description

The Boss GT-100 is a powerful amp effects processor used by guitarists to achieve various guitar tones and effects. The Joyo Cab Box is a cab simulator and IR loader that allows users to emulate different guitar speaker cabinets and use impulse responses for authentic tone shaping. This project facilitates the communication between the two devices via MIDI, enabling the GT-100 to control and send messages to the Joyo Cab Box for seamless integration into the guitarist's setup.

## MIDI Input and Output Circuit

In order to enable MIDI communication between the Boss GT-100 and the Joyo Cab Box, you'll need to set up both MIDI input and output circuits for your Arduino board. Fortunately, there are detailed guides available at [Notes and Volts](https://www.notesandvolts.com/2015/02/midi-and-arduino-build-midi-input.html) for building the MIDI input circuit and [here](https://www.notesandvolts.com/2015/03/midi-for-arduino-build-midi-output.html) for the MIDI output circuit.

Please follow the instructions in those guides to assemble the circuits, and then connect them to your Arduino UNO board.

## Getting Started

Once you have set up the MIDI input and output circuits and connected your Boss GT-100 and Joyo Cab Box to the Arduino board, upload the provided Arduino sketch to your Arduino board.

Ensure that both devices are powered on and properly connected.

The Boss GT-100 will now be able to send MIDI messages to the Joyo Cab Box for cab simulation and IR loading.

## Contributing

Contributions are welcome! If you find any issues or want to add new features, please create a pull request with your changes.

## License

This project is licensed under the [MIT License](LICENSE).



# Integração GT-100 MIDI com Joyo Cab Box

Este projeto tem como objetivo integrar o processador de efeitos de amplificador Boss GT-100 com o Joyo Cab Box Cab Sim & IR Loader usando comunicação MIDI.

## Descrição

O Boss GT-100 é um poderoso processador de efeitos de amplificador usado por guitarristas para alcançar diversos timbres e efeitos de guitarra. O Joyo Cab Box é um simulador de gabinetes e carregador de respostas impulsivas (IR) que permite aos usuários emular diferentes gabinetes de alto-falantes de guitarra e utilizar respostas impulsivas para moldar o timbre de forma autêntica. Este projeto facilita a comunicação entre os dois dispositivos através de MIDI, permitindo que o GT-100 controle e envie mensagens para o Joyo Cab Box para uma integração perfeita no setup do guitarrista.

## Circuito de Entrada e Saída MIDI

Para habilitar a comunicação MIDI entre o Boss GT-100 e o Joyo Cab Box, será necessário configurar os circuitos de entrada e saída MIDI para a placa Arduino. Felizmente, existem guias detalhados disponíveis em [Notes and Volts](https://www.notesandvolts.com/2015/02/midi-and-arduino-build-midi-input.html) para montar o circuito de entrada MIDI e [aqui](https://www.notesandvolts.com/2015/03/midi-for-arduino-build-midi-output.html) para o circuito de saída MIDI.

Siga as instruções nesses guias para montar os circuitos e conectá-los à sua placa Arduino UNO.

## Como Começar

Após configurar os circuitos de entrada e saída MIDI e conectar seu Boss GT-100 e Joyo Cab Box à placa Arduino, carregue o código Arduino fornecido em sua placa Arduino.

Certifique-se de que ambos os dispositivos estejam ligados e conectados corretamente.

O Boss GT-100 agora poderá enviar mensagens MIDI para o Joyo Cab Box para simulação de gabinetes e carregamento de respostas impulsivas.

## Contribuições

Contribuições são bem-vindas! Se encontrar algum problema ou desejar adicionar novos recursos, crie uma pull request com suas alterações.

## Licença

Este projeto está licenciado sob a [Licença MIT](LICENSE).

