/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSDictionary;

@interface WLKSiriSearchRequestOperation : WLKNetworkRequestOperation {

	NSDictionary* _options;

}

@property (nonatomic,copy,readonly) NSDictionary * options;              //@synthesize options=_options - In the implementation block
-(NSDictionary *)options;
-(id)initWithOptions:(id)arg1 ;
-(id)responseProcessor;
@end
