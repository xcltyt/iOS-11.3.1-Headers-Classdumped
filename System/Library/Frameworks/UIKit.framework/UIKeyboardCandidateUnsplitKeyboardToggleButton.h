/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardCandidateToggleButton.h>

@class UIKeyboardCandidatePocketShadow;

@interface UIKeyboardCandidateUnsplitKeyboardToggleButton : UIKeyboardCandidateToggleButton {

	UIKeyboardCandidatePocketShadow* _pocketShadow;
	BOOL _drawsBackground;
	BOOL _drawsPocketShadow;

}

@property (assign,nonatomic) BOOL drawsBackground;                //@synthesize drawsBackground=_drawsBackground - In the implementation block
@property (assign,nonatomic) BOOL drawsPocketShadow;              //@synthesize drawsPocketShadow=_drawsPocketShadow - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dimKeys:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setDrawsBackground:(BOOL)arg1 ;
-(BOOL)drawsBackground;
-(void)setDrawsPocketShadow:(BOOL)arg1 ;
-(BOOL)drawsPocketShadow;
@end
