/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSLocale;

@interface TSCENamedReferenceTrie : NSObject {

	TSCENamedReferenceTrieNode* _root;
	NSLocale* _locale;

}
-(BOOL)replaceName:(id)arg1 withName:(id)arg2 inTable:(const UUIDData<TSP::UUIDData>*)arg3 trackedReference:(id)arg4 ;
-(BOOL)insertName:(id)arg1 inTable:(const UUIDData<TSP::UUIDData>*)arg2 trackedReference:(id)arg3 ;
-(void)deleteName:(id)arg1 inTable:(const UUIDData<TSP::UUIDData>*)arg2 trackedReference:(id)arg3 ;
-(id)trackedReferencesMatchingString:(id)arg1 scopedToTable:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(id)trackedReferencesExactlyMatchingString:(id)arg1 scopedToTable:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(id)description;
-(id)initWithLocale:(id)arg1 ;
@end
