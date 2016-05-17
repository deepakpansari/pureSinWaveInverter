/*
 * pure_sin_wave_inverter.cpp
 *
 * Created: 11/21/2014 11:25:42 PM
 *  Author: ARJUN PANSARI
 * Version 1.0.0
 */ 

/****************************** standerd header file*******************************/

#include <avr/io.h>
#define F_CPU 16000000UL
#include <avr/interrupt.h>


/***********************************preprocessive directives *********************/

 
static int count=0,light_comes=1,on_inverter=1;


/*******************************initialisation of main function******************/
int main(void)
{
	
	/**************************definition of all pins used*********************/
	
	DDRB|=(1<<PINB1|1<<PINB2|1<<PINB0);   // defining pins as output for pulse
	PORTB&=~(1<<PINB1|1<<PINB2|1<<PINB0);  //defining initial value to zero
	DDRD&=~(1<<PIND2|1<<PIND3);  //defining input pins for intrrupt 
	PORTD&=~(1<<7); //low level indicate that inverter is off
	PORTD|=(1<<PIND2|1<<PIND3);  // setting initial value to 5V
	
	/*************************defining PWM and intrrupt **********************/
	
	
	TCCR1A|=(1<<WGM10)|(1<<WGM11);  //starting pwm1  FAST PWM WITH SET BIT ON COMPARE MATCH
	TCCR1B|=(1<<WGM12)|(1<<CS10);  // prescaler of 1( NO PRESCALING)*/
	
	
	
	
	TCCR1A|=(1<<COM1A1);
	OCR1A=5;                 // compare OCR1A and OCR1B  interrupt
	TIMSK|=(1<<OCIE1A);
	
	sei();
	while(1)
	{
		
		
	}
}


                                              //stay forever here



/****************************** intrrupt subrutene for TIMER1 COMPARE VECTOR A **************************/
	
		
	ISR(TIMER1_COMPA_vect)
	{
		count++; // counter increment
	
		
		if(count==1){OCR1A=5;PORTB&=~(1<<PINB2);} // GENERATION OF PURE SIN WAVE USING MATLAB DATA AND SET THE VALUE OF PWM2 TO LOW
		else if(count==2)OCR1A=20;
		else if(count==3)OCR1A=41;
		else if(count==4)OCR1A=62;
		else if(count==5)OCR1A=82;
		else if(count==6)OCR1A=103;
		else if(count==7)OCR1A=123;
		else if(count==8)OCR1A=144;
		else if(count==9)OCR1A=164;
		else if(count==10)OCR1A=184;
		else if(count==11)OCR1A=204;
		else if(count==12)OCR1A=224;
		else if(count==13)OCR1A=245;
		else if(count==14)OCR1A=264;
		else if(count==15)OCR1A=284;
		else if(count==16)OCR1A=304;
		else if(count==17)OCR1A=324;
		else if(count==18)OCR1A=343;
		else if(count==19)OCR1A=362;
		else if(count==20)OCR1A=382;
		else if(count==21)OCR1A=401;
		else if(count==22)OCR1A=419;
		else if(count==23)OCR1A=438;
		else if(count==24)OCR1A=457;
		else if(count==25)OCR1A=475;
		else if(count==26)OCR1A=493;
		else if(count==27)OCR1A=511;
		else if(count==28)OCR1A=529;
		else if(count==29)OCR1A=546;
		else if(count==30)OCR1A=563;
		else if(count==31)OCR1A=581;
		else if(count==32)OCR1A=597;
		else if(count==33)OCR1A=614;
		else if(count==34)OCR1A=630;
		else if(count==35)OCR1A=646;
		else if(count==36)OCR1A=662;
		else if(count==37)OCR1A=678;
		else if(count==38)OCR1A=693;
		else if(count==39)OCR1A=708;
		else if(count==40)OCR1A=723;
		else if(count==41)OCR1A=737;
		else if(count==42)OCR1A=751;
		else if(count==43)OCR1A=765;
		else if(count==44)OCR1A=778;
		else if(count==45)OCR1A=792;
		else if(count==46)OCR1A=804;
		else if(count==47)OCR1A=817;
		else if(count==48)OCR1A=829;
		else if(count==49)OCR1A=841;
		else if(count==50)OCR1A=853;
		else if(count==51)OCR1A=864;
		else if(count==52)OCR1A=875;
		else if(count==53)OCR1A=885;
		else if(count==54)OCR1A=895;
		else if(count==55)OCR1A=905;
		else if(count==56)OCR1A=914;
		else if(count==57)OCR1A=923;
		else if(count==58)OCR1A=932;
		else if(count==59)OCR1A=940;
		else if(count==60)OCR1A=948;
		else if(count==61)OCR1A=956;
		else if(count==62)OCR1A=963;
		else if(count==63)OCR1A=969;
		else if(count==64)OCR1A=976;
		else if(count==65)OCR1A=982;
		else if(count==66)OCR1A=987;
		else if(count==67)OCR1A=992;
		else if(count==68)OCR1A=997;
		else if(count==69)OCR1A=1001;
		else if(count==70)OCR1A=1005;
		else if(count==71)OCR1A=1009;
		else if(count==72)OCR1A=1012;
		else if(count==73)OCR1A=1015;
		else if(count==74)OCR1A=1017;
		else if(count==75)OCR1A=1019;
		else if(count==76)OCR1A=1020;
		else if(count==77)OCR1A=1021;
		else if(count==78)OCR1A=1022;
		else if(count==79)OCR1A=1022;
		else if(count==80)OCR1A=1022;
		else if(count==81)OCR1A=1021;
		else if(count==82)OCR1A=1020;
		else if(count==83)OCR1A=1019;
		else if(count==84)OCR1A=1017;
		else if(count==85)OCR1A=1015;
		else if(count==86)OCR1A=1012;
		else if(count==87)OCR1A=1009;
		else if(count==88)OCR1A=1005;
		else if(count==89)OCR1A=1001;
		else if(count==90)OCR1A=997;
		else if(count==91)OCR1A=992;
		else if(count==92)OCR1A=987;
		else if(count==93)OCR1A=982;
		else if(count==94)OCR1A=976;
		else if(count==95)OCR1A=969;
		else if(count==96)OCR1A=963;
		else if(count==97)OCR1A=956;
		else if(count==98)OCR1A=948;
		else if(count==99)OCR1A=940;
		else if(count==100)OCR1A=932;
		else if(count==101)OCR1A=923;
		else if(count==102)OCR1A=914;
		else if(count==103)OCR1A=905;
		else if(count==104)OCR1A=895;
		else if(count==105)OCR1A=885;
		else if(count==106)OCR1A=875;
		else if(count==107)OCR1A=864;
		else if(count==108)OCR1A=853;
		else if(count==109)OCR1A=841;
		else if(count==110)OCR1A=829;
		else if(count==111)OCR1A=817;
		else if(count==112)OCR1A=804;
		else if(count==113)OCR1A=792;
		else if(count==114)OCR1A=778;
		else if(count==115)OCR1A=765;
		else if(count==116)OCR1A=751;
		else if(count==117)OCR1A=737;
		else if(count==118)OCR1A=723;
		else if(count==119)OCR1A=708;
		else if(count==120)OCR1A=693;
		else if(count==121)OCR1A=678;
		else if(count==122)OCR1A=662;
		else if(count==123)OCR1A=646;
		else if(count==124)OCR1A=630;
		
		else if(count==125)OCR1A=597;
		else if(count==126)OCR1A=581;
		else if(count==127)OCR1A=563;
		else if(count==128)OCR1A=546;
		else if(count==129)OCR1A=529;
		else if(count==130)OCR1A=511;
		else if(count==131)OCR1A=493;
		else if(count==132)OCR1A=475;
		else if(count==133)OCR1A=457;
		else if(count==134)OCR1A=438;
		else if(count==135)OCR1A=419;
		else if(count==136)OCR1A=401;
		else if(count==137)OCR1A=382;
		else if(count==138)OCR1A=362;
		else if(count==139)OCR1A=343;
		else if(count==140)OCR1A=324;
		else if(count==141)OCR1A=304;
		else if(count==142)OCR1A=284;
		else if(count==143)OCR1A=264;
		else if(count==144)OCR1A=245;
		else if(count==145)OCR1A=224;
		else if(count==146)OCR1A=204;
		else if(count==147)OCR1A=184;
		else if(count==148)OCR1A=164;
		else if(count==149)OCR1A=144;
		else if(count==150)OCR1A=124;
		else if(count==151)OCR1A=103;
		else if(count==152)OCR1A=82;
		else if(count==153)OCR1A=62;
		else if(count==154)OCR1A=41;
		else if(count==155)OCR1A=20;
			else if(count==156){OCR1B=5;count=0;TCCR1A|=(1<<COM1B1);TIMSK&=~(1<<OCIE1A);TIMSK|=(1<<OCIE1B);TCCR1A&=~(1<<COM1A1);}//SWITCH TO PWM 2
		
		}
		
		
		
		ISR(TIMER1_COMPB_vect)
		{
			count++; // counter increment
			
				
				if(count==1){OCR1B=5;PORTB&=~(1<<PINB1);} //SET PWM PIN TO LOW
					else if(count==2)OCR1B=20;
					else if(count==3)OCR1B=41;
					else if(count==4)OCR1B=62;
					else if(count==5)OCR1B=82;
					else if(count==6)OCR1B=103;
					else if(count==7)OCR1B=123;
					else if(count==8)OCR1B=144;
					else if(count==9)OCR1B=164;
					else if(count==10)OCR1B=184;
					else if(count==11)OCR1B=204;
					else if(count==12)OCR1B=224;
					else if(count==13)OCR1B=245;
					else if(count==14)OCR1B=264;
					else if(count==15)OCR1B=284;
					else if(count==16)OCR1B=304;
					else if(count==17)OCR1B=324;
					else if(count==18)OCR1B=343;
					else if(count==19)OCR1B=362;
					else if(count==20)OCR1B=382;
					else if(count==21)OCR1B=401;
					else if(count==22)OCR1B=419;
					else if(count==23)OCR1B=438;
					else if(count==24)OCR1B=457;
					else if(count==25)OCR1B=475;
					else if(count==26)OCR1B=493;
					else if(count==27)OCR1B=511;
					else if(count==28)OCR1B=529;
					else if(count==29)OCR1B=546;
					else if(count==30)OCR1B=563;
					else if(count==31)OCR1B=581;
					else if(count==32)OCR1B=597;
					else if(count==33)OCR1B=614;
					else if(count==34)OCR1B=630;
					else if(count==35)OCR1B=646;
					else if(count==36)OCR1B=662;
					else if(count==37)OCR1B=678;
					else if(count==38)OCR1B=693;
					else if(count==39)OCR1B=708;
					else if(count==40)OCR1B=723;
					else if(count==41)OCR1B=737;
					else if(count==42)OCR1B=751;
					else if(count==43)OCR1B=765;
					else if(count==44)OCR1B=778;
					else if(count==45)OCR1B=792;
					else if(count==46)OCR1B=804;
					else if(count==47)OCR1B=817;
					else if(count==48)OCR1B=829;
					else if(count==49)OCR1B=841;
					else if(count==50)OCR1B=853;
					else if(count==51)OCR1B=864;
					else if(count==52)OCR1B=875;
					else if(count==53)OCR1B=885;
					else if(count==54)OCR1B=895;
					else if(count==55)OCR1B=905;
					else if(count==56)OCR1B=914;
					else if(count==57)OCR1B=923;
					else if(count==58)OCR1B=932;
					else if(count==59)OCR1B=940;
					else if(count==60)OCR1B=948;
					else if(count==61)OCR1B=956;
					else if(count==62)OCR1B=963;
					else if(count==63)OCR1B=969;
					else if(count==64)OCR1B=976;
					else if(count==65)OCR1B=982;
					else if(count==66)OCR1B=987;
					else if(count==67)OCR1B=992;
					else if(count==68)OCR1B=997;
					else if(count==69)OCR1B=1001;
					else if(count==70)OCR1B=1005;
					else if(count==71)OCR1B=1009;
					else if(count==72)OCR1B=1012;
					else if(count==73)OCR1B=1015;
					else if(count==74)OCR1B=1017;
					else if(count==75)OCR1B=1019;
					else if(count==76)OCR1B=1020;
					else if(count==77)OCR1B=1021;
					else if(count==78)OCR1B=1022;
					else if(count==79)OCR1B=1022;
					else if(count==80)OCR1B=1022;
					else if(count==81)OCR1B=1021;
					else if(count==82)OCR1B=1020;
					else if(count==83)OCR1B=1019;
					else if(count==84)OCR1B=1017;
					else if(count==85)OCR1B=1015;
					else if(count==86)OCR1B=1012;
					else if(count==87)OCR1B=1009;
					else if(count==88)OCR1B=1005;
					else if(count==89)OCR1B=1001;
					else if(count==90)OCR1B=997;
					else if(count==91)OCR1B=992;
					else if(count==92)OCR1B=987;
					else if(count==93)OCR1B=982;
					else if(count==94)OCR1B=976;
					else if(count==95)OCR1B=969;
					else if(count==96)OCR1B=963;
					else if(count==97)OCR1B=956;
					else if(count==98)OCR1B=948;
					else if(count==99)OCR1B=940;
					else if(count==100)OCR1B=932;
					else if(count==101)OCR1B=923;
					else if(count==102)OCR1B=914;
					else if(count==103)OCR1B=905;
					else if(count==104)OCR1B=895;
					else if(count==105)OCR1B=885;
					else if(count==106)OCR1B=875;
					else if(count==107)OCR1B=864;
					else if(count==108)OCR1B=853;
					else if(count==109)OCR1B=841;
					else if(count==110)OCR1B=829;
					else if(count==111)OCR1B=817;
					else if(count==112)OCR1B=804;
					else if(count==113)OCR1B=792;
					else if(count==114)OCR1B=778;
					else if(count==115)OCR1B=765;
					else if(count==116)OCR1B=751;
					else if(count==117)OCR1B=737;
					else if(count==118)OCR1B=723;
					else if(count==119)OCR1B=708;
					else if(count==120)OCR1B=693;
					else if(count==121)OCR1B=678;
					else if(count==122)OCR1B=662;
					else if(count==123)OCR1B=646;
					else if(count==124)OCR1B=630;
					
					else if(count==125)OCR1B=597;
					else if(count==126)OCR1B=581;
					else if(count==127)OCR1B=563;
					else if(count==128)OCR1B=546;
					else if(count==129)OCR1B=529;
					else if(count==130)OCR1B=511;
					else if(count==131)OCR1B=493;
					else if(count==132)OCR1B=475;
					else if(count==133)OCR1B=457;
					else if(count==134)OCR1B=438;
					else if(count==135)OCR1B=419;
					else if(count==136)OCR1B=401;
					else if(count==137)OCR1B=382;
					else if(count==138)OCR1B=362;
					else if(count==139)OCR1B=343;
					else if(count==140)OCR1B=324;
					else if(count==141)OCR1B=304;
					else if(count==142)OCR1B=284;
					else if(count==143)OCR1B=264;
					else if(count==144)OCR1B=245;
					else if(count==145)OCR1B=224;
					else if(count==146)OCR1B=204;
					else if(count==147)OCR1B=184;
					else if(count==148)OCR1B=164;
					else if(count==149)OCR1B=144;
					else if(count==150)OCR1B=124;
					else if(count==151)OCR1B=103;
					else if(count==152)OCR1B=82;
					else if(count==153)OCR1B=62;
					else if(count==154)OCR1B=41;
					else if(count==155)OCR1B=20;
						else if(count==156){OCR1A=5;count=0;TCCR1A|=(1<<COM1A1);TIMSK&=~(1<<OCIE1B);TIMSK|=(1<<OCIE1A);TCCR1A&=~(1<<COM1B1);}//SWITCH TO PWM 1
					}
	

