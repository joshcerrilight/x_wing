import serial
from pythonosc import udp_client
from pythonosc import osc_message_builder

EncOUT = serial.Serial('com5')
EncIN = Enc1OUT.read(1)
EOSClient = udp_client.SimpleUDPClient("172.20.15.111", 5001)

while int(EncIN)  < 53:
    if int(EncIN) == 11:
        EOSClient.send_message('/eos/active/wheel/2', '4.0')
        EncIN = EncOUT.read(2)

    if int(Enc1IN) == 10:
        EOSClient.send_message('/eos/wheel/level/', '-4.0')
        Enc1IN = Enc1OUT.read(2)
