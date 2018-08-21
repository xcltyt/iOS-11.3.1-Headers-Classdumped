/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKit/UIView.h>

@class SXAutoLayoutLabel;

@interface SXSkipCountdownView : UIView {

	double _threshold;
	SXAutoLayoutLabel* _skipInLabel;
	SXAutoLayoutLabel* _thresholdLabel;

}

@property (nonatomic,retain) SXAutoLayoutLabel * skipInLabel;                 //@synthesize skipInLabel=_skipInLabel - In the implementation block
@property (nonatomic,retain) SXAutoLayoutLabel * thresholdLabel;              //@synthesize thresholdLabel=_thresholdLabel - In the implementation block
@property (assign,nonatomic) double threshold;                                //@synthesize threshold=_threshold - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(id)accessibilityElements;
-(SXAutoLayoutLabel *)skipInLabel;
-(SXAutoLayoutLabel *)thresholdLabel;
-(void)setSkipInLabel:(SXAutoLayoutLabel *)arg1 ;
-(void)setThresholdLabel:(SXAutoLayoutLabel *)arg1 ;
-(void)setThreshold:(double)arg1 ;
-(double)threshold;
@end
