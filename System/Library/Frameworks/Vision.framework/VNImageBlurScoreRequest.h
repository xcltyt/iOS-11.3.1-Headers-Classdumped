/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNImageBasedRequest.h>

@interface VNImageBlurScoreRequest : VNImageBasedRequest {

	unsigned long long _maximumIntermediateSideLength;
	unsigned long long _blurDeterminationMethod;

}

@property (assign,nonatomic) unsigned long long maximumIntermediateSideLength;              //@synthesize maximumIntermediateSideLength=_maximumIntermediateSideLength - In the implementation block
@property (assign,nonatomic) unsigned long long blurDeterminationMethod; 
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)observationsCacheKey;
-(id)sequencedRequestPreviousObservationsKey;
-(BOOL)internalPerformInContext:(id)arg1 error:(id*)arg2 ;
-(void)setBlurDeterminationMethod:(unsigned long long)arg1 ;
-(unsigned long long)maximumIntermediateSideLength;
-(unsigned long long)blurDeterminationMethod;
-(void)setMaximumIntermediateSideLength:(unsigned long long)arg1 ;
@end
