/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSSet;

@interface ADAdSpaceConfiguration : NSObject <NSSecureCoding> {

	int _creativeType;
	long long _options;
	NSString* _identifier;
	NSURL* _serverURL;
	NSString* _advertisingSection;
	NSString* _authenticationUserName;
	NSSet* _context;
	NSString* _adSpaceContextJSON;
	CGRect _currentAppSize;

}

@property (assign,nonatomic) int creativeType;                             //@synthesize creativeType=_creativeType - In the implementation block
@property (assign,nonatomic) long long options;                            //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSURL * serverURL;                              //@synthesize serverURL=_serverURL - In the implementation block
@property (nonatomic,copy) NSString * advertisingSection;                  //@synthesize advertisingSection=_advertisingSection - In the implementation block
@property (nonatomic,copy) NSString * authenticationUserName;              //@synthesize authenticationUserName=_authenticationUserName - In the implementation block
@property (nonatomic,copy) NSSet * context;                                //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * adSpaceContextJSON;                  //@synthesize adSpaceContextJSON=_adSpaceContextJSON - In the implementation block
@property (assign,nonatomic) CGRect currentAppSize;                        //@synthesize currentAppSize=_currentAppSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSSet *)context;
-(void)setOptions:(long long)arg1 ;
-(void)setContext:(NSSet *)arg1 ;
-(long long)options;
-(NSURL *)serverURL;
-(void)setAdvertisingSection:(NSString *)arg1 ;
-(void)setAuthenticationUserName:(NSString *)arg1 ;
-(NSString *)advertisingSection;
-(NSString *)authenticationUserName;
-(int)creativeType;
-(void)setCreativeType:(int)arg1 ;
-(void)setCurrentAppSize:(CGRect)arg1 ;
-(NSString *)adSpaceContextJSON;
-(CGRect)currentAppSize;
-(void)setAdSpaceContextJSON:(NSString *)arg1 ;
-(void)setServerURL:(NSURL *)arg1 ;
@end
