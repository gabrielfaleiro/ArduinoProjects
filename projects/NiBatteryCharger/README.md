# Ni based battery charger

Modify an existing charger to stop current 

Ni based batteries are charged on constant current

## Goals
- Step 1: Stop current based on time + LEDs
- Step 2: Stop current based on configured time: buttons + LCD
- DEPRECATED:
    - Step 3: Stop current based on energy mAh: current sensors

## Refs

- Batteries: https://batteryuniversity.com/learn/article/do_and_dont_battery_table
- Power transistor: https://uk.farnell.com/power-transistor-definition
  - https://www.electronics-notes.com/articles/analogue_circuits/transistor/transistor-circuit-configurations.php
  - https://www.digikey.es/products/es/discrete-semiconductor-products/transistors-bipolar-bjt-single/276?FV=69%7C411897%2C1989%7C0%2Cmu2A%7C2101%2C-8%7C276%2C7%7C3&quantity=0&ColumnSort=1000011&page=1&pageSize=25
- Current sensor: https://www.sparkfun.com/datasheets/BreakoutBoards/0712.pdf

## Step 1

- Measure provided current at different points of charge
    - Preliminar calculation: 3 hours charge, 2000 mAh
    - Mean current = 700 mA
    - Good option: https://www.digikey.es/product-detail/es/on-semiconductor/KSC2328AYBU/KSC2328AYBU-ND/1048769
- Define circuit for 
- Define an starting counter trigger: button or connection

