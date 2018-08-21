/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/UserEventPlugins/com.apple.accessoryd.matching.plugin/com.apple.accessoryd.matching
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.accessoryd.matching/ACCSQLite.h>

@class NSArray, NSDate;

@interface ACCAnalyticsLoggerSQLiteStore : ACCSQLite

@property (readonly) NSArray * allEvents; 
@property (retain) NSDate * uploadDate; 
+(id)storeWithPath:(id)arg1 schema:(id)arg2 ;
-(void)addEventDict:(id)arg1 toTable:(id)arg2 ;
-(BOOL)tryToOpenDatabase;
-(NSDate *)uploadDate;
-(void)setUploadDate:(NSDate *)arg1 ;
-(void)clearAllData;
-(void)dealloc;
-(NSArray *)allEvents;
@end
