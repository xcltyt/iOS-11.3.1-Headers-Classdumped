/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DPUniformNoiseGenerator : NSObject {

	double _minValue;
	double _range;

}

@property (nonatomic,readonly) double minValue;              //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,readonly) double range;                 //@synthesize range=_range - In the implementation block
+(id)generatorWithValueRange:(id)arg1 ;
-(id)init;
-(id)description;
-(double)range;
-(id)initWithValueRange:(id)arg1 ;
-(double)sample;
-(double)minValue;
@end
