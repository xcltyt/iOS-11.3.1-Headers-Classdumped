/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFetchOperation.h>

@class FCWebArchiveSource, NSString, FCInterestToken;

@interface FCWebArchiveFetchOperation : FCFetchOperation {

	FCWebArchiveSource* _webArchiveSource;
	NSString* _key;
	FCInterestToken* _holdToken;
	FCInterestToken* _fetchToken;

}
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)initWithWebArchiveSource:(id)arg1 key:(id)arg2 ;
@end
