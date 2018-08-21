/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSCEReferenceTrackerDelegate.h>

@protocol OS_dispatch_queue;
@class TSCENamedReferenceTrie, NSObject, TSCEReferenceTracker, TSCECalculationEngine, NSString;

@interface TSCENamedReferenceManager : TSPObject <TSCEReferenceTrackerDelegate> {

	TSCENamedReferenceTrie* _names;
	unordered_map<TSU::UUIDData<TSP::UUIDData>, SFUtility::ObjcSharedPtr<TSUPointerKeyDictionary>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, SFUtility::ObjcSharedPtr<TSUPointerKeyDictionary> > > >* _stringsByTrackedReferenceByTable;
	NSObject*<OS_dispatch_queue> _nrmQueue;
	TSCEReferenceTracker* _referenceTracker;
	TSCECalculationEngine* _calcEngine;

}

@property (__weak) TSCECalculationEngine * calcEngine;              //@synthesize calcEngine=_calcEngine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TSCECalculationEngine *)calcEngine;
-(void)setCalcEngine:(TSCECalculationEngine *)arg1 ;
-(UUIDData<TSP::UUIDData>)formulaOwnerUID;
-(void)setCalculationEngine:(id)arg1 ;
-(void)beginTrackingNamesInRange:(TSCERangeCoordinate)arg1 ofResolver:(id)arg2 addingTrackedReferencesTo:(id)arg3 ;
-(void)beginTrackingNameInCell:(TSUCellCoord)arg1 ofResolver:(id)arg2 addingTrackedReferencesTo:(id)arg3 ;
-(TSCERangeRef)rangeForTrackedReference:(id)arg1 gettingTrackedCell:(TSCECellRef*)arg2 ;
-(id)stringForTrackedReference:(id)arg1 inTable:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(id)trackedReferencesExactlyMatchingString:(id)arg1 scopedToTable:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(void)trackedReferenceWasDeleted:(id)arg1 fromOwnerUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(BOOL)trackedReferencesExistForTable:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(void)headerCellContentWasModified:(id)arg1 ;
-(id)beginTrackingNamesInTable:(const UUIDData<TSP::UUIDData>*)arg1 limitedToRange:(TSCERangeCoordinate)arg2 ;
-(void)referencedCellWasModified:(id)arg1 ;
-(BOOL)shouldRewriteOnSort;
-(BOOL)shouldRewriteOnRangeMove;
-(BOOL)shouldRewriteOnTectonicShift;
-(BOOL)shouldRewriteOnCellMerge;
-(BOOL)shouldRewriteOnTranspose;
-(BOOL)shouldRewriteOnTableIDReassignment;
-(id)cellRangeWasInserted:(const TSCERangeRef*)arg1 ;
-(void)updateTrackedHeaders:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(void)referenceTrackerDidUpdateReferences:(id)arg1 ;
-(id)initWithContext:(id)arg1 calculationEngine:(id)arg2 ;
-(void)endTrackingNamesInTable:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(id)referenceTracker;
-(id)referenceForTrackedReference:(id)arg1 sticky:(BOOL)arg2 ;
-(BOOL)referenceNameIsUnique:(id)arg1 forReference:(const TSCERangeRef*)arg2 contextTable:(const UUIDData<TSP::UUIDData>*)arg3 ;
-(id)trackedReferencesMatchingPrefix:(id)arg1 scopedToTable:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(id)trackedReferencesMatchingPrefix:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(NSString *)description;
-(id)initWithContext:(id)arg1 ;
-(void)commonInit;
@end
