/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray, NSDictionary;

@interface FCCKPrivateFetchRecordsOperation : FCCKPrivateDatabaseOperation {

	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	/*^block*/id _fetchRecordsCompletionBlock;
	NSDictionary* _resultRecordsByRecordID;

}

@property (nonatomic,retain) NSDictionary * resultRecordsByRecordID;              //@synthesize resultRecordsByRecordID=_resultRecordsByRecordID - In the implementation block
@property (nonatomic,copy) NSArray * recordIDs;                                   //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                 //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) id fetchRecordsCompletionBlock;                        //@synthesize fetchRecordsCompletionBlock=_fetchRecordsCompletionBlock - In the implementation block
-(NSArray *)desiredKeys;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)fetchRecordsCompletionBlock;
-(NSArray *)recordIDs;
-(void)setResultRecordsByRecordID:(NSDictionary *)arg1 ;
-(NSDictionary *)resultRecordsByRecordID;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setFetchRecordsCompletionBlock:(id)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
@end
