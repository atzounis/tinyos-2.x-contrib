COMPONENT=OctopusAppC
CFLAGS += -I. 

CFLAGS += -I../../../tos/platform
CFLAGS += -I../../../tos/platform/telosw/chips
CFLAGS += -I../../../tos/platform/telosw/chips/ccxx00
CFLAGS += -I../../../tos/platform/telosw/chips/sht11
CFLAGS += -I../../../tos/platform/telosw/sensors
CFLAGS += -I../../../tos/chips

CFLAGS += -I../../../tos/lib/printf
CFLAGS += -I../../../tos/lib/net/ 
CFLAGS += -I../../../tos/lib/net/ctp 
CFLAGS += -I../../../tos/ib/net/drip 
CFLAGS += -I../../../tos/lib/net/le  

CFLAGS += -I../../../tos/chips/ccxx00 
CFLAGS += -I../../../tos/chips/ccxx00/acks/StaticAcks
CFLAGS += -I../../../tos/chips/ccxx00/acks/DynamicAcks
CFLAGS += -I../../../tos/chips/ccxx00/alarm
CFLAGS += -I../../../tos/chips/ccxx00/am
CFLAGS += -I../../../tos/chips/ccxx00/radios/cc1100
CFLAGS += -I../../../tos/chips/ccxx00/radios/cc2500
CFLAGS += -I../../../tos/chips/ccxx00/csma
CFLAGS += -I../../../tos/chips/ccxx00/init
CFLAGS += -I../../../tos/chips/ccxx00/interfaces
CFLAGS += -I../../../tos/chips/ccxx00/link
CFLAGS += -I../../../tos/chips/ccxx00/lpl
CFLAGS += -I../../../tos/chips/ccxx00/packet
CFLAGS += -I../../../tos/chips/ccxx00/powermanager
CFLAGS += -I../../../tos/chips/ccxx00/receive
CFLAGS += -I../../../tos/chips/ccxx00/select
CFLAGS += -I../../../tos/chips/ccxx00/spi
CFLAGS += -I../../../tos/chips/ccxx00/splitcontrolmanager
CFLAGS += -I../../../tos/chips/ccxx00/transmit
CFLAGS += -I../../../tos/chips/ccxx00/unique
CFLAGS += -I../../../tos/chips/ccxx00/crc
CFLAGS += -I../../../tos/chips/ccxx00/csma/continuoussense
CFLAGS += -I../../../tos/chips/ccxx00/packet

CFLAGS += -I../../../tos/chips/ccxx00/lpl/alwayson
#CFLAGS += -I../../../tos/chips/ccxx00/lpl/xmac
#CFLAGS += -I../../../tos/chips/ccxx00/lpl/bmac
#CFLAGS += -I../../../tos/chips/ccxx00/lpl/boxmac
#CFLAGS += -I../../../tos/chips/ccxx00/lpl/wor

#CFLAGS += -DTOSH_DATA_LENGTH=48
#BUILD_EXTRA_DEPS = OctopusSentMsg.class OctopusCollectedMsg.class
#MIGFILES = OctopusCollectedMsg.java OctopusCollectedMsg.class OctopusSentMsg.java OctopusSentMsg.class

#OctopusCollectedMsg.class: OctopusCollectedMsg.java
	#javac OctopusCollectedMsg.java
#OctopusCollectedMsg.java: Octopus.h
	#mig java -target=$(PLATFORM) $(CFLAGS) -java-classname=OctopusCollectedMsg Octopus.h octopus_collected_msg -o $@

	
#OctopusSentMsg.class: OctopusSentMsg.java
	#javac OctopusSentMsg.java
#OctopusSentMsg.java: Octopus.h
	#mig java -target=$(PLATFORM) $(CFLAGS) -java-classname=OctopusSentMsg Octopus.h octopus_sent_msg -o $@

include $(MAKERULES)

#migclean:
	#rm -rf $(MIGFILES)


