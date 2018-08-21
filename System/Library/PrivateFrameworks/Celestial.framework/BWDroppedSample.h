/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSString;

@interface BWDroppedSample : NSObject {

	NSString* _reason;
	SCD_Struct_BW2 _pts;

}

@property (readonly) NSString * reason; 
@property (readonly) SCD_Struct_BW2 pts; 
+(id)newDroppedSampleWithReason:(id)arg1 pts:(SCD_Struct_BW2)arg2 ;
-(SCD_Struct_BW2)pts;
-(id)_initDroppedSampleWithReason:(id)arg1 pts:(SCD_Struct_BW2)arg2 ;
-(void)dealloc;
-(NSString *)reason;
@end
