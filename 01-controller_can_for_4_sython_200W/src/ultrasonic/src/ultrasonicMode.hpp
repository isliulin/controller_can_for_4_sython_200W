#pragma once

#include <boost/asio.hpp>
#include <boost/array.hpp>
#include <boost/shared_ptr.hpp>


#include "AsyncSerial.h"
#include "ultrasonicSensor.h"

#include "ros/ros.h"
#include "ros/console.h"
#include "std_msgs/String.h"
#include "zmqclient.h"


#define RECV_WAITE_TIME 300
#define RECV_NO_COUNTER 3

using namespace std;
using namespace boost;



class MAsyncSerialImpl;

class OnlineLogMessage
{
public:
       int online;
 	int timeout;
       boost::posix_time::ptime time_recvnow;  
       boost::posix_time::millisec_posix_time_system_config::time_duration_type time_elapse;
       OnlineLogMessage()
       	{
		online = 0; 
		timeout = 2;
		time_recvnow = boost::posix_time::microsec_clock::universal_time();  
       	}
	int check_connect()
	{   

	    if(online == 1)
	        {
	            //
	             boost::posix_time::ptime now;
	            // 这里为微秒为单位;这里可以将microsec_clock替换成second_clock以秒为单位;  
	            now = boost::posix_time::microsec_clock::universal_time();
	            time_elapse = now - time_recvnow;
	            // 类似GetTickCount，只是这边得到的是2个时间的ticket值的差，以微秒为单位;  
	            int ticks = time_elapse.ticks();  
	            // 得到两个时间间隔的秒数;   
	            int sec = time_elapse.total_seconds();
	            if(sec>=timeout){
	                    online = 0;
	                }
	            
	        
		}
        return online;
	        
	} 

	int Set_connect()
	{   
              online=1;
                    // 这里为微秒为单位;这里可以将microsec_clock替换成second_clock以秒为单位;  
               time_recvnow = boost::posix_time::microsec_clock::universal_time();  
	        
	} 
	
	int Set_timeout(int time)
	{   
		timeout =  time;
	} 
	       
};

class ultrasonicSensorMode
{
    

private:
    ultrasonicSensorMode(const ultrasonicSensorMode& rhs);
    ultrasonicSensorMode& operator=(const ultrasonicSensorMode& rhs);
    

public:

    ultrasonicSensorMode(std::string& port, unsigned int rate);
	
    ~ultrasonicSensorMode();

	void ultrasonicSensorMode_master();
	int  open(std::string devname, unsigned int baudrate);
	void close();
	bool isOpen();
	bool errorStatus();
	void write(std::string data);
	void readCallback(const char *data, size_t size);
	
	
	void print_dec(unsigned char *datBUF,int Num);
	void print_hex(unsigned char *datBUF,int Num);
	void print_hex(std::string str);


	void DevCmd_GetBmsInfo();
	void ros_SendRpc(std::string msg);
	std::string packdata();
	void printfinfo(BmsMessage &msg);
	
	
	
	int DriverecvDelay(  
	 	int size,    
	 	int timeout,    
	 	std::string errprint);	
	//ros
	ros::Publisher BmsInfopub;		
private:
	std::string ttyport;
	int  bandrate;

	boost::shared_ptr<MAsyncSerialImpl> pimpl; ///< Pimpl idiom
	OnlineLogMessage onlineMsg;
	
	bmsSensor bmssensor;

};





