/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/StoreKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSURL, NSError;

@interface SKDownloadChangeset : NSObject <NSCopying> {

	NSNumber* _contentLength;
	NSURL* _contentURL;
	NSNumber* _downloadID;
	NSNumber* _downloadState;
	NSError* _error;
	NSNumber* _progress;
	NSNumber* _timeRemaining;

}

@property (nonatomic,copy) NSNumber * contentLength;              //@synthesize contentLength=_contentLength - In the implementation block
@property (nonatomic,copy) NSURL * contentURL;                    //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy) NSNumber * downloadID;                 //@synthesize downloadID=_downloadID - In the implementation block
@property (nonatomic,copy) NSNumber * downloadState;              //@synthesize downloadState=_downloadState - In the implementation block
@property (nonatomic,copy) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSNumber * progress;                   //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) NSNumber * timeRemaining;              //@synthesize timeRemaining=_timeRemaining - In the implementation block
+(id)changesetWithDownloadID:(id)arg1 state:(long long)arg2 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSNumber *)contentLength;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProgress:(NSNumber *)arg1 ;
-(NSNumber *)progress;
-(NSNumber *)downloadID;
-(NSNumber *)timeRemaining;
-(void)setTimeRemaining:(NSNumber *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setDownloadID:(NSNumber *)arg1 ;
-(NSURL *)contentURL;
-(void)setContentURL:(NSURL *)arg1 ;
-(void)setContentLength:(NSNumber *)arg1 ;
-(void)setDownloadState:(NSNumber *)arg1 ;
-(NSNumber *)downloadState;
@end
