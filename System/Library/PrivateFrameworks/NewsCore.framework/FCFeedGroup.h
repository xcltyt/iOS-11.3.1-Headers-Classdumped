/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCFeedElement.h>
#import <libobjc.A.dylib/FCFeedGroupOutlining.h>

@class NSString, FCColor, FCColorGradient, NTPBDiscoverMoreVideosInfo, NSArray, NSDate, FCFeedEdition, FCFeedDescriptor;

@interface FCFeedGroup : NSObject <FCFeedElement, FCFeedGroupOutlining> {

	BOOL _isFirstFromEdition;
	NSString* _identifier;
	NSString* _sourceIdentifier;
	FCColor* _titleColor;
	FCColorGradient* _backgroundGradient;
	NSDate* _creationDate;
	unsigned long long _options;
	unsigned long long _mergeID;
	long long _groupType;
	NSArray* _elements;
	NSArray* _headlines;
	NSString* _title;
	NSString* _subtitle;
	NTPBDiscoverMoreVideosInfo* _discoverMoreVideosInfo;
	NSArray* _videoPlaylistHeadlines;
	FCFeedDescriptor* _L2FeedDescriptor;
	FCFeedEdition* _edition;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long groupType;                                                   //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * elements;                                               //@synthesize elements=_elements - In the implementation block
@property (nonatomic,copy,readonly) NSArray * headlines;                                              //@synthesize headlines=_headlines - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) FCColor * titleColor;                                             //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,copy,readonly) FCColorGradient * backgroundGradient;                             //@synthesize backgroundGradient=_backgroundGradient - In the implementation block
@property (nonatomic,copy,readonly) NTPBDiscoverMoreVideosInfo * discoverMoreVideosInfo;              //@synthesize discoverMoreVideosInfo=_discoverMoreVideosInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * videoPlaylistHeadlines;                                 //@synthesize videoPlaylistHeadlines=_videoPlaylistHeadlines - In the implementation block
@property (nonatomic,copy,readonly) FCFeedDescriptor * L2FeedDescriptor;                              //@synthesize L2FeedDescriptor=_L2FeedDescriptor - In the implementation block
@property (nonatomic,copy,readonly) FCFeedEdition * edition;                                          //@synthesize edition=_edition - In the implementation block
@property (nonatomic,readonly) BOOL isFirstFromEdition;                                               //@synthesize isFirstFromEdition=_isFirstFromEdition - In the implementation block
@property (nonatomic,readonly) BOOL canBeExtended; 
@property (nonatomic,readonly) BOOL hasStrictHeadlineOrder; 
@property (nonatomic,readonly) BOOL shouldPresentCollapsed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long feedElementType; 
@property (nonatomic,copy,readonly) NSString * sourceIdentifier;                                      //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                                 //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                            //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) unsigned long long mergeID;                                            //@synthesize mergeID=_mergeID - In the implementation block
@property (nonatomic,copy,readonly) NSString * backingTagID; 
+(id)pbGroupFromGroup:(id)arg1 sharedStringIndex:(id)arg2 ;
+(id)_pbHeadlinesFromHeadlines:(id)arg1 sharedStringIndex:(id)arg2 ;
-(FCFeedEdition *)edition;
-(NSString *)sourceIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSArray *)elements;
-(NSString *)identifier;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(FCColorGradient *)backgroundGradient;
-(NSString *)subtitle;
-(FCColor *)titleColor;
-(NSDate *)creationDate;
-(long long)groupType;
-(NTPBDiscoverMoreVideosInfo *)discoverMoreVideosInfo;
-(BOOL)isFirstFromEdition;
-(unsigned long long)mergeID;
-(id)initWithIdentifier:(id)arg1 groupType:(long long)arg2 sourceIdentifier:(id)arg3 creationDate:(id)arg4 title:(id)arg5 subtitle:(id)arg6 titleColor:(id)arg7 backgroundGradient:(id)arg8 discoverMoreVideosInfo:(id)arg9 videoPlaylistHeadlines:(id)arg10 L2FeedDescriptor:(id)arg11 edition:(id)arg12 isFirstFromEdition:(BOOL)arg13 elements:(id)arg14 options:(unsigned long long)arg15 mergeID:(unsigned long long)arg16 ;
-(NSArray *)headlines;
-(NSArray *)videoPlaylistHeadlines;
-(id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 title:(id)arg3 subtitle:(id)arg4 titleColor:(id)arg5 backgroundGradient:(id)arg6 discoverMoreVideosInfo:(id)arg7 videoPlaylistHeadlines:(id)arg8 L2FeedDescriptor:(id)arg9 elements:(id)arg10 options:(unsigned long long)arg11 ;
-(NSString *)backingTagID;
-(long long)feedElementType;
-(FCFeedDescriptor *)L2FeedDescriptor;
-(id)copyWithEdition:(id)arg1 isFirst:(BOOL)arg2 ;
-(id)copyWithMergeID:(unsigned long long)arg1 ;
-(BOOL)canBeExtended;
-(id)copyWithElements:(id)arg1 ;
-(BOOL)isGap;
-(id)initWithIdentifier:(id)arg1 groupType:(long long)arg2 sourceIdentifier:(id)arg3 title:(id)arg4 subtitle:(id)arg5 titleColor:(id)arg6 backgroundGradient:(id)arg7 discoverMoreVideosInfo:(id)arg8 videoPlaylistHeadlines:(id)arg9 L2FeedDescriptor:(id)arg10 elements:(id)arg11 options:(unsigned long long)arg12 ;
-(BOOL)hasStrictHeadlineOrder;
-(BOOL)shouldPresentCollapsed;
@end
