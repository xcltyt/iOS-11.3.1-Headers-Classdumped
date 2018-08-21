/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CATHTTPMessageParserDelegate;
#import <Catalyst/Catalyst-Structs.h>
@class NSDictionary;

@interface CATHTTPMessageParser : NSObject {

	CFHTTPMessageRef mCurrentMessage;
	NSDictionary* mCurrentHeaderFields;
	unsigned long long mCurrentBytesReceived;
	id<CATHTTPMessageParserDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CATHTTPMessageParserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)encodeRequestData:(id)arg1 ;
+(id)responseHeaderForContentWithLength:(unsigned long long)arg1 ;
-(id<CATHTTPMessageParserDelegate>)delegate;
-(void)setDelegate:(id<CATHTTPMessageParserDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)appendBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)delegateDidReceiveRequestWithURL:(id)arg1 ;
-(void)delegateDidReceiveRequestData:(id)arg1 ;
-(void)delegateDidReceiveResponseData:(id)arg1 moreComing:(BOOL)arg2 ;
@end
