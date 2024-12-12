//电机控制脚
#define EN_L 5                 //L298N使能 左电机使能
#define EN_R 6                 //L298N使能 右电机使能
#define  Motor_Right  2       //L298N IN2  右电机控制正反转
#define  Motor_Left  4        //L298N IN3  左电机控制正反转

void setup() 
{ 
  pinMode(Motor_Right,OUTPUT); 
  pinMode(Motor_Left,OUTPUT); 
  pinMode(EN_L,OUTPUT);
  pinMode(EN_R,OUTPUT);
} 

//小车前进
void advance()    
{
  analogWrite(EN_L,200); 
  analogWrite(EN_R,200); 
  digitalWrite(Motor_Right,HIGH);  
  digitalWrite(Motor_Left,HIGH);      
}

//小车后退
void back() 
{
  analogWrite(EN_L,200); 
  analogWrite(EN_R,200); 
  digitalWrite(Motor_Right,LOW);
  digitalWrite(Motor_Left,LOW);   
}

//小车左旋转
void left() 
{
  analogWrite(EN_L,200); 
  analogWrite(EN_R,200); 
  digitalWrite(Motor_Right,HIGH);
  digitalWrite(Motor_Left,LOW);   
}

//小车右旋转
void right() 
{
  analogWrite(EN_L,200); 
  analogWrite(EN_R,200); 
  digitalWrite(Motor_Right,LOW);
  digitalWrite(Motor_Left,HIGH);   
}

//小车停止
void stopp()  
{
  analogWrite(EN_L,0); 
  analogWrite(EN_R,0); 
}

void loop()
{
  advance();
  delay(1000);
   stopp();
   delay(200);
   back();
   delay(1000);
   stopp();
   delay(200);
   left();
  delay(1000);
   stopp();
   delay(200);
   right();
  delay(1000);
   stopp();
   delay(200);
}
