/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class WBSSiteMetadataRequest;

@interface WBSSiteMetadataFetchOperation : NSOperation {

	WBSSiteMetadataRequest* _request;
	long long _status;

}

@property (setter=_setStatus:,getter=_status) long long status;               //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) WBSSiteMetadataRequest * request;              //@synthesize request=_request - In the implementation block
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)init;
-(WBSSiteMetadataRequest *)request;
-(void)start;
-(id)initWithRequest:(id)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)_setStatus:(long long)arg1 ;
-(long long)_status;
@end
