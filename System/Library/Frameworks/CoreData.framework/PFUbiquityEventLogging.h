/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface PFUbiquityEventLogging : NSObject {

	NSMutableSet* _logEvents;
	long long _logLevel;

}

@property (assign) long long logLevel;              //@synthesize logLevel=_logLevel - In the implementation block
+(id)sharedEventLogger;
+(void)initialize;
-(void)logEvent:(id)arg1 ID:(id)arg2 message:(id)arg3 ;
-(id)createEventTrackingID:(int)arg1 ;
-(id)createCustomEventTrackingID:(id)arg1 ;
-(void)beginEvent:(id)arg1 ;
-(void)logEventData:(id)arg1 message:(id)arg2 ;
-(void)diagnostic:(id)arg1 message:(id)arg2 ;
-(void)debug:(id)arg1 message:(id)arg2 ;
-(void)info:(id)arg1 message:(id)arg2 ;
-(void)warning:(id)arg1 message:(id)arg2 ;
-(void)error:(id)arg1 message:(id)arg2 ;
-(void)fatal:(id)arg1 message:(id)arg2 ;
-(void)endEvent:(id)arg1 ;
-(id)incompleteEvents;
-(id)init;
-(void)dealloc;
-(long long)logLevel;
-(void)setLogLevel:(long long)arg1 ;
@end
