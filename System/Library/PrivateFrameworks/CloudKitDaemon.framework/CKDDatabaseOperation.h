/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@interface CKDDatabaseOperation : CKDOperation {

	long long _databaseScope;

}

@property (assign,nonatomic) long long databaseScope;              //@synthesize databaseScope=_databaseScope - In the implementation block
-(long long)databaseScope;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setDatabaseScope:(long long)arg1 ;
-(void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 operationConfigurationBlock:(/*^block*/id)arg4 ;
-(id)activityCreate;
-(id)CKStatusReportProperties;
-(void)setPCSData:(id)arg1 forFetchedZoneID:(id)arg2 ;
-(void)setPCSData:(id)arg1 forFetchedShareID:(id)arg2 ;
-(void)setPCSData:(id)arg1 forFetchedRecordID:(id)arg2 ;
@end
