/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFEndSearchFeedback : SFFeedback {

	BOOL _isCanceled;
	NSString* _uuid;
	unsigned long long _cancelSearchEvent;

}

@property (nonatomic,copy) NSString * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL isCanceled;                                   //@synthesize isCanceled=_isCanceled - In the implementation block
@property (assign,nonatomic) unsigned long long cancelSearchEvent;              //@synthesize cancelSearchEvent=_cancelSearchEvent - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(unsigned long long)cancelSearchEvent;
-(void)setCancelSearchEvent:(unsigned long long)arg1 ;
-(id)initWithStartSearch:(id)arg1 ;
-(BOOL)isCanceled;
-(void)setIsCanceled:(BOOL)arg1 ;
@end
