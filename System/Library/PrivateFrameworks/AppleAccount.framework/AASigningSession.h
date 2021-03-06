/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleAccount/AppleAccount-Structs.h>
@class NSString;

@interface AASigningSession : NSObject {

	NACContextOpaque_Ref _context;
	NSString* _certURL;
	NSString* _sessionURL;
	int _error;

}

@property (nonatomic,readonly) int error;              //@synthesize error=_error - In the implementation block
+(id)establishedSessionWithCertURL:(id)arg1 sessionURL:(id)arg2 error:(id*)arg3 ;
+(id)_badURLError;
-(void)dealloc;
-(void)establishSession;
-(id)initWithCertURL:(id)arg1 sessionURL:(id)arg2 ;
-(id)signatureForData:(id)arg1 ;
-(int)error;
@end

