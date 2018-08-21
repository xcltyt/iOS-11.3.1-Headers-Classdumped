/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SecureChannel.framework/SecureChannel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SecureChannelController, NSString, NSURL;

@interface SecureChannelAction : NSObject {

	SecureChannelController* controller;
	NSString* _title;
	NSString* _message;
	NSURL* _url;

}

@property (nonatomic,copy,readonly) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                     //@synthesize url=_url - In the implementation block
-(NSURL *)url;
-(NSString *)title;
-(NSString *)message;
-(void)performWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 callToAction:(id)arg2 ;
@end
