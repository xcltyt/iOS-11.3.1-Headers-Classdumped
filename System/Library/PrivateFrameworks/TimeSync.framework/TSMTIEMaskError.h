/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSMTIEMaskError : NSObject {

	double _observationInterval;
	double _mask;
	double _mtie;

}

@property (assign,nonatomic) double observationInterval;              //@synthesize observationInterval=_observationInterval - In the implementation block
@property (assign,nonatomic) double mask;                             //@synthesize mask=_mask - In the implementation block
@property (assign,nonatomic) double mtie;                             //@synthesize mtie=_mtie - In the implementation block
-(id)description;
-(void)setMask:(double)arg1 ;
-(double)mask;
-(double)observationInterval;
-(double)mtie;
-(void)setObservationInterval:(double)arg1 ;
-(void)setMtie:(double)arg1 ;
@end
