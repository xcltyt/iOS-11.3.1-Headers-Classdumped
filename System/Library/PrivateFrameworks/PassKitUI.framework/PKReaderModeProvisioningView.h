/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UIView.h>

@class PKReaderModeAnimationView, PKReaderModeHeaderView, UIProgressView;

@interface PKReaderModeProvisioningView : UIView {

	PKReaderModeAnimationView* _animationView;
	PKReaderModeHeaderView* _headerView;
	UIProgressView* _progressView;

}
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 product:(id)arg3 ;
-(void)setPlasticCardImage:(id)arg1 ;
-(void)setDigitalCardImage:(id)arg1 ;
-(id)initWithContext:(long long)arg1 product:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 product:(id)arg2 ;
-(void)setTransferringProgress:(double)arg1 duration:(double)arg2 ;
@end
