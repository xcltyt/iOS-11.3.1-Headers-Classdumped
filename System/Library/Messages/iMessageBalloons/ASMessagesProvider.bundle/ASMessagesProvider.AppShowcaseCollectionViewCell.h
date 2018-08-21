/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class _TtC18ASMessagesProvider21AppShowcaseLockupView, _TtC18ASMessagesProvider9VideoView;

@interface ASMessagesProvider.AppShowcaseCollectionViewCell : UICollectionViewCell {

	 lockupView;
	 videoContainer;
	 showcaseType;

}

@property (readonly,nonatomic) _TtC18ASMessagesProvider21AppShowcaseLockupView * lockupView; 
@property (retain,nonatomic) _TtC18ASMessagesProvider9VideoView * videoView; 
@property (assign,nonatomic) BOOL isVideoHidden; 
+(CGSize)sizeFor:(id)arg1 fitting:(CGSize)arg2 pageTraits:(id)arg3 isSeparatorHidden:(BOOL)arg4 ;
+(double)preferredHeightFor:(id)arg1 pageTraits:(id)arg2 fitting:(CGSize)arg3 ;
-(BOOL)isVideoHidden;
-(void)setIsVideoHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(_TtC18ASMessagesProvider9VideoView *)videoView;
-(void)setVideoView:(_TtC18ASMessagesProvider9VideoView *)arg1 ;
-(_TtC18ASMessagesProvider21AppShowcaseLockupView *)lockupView;
@end
