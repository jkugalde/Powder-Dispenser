# Powder Dispenser

A 3d printed powder dispenser, works with an Auger screw inside a barrel, powered by a geared DC Motor. It is quite simple.

<img src="/img/powder.png" width="700">

# Design



# Parts and materiales


ID | 3D printed parts                    | Quantity
 ----- | ---------------------------   | ------------
A | Barrel case | 1
B | Auger screw | 1
C | Motor support | 1
D | Hopper | 1
E | Lid | 1

ID | Comercial parts                   | Quantity
 ----- | ---------------------------   | ------------
1 | DC Motor 12V 60RPM | 1
2 | 6000-2RS bearing | 1
3 | M3x45 parker bolt | 4
4 | M3x10 parker bolt | 4
5 | M3x6 set screw | 1
6 | M3 nut | 9
7 | Acrylic container 45 mm OD | 1

# Manufacture

## 3D printing

## Assembly

# Tests

## Electronics

There are a lot of options to control a DC Motor, a good one is with an H Bridge, like the L298N. You will also need an Arduino, some cables and a 12V/2A power source.

<img src="/img/elec.png" width="700">

## Software

I wrote a simple program in Arduino, which controls the direction and speed of the dispenser if you want to try it that way. Remember that it only dispenses in one direction, the other one would be something like a retraction. 

## Setup

The dispenser is part of a bigger machine, you can read more about it [here](https://gitlab.com/fablab-u-de-chile/biomixer). There are more dispensers in the machine, to deliver different type of powder materials. These powders fall in a vase, where the quantity is roughly controlled with a load cell.

## Tests

Works real fine #trustme. We tested it with agar-agar and calcium propionate and it is very consistent. It does not work with powders that are too fine, like chalk, it agglomerates on the intlet an does not fall.

# Further work

- To test it with different powders.
- To develop a control loop (PID, maybe) to dispense precise quantities.
- To make a larger version to increase the flow, also to work with a bigger grain size.