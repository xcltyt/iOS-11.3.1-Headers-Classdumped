/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextPosition.h>

@class WebVisiblePosition;

@interface UITextPositionImpl : UITextPosition {

	WebVisiblePosition* _webVisiblePosition;

}

@property (nonatomic,retain) WebVisiblePosition * webVisiblePosition;              //@synthesize webVisiblePosition=_webVisiblePosition - In the implementation block
+(id)wrapWebVisiblePosition:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(WebVisiblePosition *)webVisiblePosition;
-(void)setWebVisiblePosition:(WebVisiblePosition *)arg1 ;
@end
