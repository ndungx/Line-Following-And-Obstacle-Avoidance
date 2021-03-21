int motor_r2 = 9;
int motor_r1 = 10;

int motor_l2 = 5;
int motor_l1 = 6;

int speed = 250;

int L_S = A0; //sincer L
int R_S = A1; //sincer R


void setup(){
 pinMode(motor_l1, OUTPUT);
 pinMode(motor_l2, OUTPUT);
 
 pinMode(motor_r1, OUTPUT);
 pinMode(motor_r2, OUTPUT);
 
 pinMode(L_S, INPUT);
 pinMode(R_S, INPUT);
 
 delay(1000);
 }

void loop(){
  
if ((digitalRead(L_S) == 1)&&(digitalRead(R_S) == 1)){forword();}

if ((digitalRead(L_S) == 1)&&(digitalRead(R_S) == 0)){turnRight();}

if ((digitalRead(L_S) == 0)&&(digitalRead(R_S) == 1)){turnLeft();}

if ((digitalRead(L_S) == 0)&&(digitalRead(R_S) == 0)){stop();}
}


void stop(){
 analogWrite(motor_l1, 0);
 analogWrite(motor_l2, 0);
 analogWrite(motor_r1, 0);
 analogWrite(motor_r2, 0);  
}

void forword(){
 analogWrite(motor_l1, speed);
 analogWrite(motor_l2, 0);
 analogWrite(motor_r1, 0);
 analogWrite(motor_r2, speed);  
}

void backword(){
 analogWrite(motor_l1, 0);
 analogWrite(motor_l2, speed);
 analogWrite(motor_r1, speed);
 analogWrite(motor_r2, 0);   
}


void turnRight(){
analogWrite(motor_l1, 0);
analogWrite(motor_l2, speed);
analogWrite(motor_r1, 0);
analogWrite(motor_r2, speed);  
}

void turnLeft(){
analogWrite(motor_l1, speed);
analogWrite(motor_l2, 0);
analogWrite(motor_r1, speed);
analogWrite(motor_r2, 0);   
}
