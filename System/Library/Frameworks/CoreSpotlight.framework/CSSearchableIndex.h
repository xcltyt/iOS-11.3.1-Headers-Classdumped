/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSSearchableIndexDelegate, OS_dispatch_queue;
@class CSIndexingQueue, NSObject, NSString, NSMutableArray, CSIndexConnection;

@interface CSSearchableIndex : NSObject {

	CSIndexingQueue* _activityQueue;
	BOOL _batchOpen;
	int _awakeNotifyToken;
	int _indexID;
	id<CSSearchableIndexDelegate> _indexDelegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSString* _name;
	NSString* _protectionClass;
	NSString* _bundleIdentifier;
	NSMutableArray* _batchedItemsToIndex;
	NSMutableArray* _batchedItemIdentifiersToDelete;
	long long _options;

}

@property (readonly) CSIndexConnection * connection; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                   //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,copy) NSString * name;                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * protectionClass;                                     //@synthesize protectionClass=_protectionClass - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) CSIndexingQueue * activityQueue; 
@property (nonatomic,retain) NSMutableArray * batchedItemsToIndex;                         //@synthesize batchedItemsToIndex=_batchedItemsToIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * batchedItemIdentifiersToDelete;              //@synthesize batchedItemIdentifiersToDelete=_batchedItemIdentifiersToDelete - In the implementation block
@property (assign,nonatomic) long long options;                                            //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) int awakeNotifyToken;                                         //@synthesize awakeNotifyToken=_awakeNotifyToken - In the implementation block
@property (assign,nonatomic) BOOL batchOpen;                                               //@synthesize batchOpen=_batchOpen - In the implementation block
@property (nonatomic,readonly) int indexID;                                                //@synthesize indexID=_indexID - In the implementation block
@property (__weak) id<CSSearchableIndexDelegate> indexDelegate;                            //@synthesize indexDelegate=_indexDelegate - In the implementation block
+(id)defaultSearchableIndex;
+(BOOL)activityShouldBeIndexed:(id)arg1 bundleID:(id)arg2 ;
+(id)mainBundleID;
+(id)mainBundleLocalizedString;
+(id)_requestQueueAttribute;
+(void)_setLastUpdateTime;
+(id)codedIdentifiers:(id)arg1 ;
+(id)codedUniqueIdentifiers:(id)arg1 ;
+(void)notifyIndexDelegates;
+(void)initialize;
+(double)lastUpdateTime;
+(BOOL)isIndexingAvailable;
-(void)indexSearchableItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteSearchableItemsWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchLastClientStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)beginIndexBatch;
-(void)endIndexBatchWithClientState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)requestQueue;
-(id)_initWithName:(id)arg1 protectionClass:(id)arg2 bundleIdentifier:(id)arg3 options:(long long)arg4 ;
-(id<CSSearchableIndexDelegate>)indexDelegate;
-(void)performIndexJob:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)performIndexJob:(id)arg1 ;
-(void)setProtectionClass:(NSString *)arg1 ;
-(id)throttleQueue;
-(void)setAwakeNotifyToken:(int)arg1 ;
-(void)setBatchOpen:(BOOL)arg1 ;
-(void)_cancelAwakeNotifyToken;
-(void)_indexActivities:(id)arg1 flush:(BOOL)arg2 ;
-(void)_checkInWithIndexDelegate:(id)arg1 reason:(id)arg2 ;
-(int)indexID;
-(id)xpc_dictionary_for_command:(const char*)arg1 requiresInitialization:(BOOL)arg2 ;
-(void)_registerAwakeNotifyToken;
-(BOOL)_supportsBatching;
-(BOOL)batchOpen;
-(NSMutableArray *)batchedItemsToIndex;
-(NSMutableArray *)batchedItemIdentifiersToDelete;
-(void)setBatchedItemsToIndex:(NSMutableArray *)arg1 ;
-(void)setBatchedItemIdentifiersToDelete:(NSMutableArray *)arg1 ;
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_itemsBySanitizingItemsForSpotlight:(id)arg1 ;
-(id)_validateOperationWithItems:(id)arg1 ;
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 protectionClass:(id)arg4 forBundleID:(id)arg5 options:(long long)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 protectionClass:(id)arg5 forBundleID:(id)arg6 options:(long long)arg7 completionHandler:(/*^block*/id)arg8 ;
-(id)_validateOperationWithItems:(id)arg1 identifiers:(id)arg2 ;
-(id)_validateClientState:(id)arg1 ;
-(void)_setMailMessageAttributes:(id)arg1 ;
-(void)_standardizeItems:(id)arg1 ;
-(void)willModifySearchableItemsWithIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_validateOperationWithIdentifiers:(id)arg1 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)deleteAllSearchableItemsWithProtectionClass:(id)arg1 forBundleID:(id)arg2 options:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_validateOperation;
-(void)deleteSearchableItemsSinceDate:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)fetchLastClientStateWithProtectionClass:(id)arg1 forBundleID:(id)arg2 clientStateName:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_makeActivityQueueIfNecessary;
-(void)_performIndexJob:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)throttle;
-(void)unthrottle;
-(void)indexSearchableItems:(id)arg1 returningItemsSanitizedForSpotlightTo:(/*^block*/id)arg2 ;
-(void)willModifySearchableItemsWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteAllSearchableItemsForBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteSearchableItemsSinceDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 forUser:(unsigned)arg3 forBundleID:(id)arg4 forUTIType:(id)arg5 ;
-(void)indexUserActivity:(id)arg1 ;
-(void)flushUserActivities;
-(void)performDataMigrationWithTimeout:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)awakeNotifyToken;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(void)_commonInit;
-(void)setOptions:(long long)arg1 ;
-(long long)options;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CSIndexConnection *)connection;
-(void)addInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)addInteraction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteAllInteractionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deleteInteractionsWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 protectionClass:(id)arg2 bundleIdentifier:(id)arg3 ;
-(void)setIndexDelegate:(id<CSSearchableIndexDelegate>)arg1 ;
-(void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 ;
-(void)_issueCommand:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 protectionClass:(id)arg2 ;
-(void)deleteAllSearchableItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(CSIndexingQueue *)activityQueue;
-(id)initWithName:(id)arg1 options:(long long)arg2 ;
-(void)provideFileURLForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)provideDataForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSString *)protectionClass;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 bundleIdentifier:(id)arg2 ;
@end
