/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VoiceTrigger/VoiceTrigger-Structs.h>
@interface VTCorruptDetector : NSObject {

	int _zeroSamplesCount;
	int _maxZeroSamplesCount;

}
-(id)init;
-(void)reset;
-(int)getMaxZeroSampleCount;
-(BOOL)audioHasZeroRun;
-(void)analyze:(AudioBuffer*)arg1 ;
@end
