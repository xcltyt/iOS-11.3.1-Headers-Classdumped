/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSMutableDictionary;

@interface CKDArchiveRecordsURLRequest : CKDURLRequest {

	/*^block*/id _recordArchivedBlock;
	NSMutableDictionary* _zoneIDToRecordIDs;
	NSMutableDictionary* _recordZoneIDByRequestID;

}

@property (nonatomic,retain) NSMutableDictionary * zoneIDToRecordIDs;                    //@synthesize zoneIDToRecordIDs=_zoneIDToRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZoneIDByRequestID;              //@synthesize recordZoneIDByRequestID=_recordZoneIDByRequestID - In the implementation block
@property (nonatomic,copy) id recordArchivedBlock;                                       //@synthesize recordArchivedBlock=_recordArchivedBlock - In the implementation block
-(void)setRecordArchivedBlock:(id)arg1 ;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(NSMutableDictionary *)zoneIDToRecordIDs;
-(NSMutableDictionary *)recordZoneIDByRequestID;
-(id)recordArchivedBlock;
-(id)initWithRecordIDsToArchive:(id)arg1 ;
-(void)setZoneIDToRecordIDs:(NSMutableDictionary *)arg1 ;
-(void)setRecordZoneIDByRequestID:(NSMutableDictionary *)arg1 ;
-(int)operationType;
@end
