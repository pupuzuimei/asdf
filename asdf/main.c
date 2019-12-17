int pin = 13;//定义数字接口13
int val;//定义变量val
void setup() {
    
    Serial.begin(9600);//设置波特率为9600
    pinMode(pin,OUTPUT);//设置数字13口为输出接口
}


void loop() {
    
    val = Serial.read();//读取指令并赋给val
    if(val="hello world")
    {
        //h
        for(int i=0;i<4;i++)
        {
            digitalWrite(pin,HIGH);//点亮
            delay(1000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
        }
        //e
        digitalWrite(pin,HIGH);//点亮
        delay(1000);
        digitalWrite(pin,LOW);//熄灭
        delay(1000);
        //ll
        for(int i=0;i<2;i++)
        {
            digitalWrite(pin,HIGH);//点亮
            delay(1000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            digitalWrite(pin,HIGH);//点亮
            delay(5000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            for(int j=0;j<2;j++)
            {
                digitalWrite(pin,HIGH);//点亮
                delay(1000);
                digitalWrite(pin,LOW);//熄灭
                delay(1000);
            }
        }
        //o
        for(int i=0;i<3;i++)
        {
            digitalWrite(pin,HIGH);//点亮
            delay(5000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
        }
        //w
        digitalWrite(pin,HIGH);//点亮
        delay(1000);
        digitalWrite(pin,LOW);//熄灭
        delay(1000);
        for(int i=0;i<2;i++)
        {
            digitalWrite(pin,HIGH);//点亮
            delay(5000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
        }
        //o
        for(int i=0;i<3;i++)
        {
            digitalWrite(pin,HIGH);//点亮
            delay(5000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
        }
        //r
        digitalWrite(pin,HIGH);//点亮
        delay(1000);
        digitalWrite(pin,LOW);//熄灭
        delay(1000);
        digitalWrite(pin,HIGH);//点亮
        delay(5000);
        digitalWrite(pin,LOW);//熄灭
        delay(1000);
        digitalWrite(pin,HIGH);//点亮
        delay(1000);
        digitalWrite(pin,LOW);//熄灭
        delay(1000);
        //l
        digitalWrite(pin,HIGH);//点亮
        delay(1000);
        digitalWrite(pin,LOW);//熄灭
        delay(1000);
        digitalWrite(pin,HIGH);//点亮
        delay(5000);
        digitalWrite(pin,LOW);//熄灭
        delay(1000);
        for(int j=0;j<2;j++)
        {
            digitalWrite(pin,HIGH);//点亮
            delay(1000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
        }
        //d
        digitalWrite(pin,HIGH);//点亮
        delay(5000);
        digitalWrite(pin,LOW);//熄灭
        delay(1000);
        digitalWrite(pin,HIGH);//点亮
        delay(1000);
        digitalWrite(pin,LOW);//熄灭
        delay(1000);
        digitalWrite(pin,HIGH);//点亮
        delay(1000);
        digitalWrite(pin,LOW);//熄灭
        delay(1000);
        
        
        Serial.println("Hello World!");//显示“Hello World！”字符串
    }
    
}
