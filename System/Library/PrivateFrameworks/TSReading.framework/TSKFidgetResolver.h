/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSKFidgetResolver : NSObject {

	double _fidgetThreshold;
	id* _values;
	double* _times;
	unsigned long long _head;

}

@property (assign,nonatomic) double fidgetThreshold;              //@synthesize fidgetThreshold=_fidgetThreshold - In the implementation block
@property (nonatomic,readonly) id nonFidgetValue; 
-(id)init;
-(void)dealloc;
-(unsigned long long)p_previousValidIndexFromIndex:(unsigned long long)arg1 ;
-(void)pushValue:(id)arg1 withTime:(double)arg2 ;
-(void)p_advanceHead;
-(id)nonFidgetValue;
-(void)pushValue:(id)arg1 ;
-(double)fidgetThreshold;
-(void)setFidgetThreshold:(double)arg1 ;
@end

