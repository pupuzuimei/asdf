int pin = 13;//定义数字接口13
int val;//定义变量val
void setup() {
    
    Serial.begin(9600);//设置波特率为9600
    pinMode(pin,OUTPUT);//设置数字13口为输出接口
}


void loop() {
    
    val = Serial.read();//读取指令并赋给val
    if(val=='R')
    {
        digitalWrite(pin,HIGH);//点亮
        delay(5000);
        digitalWrite(pin,LOW);//熄灭
        delay(1000);
        Serial.println("Hello World!");//显示“Hello World！”字符串
    }
    /*for(int i=0;i<3;i++)
     {
     digitalWrite(pin,HIGH);
     delay(5000);
     digitalWrite(pin,LOW);
     delay(1000);
     }
     for(int i=0;i<3;i++)
     {
     digitalWrite(pin,HIGH);
     delay(1000);
     digitalWrite(pin,LOW);
     delay(1000);
     }
     */
}
