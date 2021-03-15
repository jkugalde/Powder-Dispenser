# Powder Dispenser

A 3d printed powder dispenser, works with an Auger screw inside a barrel, powered by a geared DC Motor. It is quite simple.

<img src="/img/powder.png" width="300">

# Design

An auger screw does all the magic, pushing the powder that falls at the inlet of the barrel from the hopper. The screw is attached to the shaft of a geared motor with a set screw, the other end of the auger rotates inside a bearing, which is kinda big, but it is what we had in that time and will be replaced soon.

The powder is pushed until to outlet of the barrel, where it falls through a tube. The containter of the powder is made from an acrylic tube which fits on the hopper and is closed on the top by a lid.

The actuator and container were designed with the intention to attach it to V-Slot profiles, with T nuts and flat head bolts, hence it awkward shape.

# Parts and materiales

<img src="/img/explode.png" width="500">

ID | 3D printed parts                    | Quantity
 ----- | ---------------------------   | ------------
A | Barrel case | 1
B | Auger screw | 1
C | Motor support | 1
D | Hopper | 1
E | Container lid | 1
F | Bearing lid | 1

ID | Comercial parts                   | Quantity
 ----- | ---------------------------   | ------------
1 | DC Motor 12V 60RPM | 1
2 | 6000-2RS bearing | 1
3 | M3x35 parker bolt | 4
4 | M3x10 parker bolt | 4
5 | M3x6 set screw | 1
6 | M3x8 sinkhead bolt | 2
7 | M3 nut | 9
8 | Acrylic container 45 mm OD | 1

# Manufacture

## 3D printing

The parts are not so pleasant to print, as there are some overhangs. Use the following orientations and supports, and try not to use raft. The screw should be printed at minimum layer height.

<img src="/img/print.png" width="800">

When the printing is done, drill through the holes to get the right size and remove any extra material (3, 4, 5 and 10 mm drill bits).

To get the right tolerance it is a good idea to sand the screw, the tip must fit tightly in the bearing, but the rest of the body should pass smoothly through the barrel.

## Container

To make the container you have to cut a 100 mm long piece of a cylindrical tube, remember to file the edges. It is not mandatory to make the container like that, as it could be whatever you want as long it holds the powders, you could also make a piece to fit a plastic bottle.

## Assembly

<img src="/img/ans1.png" width="800">

1) Bolt the motor to the support with the M3x8 sinkhead bolts
2) Press a M3 nut in the screw cavity and put a M3x6 set screw through it, without interfering with the shaft hole
3) Put the auger screw in the motor shaft, leaving a small clearence between it and the motor support. The set screw hole must be located on top of the flat side of the shaft

<img src="/img/ans2.png" width="800">

4) Press M3 nuts in the barrel cavities.
5) Bolt the motor support to the barrel with M3x35 parker bolts
6) Press the bearing against the shaft, and then put the lid on top with M3x10 parker bolts.

<img src="/img/ans3.png" width="500">

7) Press the acrylic cylinder aginst the hopper until it sets tightly, then do the same with the container lid.
8) Press the hopper against the powder dispenser.

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