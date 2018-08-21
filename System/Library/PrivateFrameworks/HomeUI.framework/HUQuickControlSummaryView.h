/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIView.h>

@protocol HFStringGenerator;
@class HUIconView, UILabel, NSArray, UILayoutGuide;

@interface HUQuickControlSummaryView : UIView {

	HUIconView* _iconView;
	id<HFStringGenerator> _primaryStatusText;
	id<HFStringGenerator> _secondaryStatusText;
	unsigned long long _contentAlignment;
	long long _sizeSubclass;
	unsigned long long _iconSize;
	UILabel* _primaryStatusLabel;
	UILabel* _secondaryStatusLabel;
	NSArray* _contentConstraints;
	UILayoutGuide* _lastBaselineLayoutGuide;

}

@property (assign,nonatomic) unsigned long long iconSize;                          //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,readonly) UILabel * primaryStatusLabel;                       //@synthesize primaryStatusLabel=_primaryStatusLabel - In the implementation block
@property (nonatomic,readonly) UILabel * secondaryStatusLabel;                     //@synthesize secondaryStatusLabel=_secondaryStatusLabel - In the implementation block
@property (nonatomic,retain) NSArray * contentConstraints;                         //@synthesize contentConstraints=_contentConstraints - In the implementation block
@property (nonatomic,retain) UILayoutGuide * lastBaselineLayoutGuide;              //@synthesize lastBaselineLayoutGuide=_lastBaselineLayoutGuide - In the implementation block
@property (nonatomic,readonly) HUIconView * iconView;                              //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,copy) id<HFStringGenerator> primaryStatusText;                //@synthesize primaryStatusText=_primaryStatusText - In the implementation block
@property (nonatomic,copy) id<HFStringGenerator> secondaryStatusText;              //@synthesize secondaryStatusText=_secondaryStatusText - In the implementation block
@property (assign,nonatomic) unsigned long long contentAlignment;                  //@synthesize contentAlignment=_contentAlignment - In the implementation block
@property (assign,nonatomic) long long sizeSubclass;                               //@synthesize sizeSubclass=_sizeSubclass - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateConstraints;
-(id)lastBaselineAnchor;
-(id)viewForLastBaselineLayout;
-(id)viewForFirstBaselineLayout;
-(void)setIconSize:(unsigned long long)arg1 ;
-(id)_primaryFont;
-(void)setContentAlignment:(unsigned long long)arg1 ;
-(unsigned long long)contentAlignment;
-(unsigned long long)iconSize;
-(HUIconView *)iconView;
-(void)setContentConstraints:(NSArray *)arg1 ;
-(NSArray *)contentConstraints;
-(void)_updatePrimaryStatusContent;
-(void)_updateSecondaryStatusContent;
-(void)setLastBaselineLayoutGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)lastBaselineLayoutGuide;
-(UILabel *)primaryStatusLabel;
-(void)_invalidateContentAndConstraints;
-(id)_statusParagraphStyleWithLineHeight:(double)arg1 ;
-(id<HFStringGenerator>)primaryStatusText;
-(id)_secondaryFont;
-(double)_secondaryStatusLineHeight;
-(UILabel *)secondaryStatusLabel;
-(id<HFStringGenerator>)secondaryStatusText;
-(long long)sizeSubclass;
-(id)_secondaryFontTextStyle;
-(double)_iconHeight;
-(id)_primaryFontTextStyle;
-(void)setSizeSubclass:(long long)arg1 ;
-(void)setPrimaryStatusText:(id<HFStringGenerator>)arg1 ;
-(void)setSecondaryStatusText:(id<HFStringGenerator>)arg1 ;
@end
