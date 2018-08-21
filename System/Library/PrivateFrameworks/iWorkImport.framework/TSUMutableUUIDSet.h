/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSUUUIDSet.h>

@interface TSUMutableUUIDSet : TSUUUIDSet
-(BOOL)addUUID:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(void)removeAllUuids;
-(BOOL)removeUUID:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(void)addUUIDs:(const unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(void)removeUUIDs:(const unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(void)addUuidsFromSet:(id)arg1 ;
-(void)addUuidsFromVector:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(void)removeUuidsFromSet:(id)arg1 ;
-(void)removeUuidsFromVector:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
@end
