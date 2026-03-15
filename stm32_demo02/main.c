void SystemInit(){

}

int main(){
	
//1.使能GPIoc的时钟 0x4002 1000 +0x18
*( unsigned int *) 0x40021018 |= 0x01<< 4;
//2.配置GPIoC13为输出模式 0x40011000+0x04
*( unsigned int *)0x40011004 |= 0x01<<20;
//3.配置GPIoc13输出低电平 0x4001 1000 +0ch
*( unsigned int *)0x4001100c &=~ (0x01 << 13) ;
	
}