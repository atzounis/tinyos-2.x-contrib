/*
* Copyright (c) 2006 Stanford University.
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
* - Redistributions of source code must retain the above copyright
*   notice, this list of conditions and the following disclaimer.
* - Redistributions in binary form must reproduce the above copyright
*   notice, this list of conditions and the following disclaimer in the
*   documentation and/or other materials provided with the
*   distribution.
* - Neither the name of the Stanford University nor the names of
*   its contributors may be used to endorse or promote products derived
*   from this software without specific prior written permission
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
* ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
* FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL STANFORD
* UNIVERSITY OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
* OF THE POSSIBILITY OF SUCH DAMAGE.
*/ 

/**
 * Based on code developed at Vanderbilt University.
 * @author Brano Kusy (branislav.kusy@gmail.com)
 */ 

configuration TimeStampingTMicro32C
{
    provides
    {
      interface TimeStamping<TMicro,uint32_t> as TimeStampingTMicro32;
    }
}

implementation
{
    components TimeStampingTMicro32M; 

    TimeStampingTMicro32 = TimeStampingTMicro32M;
    
		components CC2420TransmitC;
    TimeStampingTMicro32M.RadioTimeStamping -> CC2420TransmitC;
    TimeStampingTMicro32M.CC2420Transmit -> CC2420TransmitC;

    components CounterMicro32C,
				new CounterToLocalTimeC(TMicro);
    TimeStampingTMicro32M.LocalTime    -> CounterToLocalTimeC;
  	CounterToLocalTimeC.Counter -> CounterMicro32C; 

}