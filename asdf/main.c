int pin = 13;//定义数字接口13
int val;//定义变量val
void setup() {
    
    Serial.begin(9600);//设置波特率为9600
    pinMode(pin,OUTPUT);//设置数字13口为输出接口
}


void loop() {
    
    val = Serial.read();//读取指令并赋给val
    switch (val)
    {
        case 'a':
        {
            Serial.println("a");//显示字符串
            digitalWrite(pin,HIGH);//点亮
            delay(1000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            digitalWrite(pin,HIGH);//点亮
            delay(5000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            
            break;
        }
        case 'b':
        {
            Serial.println("b");//显示字符串
            digitalWrite(pin,HIGH);//点亮
            delay(5000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            for(int i=0;i<3;i++)
            {
                digitalWrite(pin,HIGH);//点亮
                delay(1000);
                digitalWrite(pin,LOW);//熄灭
                delay(1000);
            }
            
            break;
        }
        case 'c':
        {
            Serial.println("c");//显示字符串
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);//点亮
                delay(5000);
                digitalWrite(pin,LOW);//熄灭
                delay(1000);
                digitalWrite(pin,HIGH);//点亮
                delay(1000);
                digitalWrite(pin,LOW);//熄灭
                delay(1000);
            }
            
            break;
        }
        case 'd':
        {
            Serial.println("d");//显示字符串
            digitalWrite(pin,HIGH);//点亮
            delay(5000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);//点亮
                delay(1000);
                digitalWrite(pin,LOW);//熄灭
                delay(1000);
            }
            
            break;
        }
        case 'e':
        {
            Serial.println("e");//显示字符串
            digitalWrite(pin,HIGH);//点亮
            delay(1000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            
            break;
        }
        case 'f':
        {
            Serial.println("f");//显示字符串
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);//点亮
                delay(1000);
                digitalWrite(pin,LOW);//熄灭
                delay(1000);
            }
            digitalWrite(pin,HIGH);//点亮
            delay(5000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            digitalWrite(pin,HIGH);//点亮
            delay(1000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            
            break;
        }
        case 'g':
        {
            Serial.println("g");//显示字符串
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);//点亮
                delay(5000);
                digitalWrite(pin,LOW);//熄灭
                delay(1000);
            }
            
            digitalWrite(pin,HIGH);//点亮
            delay(1000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            
            break;
        }
        case 'h':
        {
            Serial.println("h");//显示字符串
            for(int i=0;i<4;i++)
            {
                digitalWrite(pin,HIGH);//点亮
                delay(1000);
                digitalWrite(pin,LOW);//熄灭
                delay(1000);
            }
            
            break;
        }
        case 'i':
        {
            Serial.println("i");//显示字符串
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);//点亮
                delay(1000);
                digitalWrite(pin,LOW);//熄灭
                delay(1000);
            }
            
            break;
        }
        case 'j':
        {
            Serial.println("j");//显示字符串
            digitalWrite(pin,HIGH);//点亮
            delay(1000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            for(int i=0;i<3;i++)
            {
                digitalWrite(pin,HIGH);//点亮
                delay(5000);
                digitalWrite(pin,LOW);//熄灭
                delay(1000);
            }
            
            break;
        }
        case 'k':
        {
            Serial.println("k");//显示字符串
            digitalWrite(pin,HIGH);//点亮
            delay(5000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            digitalWrite(pin,HIGH);//点亮
            delay(1000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            digitalWrite(pin,HIGH);//点亮
            delay(5000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            
            break;
        }
        case 'l':
        {
            Serial.println("l");//显示字符串
            digitalWrite(pin,HIGH);//点亮
            delay(1000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            digitalWrite(pin,HIGH);//点亮
            delay(5000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);//点亮
                delay(1000);
                digitalWrite(pin,LOW);//熄灭
                delay(1000);
            }
            
            break;
        }
        case 'm':
        {
            Serial.println("m");//显示字符串
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);//点亮
                delay(5000);
                digitalWrite(pin,LOW);//熄灭
                delay(1000);
            }
            
            break;
        }
        case 'n':
        {
            Serial.println("n");//显示字符串
            digitalWrite(pin,HIGH);//点亮
            delay(5000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            digitalWrite(pin,HIGH);//点亮
            delay(1000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            
            break;
        }
        case 'o':
        {
            Serial.println("o");//显示字符串
            for(int i=0;i<3;i++)
            {
                digitalWrite(pin,HIGH);//点亮
                delay(5000);
                digitalWrite(pin,LOW);//熄灭
                delay(1000);
            }
            
            break;
        }
        case 'p':
        {
            Serial.println("p");//显示字符串
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
            digitalWrite(pin,HIGH);//点亮
            delay(1000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            
            break;
        }
        case 'q':
        {
            Serial.println("q");//显示字符串
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);//点亮
                delay(5000);
                digitalWrite(pin,LOW);//熄灭
                delay(1000);
            }
            digitalWrite(pin,HIGH);//点亮
            delay(1000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            digitalWrite(pin,HIGH);//点亮
            delay(5000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            
            break;
        }
        case 'r':
        {
            Serial.println("r");//显示字符串
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
            
            break;
        }
        case 's':
        {
            Serial.println("s");//显示字符串
            for(int i=0;i<3;i++)
            {
                digitalWrite(pin,HIGH);//点亮
                delay(1000);
                digitalWrite(pin,LOW);//熄灭
                delay(1000);
            }
            
            break;
        }
        case 't':
        {
            Serial.println("t");//显示字符串
            digitalWrite(pin,HIGH);//点亮
            delay(5000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            
            break;
        }
        case 'u':
        {
            Serial.println("u");//显示字符串
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);//点亮
                delay(1000);
                digitalWrite(pin,LOW);//熄灭
                delay(1000);
            }
            digitalWrite(pin,HIGH);//点亮
            delay(5000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            
            break;
        }
        case 'v':
        {
            Serial.println("v");//显示字符串
            for(int i=0;i<3;i++)
            {
                digitalWrite(pin,HIGH);//点亮
                delay(1000);
                digitalWrite(pin,LOW);//熄灭
                delay(1000);
            }
            digitalWrite(pin,HIGH);//点亮
            delay(5000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            
            break;
        }
        case 'w':
        {
            Serial.println("w");//显示字符串
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
            
            break;
        }
        case 'x':
        {
            Serial.println("x");//显示字符串
            digitalWrite(pin,HIGH);//点亮
            delay(5000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);//点亮
                delay(1000);
                digitalWrite(pin,LOW);//熄灭
                delay(1000);
            }
            digitalWrite(pin,HIGH);//点亮
            delay(5000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
            
            break;
        }
        case 'y':
        {
            Serial.println("y");//显示字符串
            digitalWrite(pin,HIGH);//点亮
            delay(5000);
            digitalWrite(pin,LOW);//熄灭
            delay(1000);
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
            
            break;
        }
        case 'z':
        {
            Serial.println("z");//显示字符串
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);//点亮
                delay(5000);
                digitalWrite(pin,LOW);//熄灭
                delay(1000);
            }
            for(int i=0;i<2;i++)
            {
                digitalWrite(pin,HIGH);//点亮
                delay(1000);
                digitalWrite(pin,LOW);//熄灭
                delay(1000);
            }
            
            break;
        }
    }
    
    
    
    /*if(val="hello world")
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
     */
}
