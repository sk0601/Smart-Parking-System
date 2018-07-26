# Smart Parking System

## Introduction
Now a days in many multiplex systems there is a severe problem for car parking systems .There are many lanes for car parking, so to park a car one has to look for the all lanes. Moreover there is a lot of men labour involved for this process for which there is lot of investment. So the need is to develop a system which indicates directly which lane is vacant.

So the project objective is to develop a system to indicate the vacant lane. The project involves a system including infrared transmitter and receiver in every lane and a led display outside the car parking gate Conventionally, car parking systems does not have any intelligent monitoring system. Parking lots are monitored by human beings. All vehicles enter into the parking and waste time for searching for parking slot. Sometimes it creates blockage. Condition become worse when there are multiple parking lanes and each lane have multiple parking slots. Use of automated system for car parking monitoring will reduce the human efforts. Display unit is installed on entrance of parking lot which will show LEDs for all Parking slot and for all parking lanes. Empty slot is indicated by the respective glowing LED.

## Hardware Required
- Arduino.
-	IR module.
-	LED.
-	LDR sensor.
-	Bread board.
-	Resistors.
-	Jumping wires.

## Working
We are going to use Infra Red transmitters and Receivers for each parking slot. The IR Receivers are connected to Arduino. For controller purpose we are going to use arduino. IR rays are obstructed when a car is parked in any parking slot. Thus Arduino will come to know that which slot is empty and which slot is full.

We have chosen IR module instead of RF module because we want a receiver having line of sight communication with the transmitter. But RF does not require line of sight communication. And in case of LDR, there is scope for false triggering due to sunlight or headlight of car. So considering all these points we have finalized to use IR module.

Each car has an LDR so that it can follow while glowing LED’s. The car moves to the slot which is nearest to it. LED’s are installed at the entrance of all parking slots and the empty slot is indicated by the respective glowing LED.

## Application
-	Can be used in IOT(Internet Of Things) as a smart parking system and in AID to Google Self - Drive car(Google Self Drive car works on the principle of LIDAR by mapping and monitoring movement of vehicles & people around it. But it is not possible in a parking area. So just like an autopilot in a plane we propose to introduce auto drive feature as an AID to Google - Self Drive car in such areas).  
-	This project can be used for parking system in any shopping mall, multiplex.
-	 Can be used for industries, commercial offices and educational institutes.

## Conclusion
In view of the above description Automatic Car Parking System is an important factor in traffic areas and is essential to overcome severe problems facing for car parking. 
Besides being cost effective we also induce other benefits such as:
-	Customer friendly secured parking.
-	Pollution control.
Thus this technology provides human hassle free parking.


