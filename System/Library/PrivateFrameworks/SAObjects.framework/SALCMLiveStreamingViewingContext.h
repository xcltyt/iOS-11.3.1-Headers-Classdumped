/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SALCMViewingContext.h>

@class NSDate;

@interface SALCMLiveStreamingViewingContext : SALCMViewingContext

@property (nonatomic,copy) NSDate * eventStartTime; 
@property (assign,nonatomic) BOOL watchingLive; 
+(id)liveStreamingViewingContext;
+(id)liveStreamingViewingContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSDate *)eventStartTime;
-(void)setEventStartTime:(NSDate *)arg1 ;
-(BOOL)watchingLive;
-(void)setWatchingLive:(BOOL)arg1 ;
@end

