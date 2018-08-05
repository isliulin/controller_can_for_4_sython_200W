#pragma once


#include <boost/smart_ptr.hpp>
#include <boost/array.hpp>
#include <numeric>
#include <string>
#include <iostream>
#include "message.hpp"
#include<map>





class synctronDriver
{

    

public:


    typedef      short                  int16; 
    typedef      short                  INT16; 
    typedef    unsigned short int       uint16; 
    typedef    unsigned short int       UINT16; 
    
    typedef    int                      int32; 
    typedef    int                      INT32; 
    typedef    unsigned int             uint32; 
    typedef    unsigned int             UINT32;
    
    enum CMD{
         ID_GetStatus16=10,
         ID_GetStatus16_ACK=11,
         ID_GetStatus16_ERROR=12,
                
         ID_GetStatus32=13,
         ID_GetStatus32_ACK=14,
         ID_GetStatus32_ERROR=15,
                
         ID_GetParam16=20,
         ID_GetParam16_ACK=21,
         ID_GetParam16_ERROR=22,
                
         ID_GetParam32=23,
         ID_GetParam32_ACK=24,
         ID_GetParam32_ERROR=25,
                
         ID_SetParam16=30,
         ID_SetParam16_ACK=31,
         ID_SetParam16_ERROR=32,
                
         ID_SetParam32=33,
         ID_SetParam32_ACK=34,
         ID_SetParam32_ERROR=35,
                
         ID_SetParam16UR=36,
         ID_SetParam16UR_ACK=37,
         ID_SetParam16UR_ERROR=38,
                
         ID_SetCmd16=40,
         ID_SetCmd16_ACK=41,
         ID_SetCmd16_ERROR=42,
                
         ID_SetCmd32=43,
         ID_SetCmd32_ACK=44,
         ID_SetCmd32_ERROR=45,

	 ID_AUTURETURN=0xCA
        };
    enum sattues_addr{
        //Dn��
                /*�����ǰ���ٶ�*/
         DN_GetCrurrentSpeed=0x0000,
         DN_GetEffectiveTorque_I =0x0002,   //'�����Чת����(����ֵ): ������

        // DN_GetSpeedCmd =0x0008,  //'����ٶ��������ֵ
         //DN_GetCruAbsSpeed= 0x0009,  //'�����ǰ�����ٶȾ���ֵ,
         DN_GetEffectiveTorque_T =0x000C, // '�����Чת����(����ֵ����ת�ع۲ⷨ
         DN_GetIpmTem =0x0024, // '���������¶ȣ���λ���ȣ�
         DN_GetDrivBoardTem =0x0025, // ''���ư��¶ȣ���λ���ȣ�
         DN_GetUdc =0x0080, //'ֱ��ĸ�ߵ�ѹֵUdc����λ��0.1V��
        DN_GetAppStatus=0x002C, //'Ӧ�ò� ״̬��
        DN_GetDrivStatus =0x005B, //'��������Ӧ��״̬��
        DN_GetCruError =0x0036, //''��ǰɨ���ϵͳ���ϴ���
        DN_GetPreError =0x0037, //����ɨ���ϵͳ���ϴ��� 
        DN030_DIN = 0x0030,//����io��������״̬
        DN007_CMDVelocity  = 0x0007,   //�ٶ�ָ��
        DN032_DIO_IN  = 0x0032,//'�������߼�����

         // D19 ����ģʽ�£��������λ��ָ���ʱ���ۻ���
         // D1A ����ģʽ�£��������λ��ָ���ʱ���ۻ���
         // D1B ����ģʽ�£��������λ��ָ���λ�������� ���壩
         // D1C ����ģʽ�£��������λ��ָ���λ�������� ���壩
        //  D1D ����ģʽ�£��������λ�ã���λ�������� ���壩
        //  D1E ����ģʽ�£��������λ�ã���λ�������� ���壩
           
           DN_GetCumulativePos =0x0019,   //32wλ
           DN_GetCmdPos =0x001B, //32wλ
           DN_GetCruPos =0x001D, //32wλ

        };
     enum Cmd_addr{
        //Cn��
                /*�����ǰ���ٶ�*/
         CN_Setspeed=0x0000,   //����������� Cn 00����������ٶ�(100rpm
         CN_SetTorque=0x0001,  //���������ת��
         CN_SetAbspos=0x0003,  //��������ľ���λ

        };  
     enum Fnmd_addr{
        //Cn��
                /*�����ǰ���ٶ�*/
         FN_SETHS_Endable=0x0010,   
         FN_ClearErrors=0x0011, 
         FN_EmergencyStop=0x0012,
         FN0E3_LIFEGUARD  = 0x00E3,   //ͨ���ж�ͣ��E3

        };  

	struct DEVICE_DRIV_Status{		
		unsigned char bit0_isSRDY;		//ϵͳ�ϵ��Լ�ͨ�����ȴ��ŷ�ʹ�ܣ�SON���ź�
		unsigned char bit1_isENA_SRV;	 //�ŷ��Ѿ�ʹ��	
		unsigned char bit2_isRes1;	      //����	
		unsigned char bit3_isFault;	     //���ع��ϣ�����ͨ���ϵ����������ϱ���״̬	
		unsigned char bit4_isRes2;	    // ����	
		unsigned char bit5_EMGING;	   //�ŷ������ͣ״̬
		unsigned char bit6_isDIS_SRV;  //�ڲ�ʹ����Ч���������������쳣����ʱ��Ч	
		unsigned char bit7_Warning;	   //�㾯�棬����ͨ����������źţ�ARST���������״̬			
		unsigned char bit8_isRes3; //		
		unsigned char bit9_isRes4;		
		unsigned char bit10_isTR;	 //λ�ã�λ��ģʽ����ת�٣��ٶ�ģʽ����ת�ص��ת��ģʽ������һ����Чʱ����Ч��������Ч	
		unsigned char bit11_isINL;	  //	��ת��ֹ���߷�ת��ֹʱ��Ч��������Ч
		unsigned char bit12_isRes5;		
		unsigned char bit13_isRes6;		
		unsigned char bit14_isRes7;		
		unsigned char bit15_isRes8;		
		};
private:

        char m_add;   //�豸�����ַ
        int  m_dir_flag;    //ת�������־ ˳ʱ��1 ��ʱ��-1
        


        boost::array<int,15>framflushcounter;
        std::map<int,std::string >errormap;
public:
	
        INT16 m_cru_speed;  //�����ǰ�����ٶ�
        UINT16 m_effectiveTorque_I ;  //'�����Чת����(����ֵ): ������
        UINT16 m_cru_speedcmd;  //'����ٶȵ���ָ��ֵ
        UINT16 m_cru_absspeed;  //'�����ǰ�����ٶȾ���ֵ
        UINT16 m_effectiveTorque_T;  //'�����Чת����(����ֵ����ת�ع۲ⷨ
        UINT16 m_IpmTem;  //'���������¶ȣ���λ���ȣ�
        UINT16 m_drivboardTem;  //'���ư��¶ȣ���λ���ȣ�
        UINT16 m_Udc;  //ĸ�ߵ�ѹֵ
        UINT16 m_AppStatus;  //Ӧ��״̬��
        UINT16 m_DrivStatus;  //������
        UINT16 m_CruError;  //��ǰ����
        UINT16 m_PreError;  //ǰһ�δ���
        //UINT32 m_CumulativePos;  //'����ģʽ�£��������λ�ã���λ�������� ���壩
       // UINT32 m_CmdPos;  //'����ģʽ�£��������λ��ָ���λ�������� ���壩
        UINT32 m_CruPos;  //'�����ǰλ��
        UINT16 m_Dins;
	void recordBitstauts(UINT16 statues);
	struct DEVICE_DRIV_Status m_BitStatus;
	
    synctronDriver(char id);
    synctronDriver();
    ~synctronDriver();
    void set_add(char id);
	unsigned char Getadd();
	 void set_dir(int dir);
	 int dir();
	 
    std::string HSDriver_GetCrurrentSpeed(char targID);
    std::string HSDriver_GetCrurrentHZ(char targID);
    std::string HSDriver_GetStatus16(char targID,UINT16 cmdaddr);
    std::string HSDriver_GetStatus32(char targID,UINT16 cmdaddr);
    std::string HSDriver_GetParam16(char targID,UINT16 cmdaddr);
    std::string HSDriver_GetParam32(char targID,UINT16 cmdaddr);
    std::string HSDriver_SetParam16(char targID,UINT16 cmdaddr,UINT16 res_Data);
    std::string HSDriver_SetParam32(char targID,UINT16 cmdaddr,UINT16 res_Data1,UINT16 res_Data2);
    std::string HSDriver_SetCmd16(char targID,UINT16 cmdaddr,UINT16 res_Data);
    std::string HSDriver_SetCmd32(char targID,UINT16 cmdaddr,UINT16 res_Data1,UINT16 res_Data2);

    std::string HSDriver_GetAllstatues(char targID);

        INT16 cru_speed();
        UINT16 effectiveTorque_I() ; 
        UINT16 cru_speedcmd();  //�����ǰ�����ٶ�
        UINT16 cru_absspeed();  //�����ǰ�����ٶ�
        UINT16 effectiveTorque_T();  //�����ǰ�����ٶ�
        UINT16 IpmTem();  //�����ǰ�����ٶ�
        UINT16 drivboardTem();  //�����ǰ�����ٶ�
        UINT16 Udc();  //�����ǰ�����ٶ�
        UINT16 AppStatus();  //�����ǰ�����ٶ�
        UINT16 DrivStatus();  //�����ǰ�����ٶ�
        UINT16 CruError();  //�����ǰ�����ٶ�
        UINT16 PreError();  //�����ǰ�����ٶ�
        //UINT32 CumulativePos();  //�����ǰ�����ٶ�
       //UINT32 CmdPos();  //�����ǰ�����ٶ�
        UINT32 CruPos();  //�����ǰ�����ٶ�
         UINT16 Dins();  //�����ǰ�����ٶ�

       // void StatusRecord(std::string &status);
       void paramRecord(message &msg,CMD cmd);
       void Statusprint();
       void signleRecord(message &msg);
	   void autureturnRecord(message &msg);

        std::string GetStrError(); 


	std::string Cmd_SetEnable();
	std::string Cmd_SetRealse();
	std::string Cmd_GetCruPos();
	std::string Cmd_GetUdc();
	std::string Cmd_GetVelocity();
	std::string Cmd_GetError();

	std::string Cmd_SetVelocity(INT16 Velocity);
	std::string Cmd_SetStop();
	std::string Cmd_GetDinStatues();
	std::string Cmd_GetCurrent();
	std::string Cmd_GetCmdVelocity();
	std::string Cmd_SetClearError();
	std::string Cmd_SetLifeGuard(INT16 TIMEOUT);
	std::string Cmd_QuickStop();
	
	
	


};

