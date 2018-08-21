/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecLegacySearchResult.h>
#import <libobjc.A.dylib/WBSParsecSearchMapsResult.h>

@protocol WBSParsecSearchSession;
@class WBSParsecSearchMapsResultFeedbackSender, NSString, SFSearchResult, WBSQuerySuggestion;

@interface WBSParsecSearchMapsResult : WBSParsecLegacySearchResult <WBSParsecSearchMapsResult> {

	id<WBSParsecSearchSession> _parsecSearchSession;
	WBSParsecSearchMapsResultFeedbackSender* _mapsFeedbackSender;

}

@property (nonatomic,retain) WBSParsecSearchMapsResultFeedbackSender * mapsFeedbackSender;              //@synthesize mapsFeedbackSender=_mapsFeedbackSender - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<WBSParsecSearchSession> parsecSearchSession;                            //@synthesize parsecSearchSession=_parsecSearchSession - In the implementation block
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
@property (nonatomic,readonly) SFSearchResult * sfSearchResultValue; 
@property (nonatomic,readonly) unsigned long long engagementDestination; 
@property (nonatomic,readonly) NSString * lastSearchQuery; 
@property (nonatomic,retain) WBSQuerySuggestion * siriSuggestion; 
-(id)initWithDictionary:(id)arg1 ;
-(id<WBSParsecSearchSession>)parsecSearchSession;
-(void)setParsecSearchSession:(id<WBSParsecSearchSession>)arg1 ;
-(WBSParsecSearchMapsResultFeedbackSender *)mapsFeedbackSender;
-(void)setMapsFeedbackSender:(WBSParsecSearchMapsResultFeedbackSender *)arg1 ;
-(void)didDisplayMapsResultForQuery:(id)arg1 ;
@end
