/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface AAFamilyInvite : NSObject {

	BOOL _isChildTransferInvite;
	NSString* _code;
	NSString* _organizerFirstName;
	NSString* _organizerLastName;
	NSString* _organizerEmail;
	NSNumber* _organizerDSID;
	NSNumber* _recepientDSID;
	NSString* _childFirstName;
	NSString* _childLastName;

}

@property (nonatomic,copy) NSString * code;                            //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) NSString * organizerFirstName;              //@synthesize organizerFirstName=_organizerFirstName - In the implementation block
@property (nonatomic,copy) NSString * organizerLastName;               //@synthesize organizerLastName=_organizerLastName - In the implementation block
@property (nonatomic,copy) NSString * organizerEmail;                  //@synthesize organizerEmail=_organizerEmail - In the implementation block
@property (nonatomic,copy) NSNumber * organizerDSID;                   //@synthesize organizerDSID=_organizerDSID - In the implementation block
@property (nonatomic,copy) NSNumber * recepientDSID;                   //@synthesize recepientDSID=_recepientDSID - In the implementation block
@property (assign,nonatomic) BOOL isChildTransferInvite;               //@synthesize isChildTransferInvite=_isChildTransferInvite - In the implementation block
@property (nonatomic,copy) NSString * childFirstName;                  //@synthesize childFirstName=_childFirstName - In the implementation block
@property (nonatomic,copy) NSString * childLastName;                   //@synthesize childLastName=_childLastName - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)code;
-(NSNumber *)organizerDSID;
-(void)setOrganizerDSID:(NSNumber *)arg1 ;
-(NSNumber *)recepientDSID;
-(void)setRecepientDSID:(NSNumber *)arg1 ;
-(BOOL)isChildTransferInvite;
-(void)setIsChildTransferInvite:(BOOL)arg1 ;
-(void)setChildFirstName:(NSString *)arg1 ;
-(void)setChildLastName:(NSString *)arg1 ;
-(void)setOrganizerEmail:(NSString *)arg1 ;
-(NSString *)organizerEmail;
-(NSString *)organizerFirstName;
-(NSString *)organizerLastName;
-(NSString *)childFirstName;
-(NSString *)childLastName;
-(void)setOrganizerFirstName:(NSString *)arg1 ;
-(void)setOrganizerLastName:(NSString *)arg1 ;
-(void)setCode:(NSString *)arg1 ;
@end
