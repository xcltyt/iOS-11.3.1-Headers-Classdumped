/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface TSCEWrappedRangeRef : NSObject <NSCopying> {

	TSCERangeRef _rangeRef;

}

@property (nonatomic,readonly) TSCERangeRef rangeRef;                         //@synthesize rangeRef=_rangeRef - In the implementation block
@property (nonatomic,readonly) UUIDData<TSP::UUIDData> tableUID; 
@property (nonatomic,readonly) TSCERangeCoordinate rangeCoord; 
@property (nonatomic,retain,readonly) NSUUID * tableID; 
+(id)invalidRangeRef;
-(TSCERangeRef)rangeRef;
-(id)initWithRangeRef:(const TSCERangeRef*)arg1 ;
-(UUIDData<TSP::UUIDData>)tableUID;
-(id)initWithRangeCoord:(TSCERangeCoordinate)arg1 tableUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(id)initWithRangeCoord:(TSCERangeCoordinate)arg1 tableID:(id)arg2 ;
-(TSCERangeCoordinate)rangeCoord;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)tableID;
@end
