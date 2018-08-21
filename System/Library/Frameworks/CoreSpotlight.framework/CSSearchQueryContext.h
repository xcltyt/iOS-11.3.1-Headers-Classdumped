/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary;

@interface CSSearchQueryContext : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _flags;
	int _rankingType;
	NSString* _clientBundleID;
	NSArray* _fetchAttributes;
	NSArray* _protectionClasses;
	NSArray* _bundleIDs;
	NSArray* _rankingQueries;
	NSArray* _preferredLanguages;
	NSString* _keyboardLanguage;
	NSArray* _markedTextArray;
	NSArray* _disableBundles;
	NSString* _userQuery;
	NSString* _filterQuery;
	long long _strongRankingQueryCount;
	long long _dominantRankingQueryCount;
	long long _dominatedRankingQueryCount;
	long long _maxCount;
	long long _completionResultCount;
	long long _queryID;
	NSString* _completionString;
	NSArray* _completionAttributes;
	T _fuzzyMask;
	T _fuzzyMatch;

}

@property (assign,nonatomic) unsigned char flags;                               //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSString * clientBundleID;                         //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (nonatomic,retain) NSArray * fetchAttributes;                         //@synthesize fetchAttributes=_fetchAttributes - In the implementation block
@property (nonatomic,retain) NSArray * protectionClasses;                       //@synthesize protectionClasses=_protectionClasses - In the implementation block
@property (nonatomic,retain) NSArray * bundleIDs;                               //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,retain) NSArray * rankingQueries;                          //@synthesize rankingQueries=_rankingQueries - In the implementation block
@property (nonatomic,retain) NSArray * preferredLanguages;                      //@synthesize preferredLanguages=_preferredLanguages - In the implementation block
@property (nonatomic,retain) NSString * keyboardLanguage;                       //@synthesize keyboardLanguage=_keyboardLanguage - In the implementation block
@property (nonatomic,retain) NSArray * markedTextArray;                         //@synthesize markedTextArray=_markedTextArray - In the implementation block
@property (nonatomic,retain) NSArray * disableBundles;                          //@synthesize disableBundles=_disableBundles - In the implementation block
@property (nonatomic,retain) NSString * userQuery;                              //@synthesize userQuery=_userQuery - In the implementation block
@property (assign,nonatomic) int rankingType;                                   //@synthesize rankingType=_rankingType - In the implementation block
@property (nonatomic,retain) NSString * filterQuery;                            //@synthesize filterQuery=_filterQuery - In the implementation block
@property (assign,nonatomic) long long strongRankingQueryCount;                 //@synthesize strongRankingQueryCount=_strongRankingQueryCount - In the implementation block
@property (assign,nonatomic) long long dominantRankingQueryCount;               //@synthesize dominantRankingQueryCount=_dominantRankingQueryCount - In the implementation block
@property (assign,nonatomic) long long dominatedRankingQueryCount;              //@synthesize dominatedRankingQueryCount=_dominatedRankingQueryCount - In the implementation block
@property (assign,nonatomic) long long maxCount;                                //@synthesize maxCount=_maxCount - In the implementation block
@property (assign,nonatomic) long long completionResultCount;                   //@synthesize completionResultCount=_completionResultCount - In the implementation block
@property (assign,nonatomic) long long queryID;                                 //@synthesize queryID=_queryID - In the implementation block
@property (assign,nonatomic) BOOL internal; 
@property (assign,nonatomic) BOOL grouped; 
@property (assign,nonatomic) BOOL live; 
@property (assign,nonatomic) BOOL counting; 
@property (assign,nonatomic) BOOL attribute; 
@property (assign,nonatomic) BOOL lowPriority; 
@property (assign,nonatomic) T fuzzyMask;                                       //@synthesize fuzzyMask=_fuzzyMask - In the implementation block
@property (assign,nonatomic) T fuzzyMatch;                                      //@synthesize fuzzyMatch=_fuzzyMatch - In the implementation block
@property (nonatomic,retain) NSString * completionString;                       //@synthesize completionString=_completionString - In the implementation block
@property (nonatomic,retain) NSArray * completionAttributes;                    //@synthesize completionAttributes=_completionAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * options; 
+(BOOL)supportsSecureCoding;
-(unsigned char)flags;
-(void)setRankingType:(int)arg1 ;
-(void)setGrouped:(BOOL)arg1 ;
-(void)setKeyboardLanguage:(NSString *)arg1 ;
-(void)setUserQuery:(NSString *)arg1 ;
-(void)setLowPriority:(BOOL)arg1 ;
-(NSString *)keyboardLanguage;
-(id)xpc_dictionary;
-(NSArray *)markedTextArray;
-(NSArray *)disableBundles;
-(NSString *)userQuery;
-(int)rankingType;
-(long long)strongRankingQueryCount;
-(long long)dominantRankingQueryCount;
-(long long)dominatedRankingQueryCount;
-(void)setMarkedTextArray:(NSArray *)arg1 ;
-(void)setDisableBundles:(NSArray *)arg1 ;
-(void)setStrongRankingQueryCount:(long long)arg1 ;
-(void)setDominantRankingQueryCount:(long long)arg1 ;
-(void)setDominatedRankingQueryCount:(long long)arg1 ;
-(void)setQueryID:(long long)arg1 ;
-(BOOL)grouped;
-(BOOL)live;
-(BOOL)counting;
-(void)setLive:(BOOL)arg1 ;
-(void)setCounting:(BOOL)arg1 ;
-(BOOL)lowPriority;
-(long long)completionResultCount;
-(void)setCompletionResultCount:(long long)arg1 ;
-(T)fuzzyMask;
-(void)setFuzzyMask:(T)arg1 ;
-(T)fuzzyMatch;
-(void)setFuzzyMatch:(T)arg1 ;
-(void)setCompletionString:(NSString *)arg1 ;
-(NSArray *)completionAttributes;
-(void)setCompletionAttributes:(NSArray *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(NSArray *)preferredLanguages;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)setAttribute:(BOOL)arg1 ;
-(NSArray *)fetchAttributes;
-(void)setFetchAttributes:(NSArray *)arg1 ;
-(NSArray *)rankingQueries;
-(void)setRankingQueries:(NSArray *)arg1 ;
-(NSArray *)protectionClasses;
-(void)setProtectionClasses:(NSArray *)arg1 ;
-(NSString *)completionString;
-(void)setMaxCount:(long long)arg1 ;
-(long long)maxCount;
-(void)setPreferredLanguages:(NSArray *)arg1 ;
-(void)setClientBundleID:(NSString *)arg1 ;
-(NSString *)filterQuery;
-(void)setFilterQuery:(NSString *)arg1 ;
-(void)setFlags:(unsigned char)arg1 ;
-(NSArray *)bundleIDs;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(BOOL)internal;
-(BOOL)attribute;
-(void)setInternal:(BOOL)arg1 ;
-(long long)queryID;
-(NSString *)clientBundleID;
@end
