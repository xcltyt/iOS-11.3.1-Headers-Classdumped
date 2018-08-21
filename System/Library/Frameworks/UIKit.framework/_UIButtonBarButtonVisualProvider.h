/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIView;

@interface _UIButtonBarButtonVisualProvider : NSObject <NSCopying>

@property (nonatomic,readonly) UIView * backIndicatorView; 
@property (nonatomic,readonly) UIView * contentView; 
@property (assign,nonatomic) BOOL backButtonConstraintsActive; 
-(UIView *)contentView;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)supportsBackButtons;
-(UIView *)backIndicatorView;
-(BOOL)backButtonConstraintsActive;
-(void)setBackButtonConstraintsActive:(BOOL)arg1 ;
-(BOOL)buttonSelectionState:(id)arg1 forRequestedState:(BOOL)arg2 ;
-(BOOL)buttonHighlitedState:(id)arg1 forRequestedState:(BOOL)arg2 ;
-(BOOL)buttonEnabledState:(id)arg1 forRequestedState:(BOOL)arg2 ;
-(void)updateButton:(id)arg1 forSelectedState:(BOOL)arg2 ;
-(void)updateButton:(id)arg1 forHighlightedState:(BOOL)arg2 ;
-(void)updateButton:(id)arg1 forEnabledState:(BOOL)arg2 ;
-(void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3 ;
-(void)updateButton:(id)arg1 toUseButtonShapes:(BOOL)arg2 ;
-(void)buttonLayoutSubviews:(id)arg1 baseImplementation:(/*^block*/id)arg2 ;
-(void)buttonWillMoveToWindow:(id)arg1 ;
-(void)buttonWillMoveToSuperview:(id)arg1 ;
-(void)button:(id)arg1 traitCollectionDidChange:(id)arg2 ;
-(CGSize)buttonIntrinsicContentSize:(id)arg1 ;
-(UIEdgeInsets)buttonAlignmentRectInsets:(id)arg1 ;
@end
