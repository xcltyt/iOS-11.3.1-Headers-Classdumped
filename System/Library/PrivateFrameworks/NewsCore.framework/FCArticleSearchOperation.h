/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class NSString, FCCloudContext, FCArticleStreamingResults, NSError, FCArticleSearchOperationFeedbackResult;

@interface FCArticleSearchOperation : FCOperation {

	NSString* _query;
	unsigned long long _resultsLimit;
	FCCloudContext* _cloudContext;
	/*^block*/id _articleSearchCompletion;
	FCArticleStreamingResults* _results;
	NSError* _searchError;
	FCArticleSearchOperationFeedbackResult* _feedbackResult;

}

@property (nonatomic,retain) FCArticleStreamingResults * results;                                  //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSError * searchError;                                                //@synthesize searchError=_searchError - In the implementation block
@property (nonatomic,retain) FCArticleSearchOperationFeedbackResult * feedbackResult;              //@synthesize feedbackResult=_feedbackResult - In the implementation block
@property (nonatomic,copy) NSString * query;                                                       //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                                      //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,retain) FCCloudContext * cloudContext;                                        //@synthesize cloudContext=_cloudContext - In the implementation block
@property (copy) id articleSearchCompletion;                                                       //@synthesize articleSearchCompletion=_articleSearchCompletion - In the implementation block
-(void)setQuery:(NSString *)arg1 ;
-(NSString *)query;
-(FCArticleStreamingResults *)results;
-(void)setResults:(FCArticleStreamingResults *)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(FCCloudContext *)cloudContext;
-(void)setCloudContext:(FCCloudContext *)arg1 ;
-(unsigned long long)resultsLimit;
-(void)setFeedbackResult:(FCArticleSearchOperationFeedbackResult *)arg1 ;
-(FCArticleSearchOperationFeedbackResult *)feedbackResult;
-(id)articleSearchCompletion;
-(void)setSearchError:(NSError *)arg1 ;
-(void)_performSearchQuery:(/*^block*/id)arg1 ;
-(void)setArticleSearchCompletion:(id)arg1 ;
-(NSError *)searchError;
-(void)setResultsLimit:(unsigned long long)arg1 ;
@end
