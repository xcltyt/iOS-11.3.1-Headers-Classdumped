/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class _TtC18ASMessagesProvider17EditorsChoiceView, _TtC18ASMessagesProvider16DynamicTypeLabel, _TtC18ASMessagesProvider17DynamicTypeButton;

@interface ASMessagesProvider.EditorsChoiceCollectionViewCell : UICollectionViewCell {

	 badgeView;
	 titleLabel;
	 textLabel;
	 moreButton;
	 editorsChoiceBackgroundColor;
	 isExpanded;
	 showsBadge;
	 pageTraits;
	 moreTapHandler;

}

@property (readonly,nonatomic) _TtC18ASMessagesProvider17EditorsChoiceView * badgeView; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider16DynamicTypeLabel * titleLabel; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider16DynamicTypeLabel * textLabel; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider17DynamicTypeButton * moreButton; 
@property (assign,nonatomic) BOOL isExpanded; 
@property (assign,nonatomic) BOOL showsBadge; 
@property (retain,nonatomic) id<_TtP18ASMessagesProvider20PageTraitEnvironment_> pageTraits; 
@property (copy,nonatomic) id moreTapHandler; 
+(CGSize)itemSizeFor:(BOOL)arg1 title:(id)arg2 notes:(id)arg3 isExpanded:(BOOL)arg4 pageTraits:(id)arg5 fitting:(CGSize)arg6 ;
+(double)cornerRadius;
-(id)moreTapHandler;
-(void)setMoreTapHandler:(id)arg1 ;
-(void)moreFrom:(id)arg1 ;
-(void)setShowsBadge:(BOOL)arg1 ;
-(BOOL)showsBadge;
-(id<_TtP18ASMessagesProvider20PageTraitEnvironment_>)pageTraits;
-(void)setPageTraits:(id<_TtP18ASMessagesProvider20PageTraitEnvironment_>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(_TtC18ASMessagesProvider16DynamicTypeLabel *)titleLabel;
-(_TtC18ASMessagesProvider16DynamicTypeLabel *)textLabel;
-(BOOL)isExpanded;
-(void)setIsExpanded:(BOOL)arg1 ;
-(_TtC18ASMessagesProvider17EditorsChoiceView *)badgeView;
-(_TtC18ASMessagesProvider17DynamicTypeButton *)moreButton;
@end
