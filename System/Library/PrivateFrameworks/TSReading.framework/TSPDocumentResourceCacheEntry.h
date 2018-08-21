/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSDate;

@interface TSPDocumentResourceCacheEntry : NSObject {

	BOOL _wasDownloaded;
	NSString* _digestString;
	long long _accessCount;
	NSURL* _URL;
	long long _fileSize;
	NSDate* _contentAccessDate;

}

@property (nonatomic,readonly) NSString * digestString;               //@synthesize digestString=_digestString - In the implementation block
@property (assign,nonatomic) long long accessCount;                   //@synthesize accessCount=_accessCount - In the implementation block
@property (nonatomic,copy) NSURL * URL;                               //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic) long long fileSize;                      //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,retain) NSDate * contentAccessDate;              //@synthesize contentAccessDate=_contentAccessDate - In the implementation block
@property (assign,nonatomic) BOOL wasDownloaded;                      //@synthesize wasDownloaded=_wasDownloaded - In the implementation block
-(id)init;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(long long)fileSize;
-(void)setFileSize:(long long)arg1 ;
-(id)initWithDigestString:(id)arg1 ;
-(void)setContentAccessDate:(NSDate *)arg1 ;
-(void)setWasDownloaded:(BOOL)arg1 ;
-(BOOL)wasDownloaded;
-(long long)accessCount;
-(void)setAccessCount:(long long)arg1 ;
-(NSDate *)contentAccessDate;
-(NSString *)digestString;
@end
