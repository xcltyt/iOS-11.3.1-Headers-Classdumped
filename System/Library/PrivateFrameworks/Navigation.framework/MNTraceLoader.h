/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNTrace;

@interface MNTraceLoader : NSObject {

	MNTrace* _trace;

}
-(id)loadTraceWithPath:(id)arg1 outError:(id*)arg2 ;
-(BOOL)_loadInfoTable;
-(BOOL)_loadLocationsTable;
-(BOOL)_loadDirectionsTable;
-(BOOL)_loadETAUpdatesTable;
-(BOOL)_loadCompassHeadingDataTable;
-(BOOL)_loadMotionDataTable;
-(BOOL)_loadVehicleDataTable;
-(BOOL)_loadRouteSelectionsTable;
-(BOOL)_loadAnnotatedUserBehaviorTable;
-(BOOL)_loadAnnotatedUserEnvironmentTable;
-(BOOL)_loadSignificantEventsTable;
-(BOOL)_loadCommuteDestinationsTable;
-(BOOL)_loadCommuteDirectionsRequestsTable;
-(BOOL)_loadTraceVersion;
-(BOOL)_updateTraceFromVersion:(unsigned long long)arg1 outError:(id*)arg2 ;
-(BOOL)_executeQuery:(id)arg1 rowHandler:(/*^block*/id)arg2 ;
-(id)_handleUpdateError;
@end
