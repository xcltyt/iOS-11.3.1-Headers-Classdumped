//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSURL;

@interface CLSEventLogSessionRepository : NSObject
{
    NSURL *_rootDirectoryURL;
    NSFileManager *_fileManager;
}

+ (id)sessionFragmentDirectoryURLForLogFileURL:(id)arg1;
+ (id)sessionDirectoryURLForSessionFragmentDirectoryURL:(id)arg1;
+ (id)stateDirectoryURLForSessionDirectoryURL:(id)arg1;
+ (_Bool)isPrepDirectoryURL:(id)arg1;
+ (id)prepDirectoryForDirectoryURL:(id)arg1;
+ (id)sessionFragmentDirectoryNameWithIdentifier:(id)arg1 timestamp:(unsigned long long)arg2;
+ (id)sessionDirectoryNameWithIdentifier:(id)arg1 timestamp:(unsigned long long)arg2;
+ (unsigned long long)priorityForEventLogFileWithName:(id)arg1;
+ (id)activeEventLogFileNameForPriority:(unsigned long long)arg1;
- (_Bool)cleanUpEventLogRepositoryIgnorningSessionFragmentDirectoryURL:(id)arg1 error:(id *)arg2;
- (_Bool)cleanUpStateDirectoryURL:(id)arg1 ignoringSessionFragmentDirectoryURL:(id)arg2 shouldDelete:(_Bool *)arg3 error:(id *)arg4;
- (_Bool)cleanUpSessionDirectoryURL:(id)arg1 ignoringSessionFragmentDirectoryURL:(id)arg2 shouldDelete:(_Bool *)arg3 error:(id *)arg4;
- (_Bool)cleanUpSessionFragmentDirectoryURL:(id)arg1 shouldDelete:(_Bool *)arg2 error:(id *)arg3;
- (_Bool)cleanUpDirectoryURL:(id)arg1 shouldDelete:(_Bool *)arg2 error:(id *)arg3 withCleanUpBlock:(CDUnknownBlockType)arg4;
- (_Bool)cleanUpLogFileURL:(id)arg1 shouldDelete:(_Bool *)arg2 error:(id *)arg3;
- (id)contentsOfDirectoryURL:(id)arg1 error:(id *)arg2;
- (_Bool)itemURL:(id)arg1 hasPathExtensionMatching:(id)arg2;
- (_Bool)itemURL:(id)arg1 hasNameMatching:(id)arg2;
- (_Bool)isDirectoryURL:(id)arg1;
- (_Bool)deleteItemAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)removeLogFile:(id)arg1 error:(id *)arg2;
- (id)logFileURLsForAllStates:(id *)arg1;
- (id)logFileURLsForSessionFragmentDirectory:(id)arg1 error:(id *)arg2;
- (id)eventLogFileURLForStateName:(id)arg1 sessionIdentifier:(id)arg2 sessionTimestamp:(unsigned long long)arg3 sessionFragmentIdentifier:(id)arg4 sessionFragmentTimestamp:(unsigned long long)arg5 eventPriority:(unsigned long long)arg6 error:(id *)arg7;
- (_Bool)removeSessionFragmentDirectory:(id)arg1 error:(id *)arg2;
- (id)sessionFragmentDirectoryURLForStateName:(id)arg1 sessionIdentifier:(id)arg2 sessionTimestamp:(unsigned long long)arg3 sessionFragmentIdentifier:(id)arg4 sessionFragmentTimestamp:(unsigned long long)arg5 error:(id *)arg6;
- (id)sessionFragmentDirectoryURLsForSessionDirectory:(id)arg1 error:(id *)arg2;
- (_Bool)purgePrepSessionFragmentDirectoriesForStateName:(id)arg1 error:(id *)arg2;
- (id)removePrepStatusFromSessionFragmentDirectoryURL:(id)arg1 error:(id *)arg2;
- (id)prepSessionFragmentDirectoryURLForStateName:(id)arg1 sessionFragmentDirectoryURL:(id)arg2 error:(id *)arg3;
- (id)sessionDirectoryURLForStateName:(id)arg1 sessionIdentifier:(id)arg2 sessionTimestamp:(unsigned long long)arg3 error:(id *)arg4;
- (id)sessionDirectoryURLsForStateName:(id)arg1 error:(id *)arg2;
- (id)arrayByFilteringNonDirectoriesFromURLs:(id)arg1;
- (id)stateDirectoryURLForStateName:(id)arg1 error:(id *)arg2;
- (id)statesDirectoryURL:(id *)arg1;
- (_Bool)createDirectoryWithURL:(id)arg1 error:(id *)arg2;
- (_Bool)createFileWithURL:(id)arg1 error:(id *)arg2;
- (_Bool)deleteItemAtPath:(id)arg1 ifNotOfType:(int)arg2 error:(id *)arg3;
- (id)versionDirectoryName;
- (id)init;
- (id)initWithRootDirectoryPath:(id)arg1;
- (id)initWithRootDirectoryURL:(id)arg1;
- (void)dealloc;

@end
