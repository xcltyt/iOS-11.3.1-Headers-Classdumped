/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCFileInputWaveformDataSource.h>

@interface _RCTimeRangeFileInputWaveformDataSource : RCFileInputWaveformDataSource {

	BOOL _isDecomposedFragment;
	double _destinationBeginTime;
	SCD_Struct_RC4 _sourceTimeRange;

}

@property (assign,nonatomic) BOOL isDecomposedFragment;                   //@synthesize isDecomposedFragment=_isDecomposedFragment - In the implementation block
@property (assign,nonatomic) double destinationBeginTime;                 //@synthesize destinationBeginTime=_destinationBeginTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC4 sourceTimeRange;              //@synthesize sourceTimeRange=_sourceTimeRange - In the implementation block
-(SCD_Struct_RC4)sourceTimeRange;
-(void)setSourceTimeRange:(SCD_Struct_RC4)arg1 ;
-(void)saveGeneratedWaveformIfNecessary;
-(void)setDestinationBeginTime:(double)arg1 ;
-(void)setIsDecomposedFragment:(BOOL)arg1 ;
-(double)destinationBeginTime;
-(BOOL)isDecomposedFragment;
@end
