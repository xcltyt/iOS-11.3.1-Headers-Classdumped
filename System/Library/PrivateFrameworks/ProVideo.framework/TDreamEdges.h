/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/TDreamProgramWrapperTwoInput.h>

@interface TDreamEdges : TDreamProgramWrapperTwoInput {

	int passUniform;
	int radioUniform;
	int thresholdUniform;
	int preThresholdUniform;
	int modeUniform;
	int _mode;
	double _threshold;
	double _preThreshold;
	double _sigma;

}

@property (assign,nonatomic) double threshold;                 //@synthesize threshold=_threshold - In the implementation block
@property (assign,nonatomic) double preThreshold;              //@synthesize preThreshold=_preThreshold - In the implementation block
@property (assign,nonatomic) double sigma;                     //@synthesize sigma=_sigma - In the implementation block
@property (assign,nonatomic) int mode;                         //@synthesize mode=_mode - In the implementation block
-(id)init;
-(int)mode;
-(void)setMode:(int)arg1 ;
-(double)sigma;
-(void)setSigma:(double)arg1 ;
-(double)preThreshold;
-(void)setPreThreshold:(double)arg1 ;
-(void)setUniforms;
-(void)setThreshold:(double)arg1 ;
-(double)threshold;
@end
