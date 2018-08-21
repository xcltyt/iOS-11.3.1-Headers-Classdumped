/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface VSApplicationControllerRequest : NSObject {

	long long _type;
	NSString* _authenticationToken;
	NSString* _SAMLRequest;
	NSArray* _attributeNames;
	NSString* _requestorVerificationToken;

}

@property (assign,nonatomic) long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * authenticationToken;                        //@synthesize authenticationToken=_authenticationToken - In the implementation block
@property (setter=AMLRequest,nonatomic,copy) NSString * SAMLRequest;              //@synthesize SAMLRequest=_SAMLRequest - In the implementation block
@property (nonatomic,copy) NSArray * attributeNames;                              //@synthesize attributeNames=_attributeNames - In the implementation block
@property (nonatomic,copy) NSString * requestorVerificationToken;                 //@synthesize requestorVerificationToken=_requestorVerificationToken - In the implementation block
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(NSArray *)attributeNames;
-(void)setAttributeNames:(NSArray *)arg1 ;
-(NSString *)SAMLRequest;
-(NSString *)requestorVerificationToken;
-(void)setRequestorVerificationToken:(NSString *)arg1 ;
-(void)setSAMLRequest:(NSString *)arg1 ;
@end
