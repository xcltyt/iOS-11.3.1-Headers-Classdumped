/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIView.h>

@class AVBackdropView;

@interface AVBackgroundView : UIView {

	BOOL _automaticallyDrawsRoundedCorners;
	AVBackdropView* _backdropView;

}

@property (assign,nonatomic,__weak) AVBackdropView * backdropView;               //@synthesize backdropView=_backdropView - In the implementation block
@property (assign,nonatomic) BOOL automaticallyDrawsRoundedCorners;              //@synthesize automaticallyDrawsRoundedCorners=_automaticallyDrawsRoundedCorners - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackdropView:(AVBackdropView *)arg1 ;
-(AVBackdropView *)backdropView;
-(BOOL)_isContainedInOverlappingBackgroundView;
-(BOOL)automaticallyDrawsRoundedCorners;
-(void)addSubview:(id)arg1 applyingMaterialStyle:(long long)arg2 tintEffectStyle:(long long)arg3 ;
-(void)setAutomaticallyDrawsRoundedCorners:(BOOL)arg1 ;
@end
