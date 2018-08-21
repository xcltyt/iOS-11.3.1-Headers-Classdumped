/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface MFMailToURLComponents : NSObject {

	NSArray* _toRecipients;
	NSArray* _ccRecipients;
	NSArray* _bccRecipients;
	NSString* _subject;
	NSString* _body;

}

@property (nonatomic,readonly) NSArray * toRecipients;               //@synthesize toRecipients=_toRecipients - In the implementation block
@property (nonatomic,readonly) NSArray * ccRecipients;               //@synthesize ccRecipients=_ccRecipients - In the implementation block
@property (nonatomic,readonly) NSArray * bccRecipients;              //@synthesize bccRecipients=_bccRecipients - In the implementation block
@property (nonatomic,readonly) NSString * subject;                   //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) NSString * body;                      //@synthesize body=_body - In the implementation block
+(id)componentsWithURL:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(NSString *)body;
-(NSString *)subject;
-(NSArray *)toRecipients;
-(NSArray *)ccRecipients;
-(NSArray *)bccRecipients;
-(void)_decomposeURL:(id)arg1 ;
@end
