/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class _TtC18ASMessagesProvider17DynamicTypeButton, _TtC11AppStoreKit6Action;

@interface ASMessagesProvider.RoundedButtonCollectionViewCell : UICollectionViewCell {

	 button;
	 dividerView;
	 action;
	 hasDivider;

}

@property (readonly,nonatomic) _TtC18ASMessagesProvider17DynamicTypeButton * button; 
@property (retain,nonatomic) _TtC11AppStoreKit6Action * action; 
@property (assign,nonatomic) BOOL hasDivider; 
-(BOOL)hasDivider;
-(void)setHasDivider:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(_TtC18ASMessagesProvider17DynamicTypeButton *)button;
-(id)initWithCoder:(id)arg1 ;
-(_TtC11AppStoreKit6Action *)action;
-(void)setAction:(_TtC11AppStoreKit6Action *)arg1 ;
-(void)didTapButton:(id)arg1 ;
@end
