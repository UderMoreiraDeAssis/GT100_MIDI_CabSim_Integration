// IMPORTANT: When compiling using the Arduino IDE, disconnect the cable connected to the RX pin of Arduino to avoid problems during the upload of the compiled code.
// IMPORTANTE: Ao compilar usando a IDE do Arduino, desconecte o cabo conectado ao pino RX do Arduino para evitar problemas durante o upload do código compilado.

#include <MIDI.h>

// Create a MIDI object.
// Cria um objeto MIDI.
MIDI_CREATE_DEFAULT_INSTANCE();

void setup()
{
    MIDI.begin(); 
    Serial.begin(9600); // Initialize serial communication with a baud rate of 9600 bps

    // Configure the interrupt for the MIDI RX pin
    // Configura a interrupção para o pino RX do MIDI
    attachInterrupt(digitalPinToInterrupt(0), handleMIDI, FALLING);
}

void loop()
{
    // Other tasks that may be performed in the loop if needed
    // Outras tarefas que podem ser realizadas no loop, se necessário
}

// Interrupt service routine to handle incoming MIDI messages
// Rotina de serviço de interrupção para lidar com mensagens MIDI recebidas
void handleMIDI()
{
    if (MIDI.read())
    {
        if (MIDI.getType() != 254) // Ignore messages of type 254 (undefined status)
        {
            // Display the received MIDI message type, program number, additional value, and channel
            // Mostra a mensagem do tipo de MIDI recebido, número do programa, valor adicional e canal
            Serial.print("MIDI recebido - Tipo da mensagem: "); Serial.print(MIDI.getType());
            Serial.print(", Número do programa: "); Serial.print(MIDI.getData1());
            Serial.print(", Valor adicional: "); Serial.print(MIDI.getData2());
            Serial.print(", Canal: "); Serial.println(MIDI.getChannel());

            // Check the MIDI message type and send a Program Change message back if it's a Program Change message
            // Verifica o tipo de mensagem MIDI e envia uma mensagem de Mudança de Programa de volta, se for uma mensagem de Mudança de Programa
            switch (MIDI.getType())
            {
                case midi::ProgramChange:
                    MIDI.send(MIDI.getType(), MIDI.getData1(), MIDI.getData2(), MIDI.getChannel());
                    Serial.println("Mensagem PC enviada!"); // Print a message indicating that the PC message is sent
                    break;
                default:
                    break;
            }
        }
    }
}
