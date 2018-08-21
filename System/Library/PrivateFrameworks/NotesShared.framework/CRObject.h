/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/CREquatable.h>
#import <libobjc.A.dylib/CRIdentifiable.h>
#import <libobjc.A.dylib/CRCoding.h>

@class NSUUID, NSDictionary, NSString;

@interface CRObject : NSObject <CRDataType, CREquatable, CRIdentifiable, CRCoding> {

	NSUUID* _identity;
	NSDictionary* _fields;

}

@property (nonatomic,readonly) NSUUID * identity;                   //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) NSDictionary * fields;               //@synthesize fields=_fields - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)CRProperties;
+(id)keyFromSelector:(SEL)arg1 ;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
-(id)tombstone;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSUUID *)identity;
-(void)setDocument:(id)arg1 ;
-(NSDictionary *)fields;
-(void)encodeWithCRCoder:(id)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)setupConstraintsFor:(id)arg1 in:(id)arg2 ;
-(id)initWithIdentity:(id)arg1 fields:(id)arg2 ;
-(void)mergeWithObject:(id)arg1 ;
-(void)setFieldKey:(id)arg1 value:(id)arg2 ;
-(void)mergeWith:(id)arg1 ;
@end
