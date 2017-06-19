import serial
from pythonosc import udp_client
from pythonosc import osc_message_builder

Enc1OUT = serial.Serial('com5')
Enc1IN = Enc1OUT.read(1)
EOSClient = udp_client.SimpleUDPClient("172.20.15.111", 5001)

while int(Enc1IN)  < 5:
    if int(Enc1IN) == 1:
        EOSClient.send_message('/eos/active/wheel/2', '4.0')
        Enc1IN = Enc1OUT.read(1)
        print("1 full")


    if int(Enc1IN) == 0:
        EOSClient.send_message('/eos/wheel/level/', '-4.0')
        Enc1IN = Enc1OUT.read(1)
        print("1 out")
        
    else:
        print(Enc1IN)
