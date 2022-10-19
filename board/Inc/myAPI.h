#ifndef _myAPI_h_
#define _myAPI_h_
#include "main.h"
static char Tube_String8[16];
static int Cnt_press=0;
int get_cnt(void);
void set_cnt(int i);
//LED灯
void led_init(void);
void led_display_bits(uint32_t value);//LED位带操作
void led_display_write_bit(int pos,int value);//设置指定LED灯的状态
void test_led(void);//放在大循环中用于测试LED的两个函数

//数码管
void smg_init(void);   //数码管初始化
void digital_tube_display(int pos,int num); //按照字母表里的数字显示
void digital_tube_display_char(int pos,char *c); //可显示0-9,a-z的字符,带小数点的.
void digital_tube_display_string(int pos,char *s);//从指定位置开始显示任意值,可显示浮点数,最多显示的数量取决于剩下多少数码管
void test_smg_in_while1(void);//放在大循环中用于测试数码管
void digital_tube_display_string_IT(void);//在中断中刷新数码管
//蜂鸣器
void play();//播放阴乐
#endif