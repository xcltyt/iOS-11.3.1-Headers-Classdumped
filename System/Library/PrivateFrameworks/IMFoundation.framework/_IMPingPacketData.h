/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@interface _IMPingPacketData : NSObject {

	int _sequenceNumber;
	BOOL _timedOut;
	int _error;
	timeval _timeSent;
	double _rtt;

}

@property (nonatomic,readonly) int sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) BOOL timedOut;                   //@synthesize timedOut=_timedOut - In the implementation block
@property (nonatomic,readonly) timeval timeSent;                //@synthesize timeSent=_timeSent - In the implementation block
@property (nonatomic,readonly) int error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) double rtt;                      //@synthesize rtt=_rtt - In the implementation block
-(double)rtt;
-(BOOL)timedOut;
-(int)sequenceNumber;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSequeneceNumber:(int)arg1 timesent:(timeval*)arg2 error:(int)arg3 ;
-(void)_markPacketAsTimedOut:(double)arg1 ;
-(void)_returnPacketArrived;
-(timeval)timeSent;
-(int)error;
@end
