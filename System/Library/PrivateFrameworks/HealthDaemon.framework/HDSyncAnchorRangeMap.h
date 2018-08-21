/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface HDSyncAnchorRangeMap : NSObject <NSSecureCoding> {

	NSMutableDictionary* _anchorRangesByEntityIdentifier;

}

@property (nonatomic,retain) NSMutableDictionary * anchorRangesByEntityIdentifier;              //@synthesize anchorRangesByEntityIdentifier=_anchorRangesByEntityIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)reset;
-(id)codableSyncAnchorRangeMap;
-(id)initWithCodableSyncAnchorRangeMap:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)anchorRangeCount;
-(BOOL)getAnchorRange:(HDSyncAnchorRange*)arg1 forSyncEntityIdentifier:(id)arg2 ;
-(void)setAnchorRange:(HDSyncAnchorRange)arg1 forSyncEntityIdentifier:(id)arg2 ;
-(void)enumerateAnchorRangesAndEntityIdentifiersWithBlock:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)anchorRangesByEntityIdentifier;
-(void)setAnchorRangesByEntityIdentifier:(NSMutableDictionary *)arg1 ;
@end
