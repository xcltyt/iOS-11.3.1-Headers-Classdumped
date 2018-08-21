/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSRemotePlistSnapshot.h>

@class NSDictionary, NSArray, NSString;

@interface WBSAutoFillQuirksSnapshot : NSObject <WBSRemotePlistSnapshot> {

	NSDictionary* _autoFillQuirks;
	NSArray* _domainsWithAssociatedCredentials;
	NSDictionary* _passwordRequirementsByDomain;

}

@property (nonatomic,copy,readonly) NSDictionary * passwordRequirementsByDomain;              //@synthesize passwordRequirementsByDomain=_passwordRequirementsByDomain - In the implementation block
@property (nonatomic,copy,readonly) NSArray * domainsWithAssociatedCredentials;               //@synthesize domainsWithAssociatedCredentials=_domainsWithAssociatedCredentials - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSDictionary *)passwordRequirementsByDomain;
-(id)initWithPlistData:(id)arg1 error:(id*)arg2 ;
-(id)_passwordRequirementsByDomainFromAutoFillQuirks:(id)arg1 error:(id*)arg2 ;
-(id)_domainsWithAssociatedCredentialsFromAutoFillQuirks:(id)arg1 error:(id*)arg2 ;
-(id)initWithPlistURL:(id)arg1 error:(id*)arg2 ;
-(id)plistDataWithFormat:(unsigned long long)arg1 ;
-(NSArray *)domainsWithAssociatedCredentials;
@end
