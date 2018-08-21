/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class NSString, NSArray, MPIdentifierSet;

@interface MPGenericTracklistPlaybackQueue : MPRemotePlaybackQueue {

	NSString* _firstTrackIdentifier;
	NSArray* _trackIdentifiers;
	long long _shuffleType;
	long long _repeatType;
	MPIdentifierSet* _collectionIdentifierSet;

}

@property (nonatomic,readonly) NSString * firstTrackIdentifier;                        //@synthesize firstTrackIdentifier=_firstTrackIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * trackIdentifiers;                             //@synthesize trackIdentifiers=_trackIdentifiers - In the implementation block
@property (nonatomic,readonly) long long shuffleType;                                  //@synthesize shuffleType=_shuffleType - In the implementation block
@property (nonatomic,readonly) long long repeatType;                                   //@synthesize repeatType=_repeatType - In the implementation block
@property (nonatomic,readonly) MPIdentifierSet * collectionIdentifierSet;              //@synthesize collectionIdentifierSet=_collectionIdentifierSet - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(long long)repeatType;
-(long long)shuffleType;
-(id)initWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 ;
-(BOOL)verifyWithError:(id*)arg1 ;
-(NSArray *)trackIdentifiers;
-(NSString *)firstTrackIdentifier;
-(MPIdentifierSet *)collectionIdentifierSet;
@end
