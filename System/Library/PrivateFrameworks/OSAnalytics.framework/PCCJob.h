/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OSALog, NSError, NSString, NSDictionary, NSDate;

@interface PCCJob : NSObject {

	OSALog* _package;
	NSError* _errObj;
	NSString* _jid;
	NSString* _target;
	NSDictionary* _options;
	NSDictionary* _metadata;
	NSDate* _lastTouch;

}

@property (readonly) NSString * jid;                       //@synthesize jid=_jid - In the implementation block
@property (readonly) NSString * target;                    //@synthesize target=_target - In the implementation block
@property (readonly) NSDictionary * options;               //@synthesize options=_options - In the implementation block
@property (readonly) NSString * nextFilepath; 
@property (readonly) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (readonly) id result; 
@property (readonly) NSDate * lastTouch;                   //@synthesize lastTouch=_lastTouch - In the implementation block
-(id)description;
-(NSString *)target;
-(NSDate *)lastTouch;
-(NSDictionary *)options;
-(id)result;
-(NSDictionary *)metadata;
-(id)initWithID:(id)arg1 forTarget:(id)arg2 options:(id)arg3 ;
-(void)packageLog:(id)arg1 forRouting:(id)arg2 info:(id)arg3 options:(id)arg4 ;
-(NSString *)nextFilepath;
-(id)initWithID:(id)arg1 forTarget:(id)arg2 options:(id)arg3 forFile:(id)arg4 ;
-(void)registerResult:(BOOL)arg1 error:(id)arg2 ;
-(NSString *)jid;
@end
