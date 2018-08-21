/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TSPDocumentResourceLegacyInfo : NSObject <NSCopying> {

	NSString* _digestString;
	NSString* _locator;

}

@property (copy,readonly) NSString * digestString; 
@property (copy,readonly) NSString * locator; 
-(NSString *)locator;
-(id)initWithDigestString:(id)arg1 locator:(id)arg2 ;
-(BOOL)isEqualToDocumentResourceLegacyInfo:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)digestString;
@end
