/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FileProvider-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FPItemID : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _providerIdentifier;
	NSString* _domainIdentifier;

}

@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * providerIdentifier;              //@synthesize providerIdentifier=_providerIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * domainIdentifier;                //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
+(id)rootItemIDWithProviderIdentifier:(id)arg1 domainIdentifier:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)initWithProviderIdentifier:(id)arg1 domainIdentifier:(id)arg2 itemIdentifier:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)providerIdentifier;
-(NSString *)domainIdentifier;
-(BOOL)isEqualToItemID:(id)arg1 ;
-(id)initWithSearchableItem:(id)arg1 ;
@end
