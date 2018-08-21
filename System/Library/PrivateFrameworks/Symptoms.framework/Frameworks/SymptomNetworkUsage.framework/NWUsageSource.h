/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SymptomNetworkUsage/SymptomNetworkUsage-Structs.h>
@class NSString;

@interface NWUsageSource : NSObject {

	int _pidForAttribution;
	int _epidForAttribution;
	update_subset_for_deltas _prevItems;
	BOOL _removed;
	BOOL _removing;
	BOOL _newSnapshotAvailable;
	BOOL _startScreenStateOn;
	BOOL _updateScreenStateOn;
	unsigned _seqno;
	unsigned _flowFlags;
	int _attributionReason;
	unsigned _startAppState;
	unsigned _updateAppState;
	unsigned long long _snapshotRevision;
	unsigned long long _reference;
	double _creationTimestamp;
	NSString* _attributedEntity;

}

@property (assign) unsigned long long snapshotRevision;                             //@synthesize snapshotRevision=_snapshotRevision - In the implementation block
@property (nonatomic,readonly) unsigned long long reference;                        //@synthesize reference=_reference - In the implementation block
@property (assign) unsigned seqno;                                                  //@synthesize seqno=_seqno - In the implementation block
@property (assign) BOOL removed;                                                    //@synthesize removed=_removed - In the implementation block
@property (assign) BOOL removing;                                                   //@synthesize removing=_removing - In the implementation block
@property (assign) BOOL newSnapshotAvailable;                                       //@synthesize newSnapshotAvailable=_newSnapshotAvailable - In the implementation block
@property (assign) double creationTimestamp;                                        //@synthesize creationTimestamp=_creationTimestamp - In the implementation block
@property (assign) unsigned flowFlags;                                              //@synthesize flowFlags=_flowFlags - In the implementation block
@property (retain) NSString * attributedEntity;                                     //@synthesize attributedEntity=_attributedEntity - In the implementation block
@property (assign) int attributionReason;                                           //@synthesize attributionReason=_attributionReason - In the implementation block
@property (assign) int pidForAttribution;                                           //@synthesize pidForAttribution=_pidForAttribution - In the implementation block
@property (assign) int epidForAttribution;                                          //@synthesize epidForAttribution=_epidForAttribution - In the implementation block
@property (assign) unsigned startAppState;                                          //@synthesize startAppState=_startAppState - In the implementation block
@property (assign) unsigned updateAppState;                                         //@synthesize updateAppState=_updateAppState - In the implementation block
@property (assign) BOOL startScreenStateOn;                                         //@synthesize startScreenStateOn=_startScreenStateOn - In the implementation block
@property (assign) BOOL updateScreenStateOn;                                        //@synthesize updateScreenStateOn=_updateScreenStateOn - In the implementation block
@property (nonatomic,readonly) update_subset_for_deltas* prevItemsPtr; 
-(id)currentSnapshot;
-(void)setSeqno:(unsigned)arg1 ;
-(void)setCreationTimestamp:(double)arg1 ;
-(double)creationTimestamp;
-(BOOL)removed;
-(void)setRemoved:(BOOL)arg1 ;
-(unsigned long long)reference;
-(unsigned)seqno;
-(id)_createNSUUIDForBytes:(unsigned char)arg1 ;
-(void)setRemoving:(BOOL)arg1 ;
-(BOOL)removing;
-(BOOL)updateWithUpdate:(nstat_msg_src_update_convenient*)arg1 monitor:(id)arg2 ;
-(id)initWithUpdate:(nstat_msg_src_update_convenient*)arg1 monitor:(id)arg2 ;
-(BOOL)newSnapshotAvailable;
-(unsigned)flagsForProvider:(unsigned)arg1 sockaddr:(sockaddr*)arg2 ;
-(update_subset_for_deltas*)prevItemsPtr;
-(void)saveOldValues:(nstat_counts*)arg1 ;
-(unsigned long long)snapshotRevision;
-(void)setSnapshotRevision:(unsigned long long)arg1 ;
-(void)setNewSnapshotAvailable:(BOOL)arg1 ;
-(unsigned)flowFlags;
-(void)setFlowFlags:(unsigned)arg1 ;
-(NSString *)attributedEntity;
-(void)setAttributedEntity:(NSString *)arg1 ;
-(int)attributionReason;
-(void)setAttributionReason:(int)arg1 ;
-(int)pidForAttribution;
-(void)setPidForAttribution:(int)arg1 ;
-(int)epidForAttribution;
-(void)setEpidForAttribution:(int)arg1 ;
-(unsigned)startAppState;
-(void)setStartAppState:(unsigned)arg1 ;
-(unsigned)updateAppState;
-(void)setUpdateAppState:(unsigned)arg1 ;
-(BOOL)startScreenStateOn;
-(void)setStartScreenStateOn:(BOOL)arg1 ;
-(BOOL)updateScreenStateOn;
-(void)setUpdateScreenStateOn:(BOOL)arg1 ;
@end
