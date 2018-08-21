/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDAuthorizationEntity : HDHealthEntity
+(id)databaseTable;
+(id)columnsDefinition;
+(long long)protectionClass;
+(id)propertyForSyncProvenance;
+(id)uniquedColumns;
+(id)authorizationRecordsByTypeForBundleIdentifier:(id)arg1 types:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)setAuthorizationStatuses:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)setAuthorizationStatuses:(id)arg1 authorizationRequests:(id)arg2 sourceEntity:(id)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(BOOL)resetAuthorizationStatusesForBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)resetAllAuthorizationStatusesWithProfile:(id)arg1 error:(id*)arg2 ;
+(id)authorizationStatusesForBundleIdentifier:(id)arg1 types:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)authorizationRecordsBySourceForType:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_predicateForSourceEntities:(id)arg1 types:(id)arg2 ;
+(id)_maxObjectPersistentIDForProfile:(id)arg1 error:(id*)arg2 ;
+(BOOL)_setAuthorizationStatuses:(id)arg1 authorizationRequests:(id)arg2 sourceEntity:(id)arg3 dateModified:(id)arg4 syncProvenance:(long long)arg5 objectAnchor:(long long)arg6 database:(id)arg7 error:(id*)arg8 ;
+(id)_predicateForBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)_resetAuthorizationStatusesWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)_insertCodableAuthorizations:(id)arg1 sourceEntity:(id)arg2 syncProvenance:(long long)arg3 objectAnchor:(unsigned long long)arg4 database:(id)arg5 error:(id*)arg6 ;
+(BOOL)_insertAuthorizationWithSourceIdentifier:(long long)arg1 dataTypeCode:(long long)arg2 authorizationStatus:(long long)arg3 authorizationRequest:(long long)arg4 modificationDate:(double)arg5 syncProvenance:(long long)arg6 objectAnchor:(long long)arg7 modificationEpoch:(id)arg8 database:(id)arg9 error:(id*)arg10 ;
+(id)_predicateForSourceEntities:(id)arg1 ;
+(id)_predicateForTypes:(id)arg1 ;
+(id)modificationDateForSourceEntity:(id)arg1 type:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)_insertCodableSourceAuthorizations:(id)arg1 overwriteExisting:(BOOL)arg2 syncStore:(id)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(id)_propertiesForCodableAuthorization;
+(void)_addAuthorizationWithRow:(HDSQLiteRowRef)arg1 toCodableCollection:(id)arg2 ;
+(id)_predicateForType:(id)arg1 ;
@end
