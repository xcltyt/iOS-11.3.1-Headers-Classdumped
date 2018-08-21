/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICDelegateToken, NSError, NSString;

@interface ICDelegationConsumerServiceSessionRequestResult : NSObject {

	ICDelegateToken* _delegateToken;
	NSError* _resultError;
	NSString* _storefrontIdentifier;

}

@property (nonatomic,copy,readonly) ICDelegateToken * delegateToken;              //@synthesize delegateToken=_delegateToken - In the implementation block
@property (nonatomic,copy,readonly) NSError * resultError;                        //@synthesize resultError=_resultError - In the implementation block
@property (nonatomic,copy,readonly) NSString * storefrontIdentifier;              //@synthesize storefrontIdentifier=_storefrontIdentifier - In the implementation block
-(id)initWithDelegateToken:(id)arg1 storefrontIdentifier:(id)arg2 resultError:(id)arg3 ;
-(ICDelegateToken *)delegateToken;
-(NSString *)storefrontIdentifier;
-(NSError *)resultError;
@end
