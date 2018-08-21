/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UISegmentedControl, _TtC18ASMessagesProvider11DividerView;

@interface ASMessagesProvider.SegmentedControlView : UICollectionViewCell {

	 segmentedControl;
	 topDivider;
	 bottomDivider;
	 segmentDidChangeHander;

}

@property (readonly,nonatomic) UISegmentedControl * segmentedControl; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider11DividerView * topDivider; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider11DividerView * bottomDivider; 
@property (copy,nonatomic) id segmentDidChangeHander; 
+(double)preferredHeight;
-(id)segmentDidChangeHander;
-(void)setSegmentDidChangeHander:(id)arg1 ;
-(void)selectedIndexChangedIn:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(UISegmentedControl *)segmentedControl;
-(_TtC18ASMessagesProvider11DividerView *)topDivider;
-(_TtC18ASMessagesProvider11DividerView *)bottomDivider;
@end
