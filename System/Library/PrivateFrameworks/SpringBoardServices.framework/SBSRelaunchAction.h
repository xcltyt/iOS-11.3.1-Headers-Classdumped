/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class NSString, NSURL;

@interface SBSRelaunchAction : BSAction

@property (nonatomic,copy,readonly) NSString * reason; 
@property (nonatomic,readonly) unsigned long long options; 
@property (nonatomic,retain,readonly) NSURL * targetURL; 
+(id)actionWithReason:(id)arg1 options:(unsigned long long)arg2 targetURL:(id)arg3 ;
-(id)initWithReason:(id)arg1 options:(unsigned long long)arg2 targetURL:(id)arg3 ;
-(unsigned long long)options;
-(NSString *)reason;
-(NSURL *)targetURL;
@end
