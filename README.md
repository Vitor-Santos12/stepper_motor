# Stepper_Motor_1.0

This code works to rotate a stepper motor according to the parameters below:

## Params

int velocMotor = 600; // Variables to configure the motor speed
int contagem = 0; // Variable used as step counter
int passosPorRotacao = 512; // Number of steps per full rotation
int vetorLigDesl[8] = {B01000, B01100, B00100, B00110, B00010, B00011, B00001, B01001};
// Vector that manipulates the motor pins between 0 and 1 (Off/On)
