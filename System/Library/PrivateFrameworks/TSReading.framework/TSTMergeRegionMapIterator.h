/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSTMergeRegionMap;

@interface TSTMergeRegionMapIterator : NSObject {

	TSTMergeRegionMap* mMergeRegionMap;
	hash_map_iterator<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> >* mMergeRegionIterator;

}
-(void)dealloc;
-(void)reset;
-(SCD_Struct_TS141)nextMergeRegion;
-(id)initWithMergeRegionMap:(id)arg1 ;
-(BOOL)hasNextMergeRegion;
@end
