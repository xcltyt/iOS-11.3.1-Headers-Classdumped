/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCPrivateDataSyncManager.h>

@protocol FCPrivateRecordSyncManagerDelegate;
@class CKRecordID, NSArray, NTPBPrivateRecordSyncState, NSString;

@interface FCPrivateRecordSyncManager : NSObject <FCPrivateDataSyncManager> {

	CKRecordID* _recordID;
	id<FCPrivateRecordSyncManagerDelegate> _delegate;
	NSArray* _desiredKeys;
	NTPBPrivateRecordSyncState* _currentState;

}

@property (nonatomic,readonly) NSArray * desiredKeys;                                             //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy,readonly) NTPBPrivateRecordSyncState * currentState;                    //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,copy,readonly) CKRecordID * recordID;                                        //@synthesize recordID=_recordID - In the implementation block
@property (assign,nonatomic,__weak) id<FCPrivateRecordSyncManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<FCPrivateRecordSyncManagerDelegate>)delegate;
-(void)setDelegate:(id<FCPrivateRecordSyncManagerDelegate>)arg1 ;
-(NTPBPrivateRecordSyncState *)currentState;
-(CKRecordID *)recordID;
-(NSArray *)desiredKeys;
-(void)_stateDidChange;
-(void)markAsDirty;
-(BOOL)isAwaitingFirstSync;
-(void)fetchChangesWithContext:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithRecordID:(id)arg1 desiredKeys:(id)arg2 currentState:(id)arg3 ;
-(BOOL)isDirty;
-(void)notifyObservers;
@end
