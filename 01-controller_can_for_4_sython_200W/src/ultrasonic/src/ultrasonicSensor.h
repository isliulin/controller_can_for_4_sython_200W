#pragma once


#include <boost/smart_ptr.hpp>
#include <boost/array.hpp>
#include <boost/circular_buffer.hpp>
#include <numeric>
#include <string>
#include <iostream>
#include<map>
#include <boost/format.hpp>





class ultrasonicSensor{

public:
	
    typedef      short                  int16; 
    typedef      short                  INT16; 
    typedef    unsigned short int       uint16; 
    typedef    unsigned short int       UINT16; 
    
    typedef    int                      int32; 
    typedef    int                      INT32; 
    typedef    unsigned int             uint32; 
    typedef    unsigned int             UINT32;

    enum BIT{
 	SDATA_LENGTH  =8,
	RDATA_LENGTH  =85,
        };
	struct _BmsWork
	{
		uint16 cell_overVoltage;	//单体过压
		uint16 cell_overVol_release;	//单位是mV,单体过压保护状态解除电压
		uint16 cell_lowVoltage;	//单位是mV,单节欠压保护值,最低单体小于于该值则发生保护，关闭放电MOS
		uint16 cell_lowVol_release;	//单位是mV, 单体欠压压保护状态解除电压

		
		uint16 group_overVoltage;	//整组过压�
		uint16 group_overVol_release;	//单位是mV,单体过压保护状态解除电压
		uint16 group_lowVoltage;	//单位是mV,单节欠压保护值,最低单体小于于该值则发生保护，关闭放电MOS
		uint16 group_lowVol_release;	//单位是mV, 单体欠压压保护状态解除电压

		uint16 charge_HighTemp;	//单体过压
		uint16 charge_HighTemp_release;	//单位是mV,单体过压保护状态解除电压
		uint16 charge_lowTemp;	//单位是mV,单节欠压保护值,最低单体小于于该值则发生保护，关闭放电MOS
		uint16 charge_lowTemp_release;	//单位是mV, 单体欠压压保护状态解除电压

		uint16  discharge_HighTemp;	//单体过压
		uint16  discharge_HighTemp_release;	//单位是mV,单体过压保护状态解除电压
		uint16  discharge_lowTemp;	//单位是mV,单节欠压保护值,最低单体小于于该值则发生保护，关闭放电MOS
		uint16  discharge_lowTemp_release;	//单位是mV, 单体欠压压保护状态解除电压


		uint16  charge_overCurrent;	//单位是mV,单节欠压保护值,最低单体小于于该值则发生保护，关闭放电MOS
		uint16  discharge_overCurrent;	//单位是mV, 单体欠压压保护状态解除电压

		uint16 Voltage;// 总电压
		int16 Current;// 充放电流

		uint16 Soc;// 剩余容量

		uint16 Cell_1;// 1号电池电压
		uint16 Cell_2;// 1号电池电压
		uint16 Cell_3;// 1号电池电压
		uint16 Cell_4;// 1号电池电压
		uint16 Cell_5;// 1号电池电压
		uint16 Cell_6;// 1号电池电压

		uint16 Cell_7;// 1号电池电压
		uint16 Cell_8;// 1号电池电压
		uint16 Cell_9;// 9号电池电压
		uint16 Cell_10;// 10号电池电压
		uint16 Cell_11;// 11号电池电压

		uint16 Cell_12;// 12号电池电压
		uint16 Cell_13;// 13号电池电压
		uint16 Cell_14;// 14号电池电压
		uint16 Cell_15;// 15号电池电压
		uint16 Cell_16;// 16号电池电压

		uint16 Temp1;// 剩余容量
		uint16 Temp2;// 剩余容量

		uint16 Soc_full;// 剩余容量

		uint16 RSOC; //高字节预留，低字节表示剩余容量百分比1就表示1%，最大100。
	};  

public:
//api
	ultrasonicSensor();
	ultrasonicSensor(unsigned char add);
	~ultrasonicSensor();


public :
	void print_hex(unsigned char * data);
	void print_hex(std::string &data);

	void Set_add(unsigned char  add);
	unsigned char add();
	void MyMemclear(const void *src,int count) ;
	std::string Cmd_GetInfo();

	unsigned short getCRC(unsigned char *p,int num);
	int infocheck(std::string &str);
	void recordInfo(std::string &str);
	void printMsg(void);
	
public:
	 struct _BmsWork BmsOrgInfo;
	
private:

        unsigned char m_add;   //设备自身地址
      
	

	
	
	
};



