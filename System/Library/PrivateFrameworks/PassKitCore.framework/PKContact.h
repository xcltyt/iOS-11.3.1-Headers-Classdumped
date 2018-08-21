/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPersonNameComponents, CNPostalAddress, CNPhoneNumber, NSString;

@interface PKContact : NSObject <NSSecureCoding> {

	NSPersonNameComponents* _name;
	CNPostalAddress* _postalAddress;
	CNPhoneNumber* _phoneNumber;
	NSString* _emailAddress;
	NSString* _supplementarySubLocality;

}

@property (nonatomic,retain) NSPersonNameComponents * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) CNPostalAddress * postalAddress;                  //@synthesize postalAddress=_postalAddress - In the implementation block
@property (nonatomic,retain) CNPhoneNumber * phoneNumber;                      //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * emailAddress;                          //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,retain) NSString * supplementarySubLocality;              //@synthesize supplementarySubLocality=_supplementarySubLocality - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)version;
-(void)setPhoneNumber:(CNPhoneNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setName:(NSPersonNameComponents *)arg1 ;
-(NSPersonNameComponents *)name;
-(id)dictionaryRepresentation;
-(CNPhoneNumber *)phoneNumber;
-(id)cnMutableContact;
-(BOOL)isEqualToContact:(id)arg1 ;
-(NSString *)supplementarySubLocality;
-(void)setSupplementarySubLocality:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(CNPostalAddress *)postalAddress;
-(void)setPostalAddress:(CNPostalAddress *)arg1 ;
-(id)initWithCNContact:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
@end
