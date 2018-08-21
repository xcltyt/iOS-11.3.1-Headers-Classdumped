/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIStatusBarRoundedCornerView.h>

@class CALayer;

@interface _UIStatusBarBackgroundActivityView : _UIStatusBarRoundedCornerView {

	CALayer* _pulseLayer;
	UIEdgeInsets _alignmentRectInsets;

}

@property (assign,nonatomic) UIEdgeInsets alignmentRectInsets;              //@synthesize alignmentRectInsets=_alignmentRectInsets - In the implementation block
@property (nonatomic,retain) CALayer * pulseLayer;                          //@synthesize pulseLayer=_pulseLayer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(CALayer *)pulseLayer;
-(void)setPulseLayer:(CALayer *)arg1 ;
@end
