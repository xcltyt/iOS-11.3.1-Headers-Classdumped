/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class NSString, UIImage;

@interface ASMessagesProvider.GiftActivity : UIActivity {

	 context;
	 adamId;
	 contentRating;
	 responder;

}

@property (readonly,nonatomic) NSString * activityTitle; 
@property (readonly,nonatomic) NSString * activityType; 
@property (readonly,nonatomic) UIImage * activityImage; 
-(id)init;
-(NSString *)activityTitle;
-(NSString *)activityType;
-(UIImage *)activityImage;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)_beforeActivity;
@end
