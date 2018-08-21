/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
#import <DuetExpertCenter/_DECItem.h>

@class NSString, CNContact, CNContactProperty;

@interface _DECPersonItem : _DECItem {

	NSString* _contactIdentifier;
	CNContact* _contact;
	CNContactProperty* _contactProperty;

}

@property (nonatomic,readonly) CNContact * contact;                              //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) CNContactProperty * contactProperty;              //@synthesize contactProperty=_contactProperty - In the implementation block
@property (nonatomic,readonly) NSString * contactIdentifier;                     //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
+(unsigned long long)category;
+(BOOL)supportsSecureCoding;
+(id)personWithContactProperty:(id)arg1 ;
+(id)personWithContact:(id)arg1 ;
+(id)personWithContactIdentifier:(id)arg1 ;
+(id)_contactStore;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CNContactProperty *)contactProperty;
-(NSString *)contactIdentifier;
-(id)initWithContactIdentifier:(id)arg1 ;
-(id)initWithContactProperty:(id)arg1 ;
-(CNContact *)contact;
-(BOOL)_isEqualToDECPersonItem:(id)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
@end
