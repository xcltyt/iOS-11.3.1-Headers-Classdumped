/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MPAVItem, NSString, NSData;

@interface MPPlaybackContext : NSObject <NSSecureCoding> {

	MPAVItem* _playerCurrentItem;
	BOOL _shouldStartPlayback;
	BOOL _requireFinalTracklist;
	BOOL _shouldRestartPlayback;
	long long _startIndex;
	long long _shuffleType;
	long long _repeatType;
	NSString* _playActivityFeatureName;
	NSData* _playActivityRecommendationData;
	NSString* _siriAssetInfo;
	NSString* _siriReferenceIdentifier;

}

@property (nonatomic,retain) MPAVItem * playerCurrentItem; 
@property (assign,nonatomic) long long startIndex;                               //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) BOOL shouldStartPlayback;                           //@synthesize shouldStartPlayback=_shouldStartPlayback - In the implementation block
@property (assign,nonatomic) BOOL requireFinalTracklist;                         //@synthesize requireFinalTracklist=_requireFinalTracklist - In the implementation block
@property (assign,nonatomic) BOOL shouldRestartPlayback;                         //@synthesize shouldRestartPlayback=_shouldRestartPlayback - In the implementation block
@property (assign,nonatomic) long long shuffleType;                              //@synthesize shuffleType=_shuffleType - In the implementation block
@property (assign,nonatomic) long long repeatType;                               //@synthesize repeatType=_repeatType - In the implementation block
@property (nonatomic,copy) NSString * playActivityFeatureName;                   //@synthesize playActivityFeatureName=_playActivityFeatureName - In the implementation block
@property (nonatomic,copy) NSData * playActivityRecommendationData;              //@synthesize playActivityRecommendationData=_playActivityRecommendationData - In the implementation block
@property (nonatomic,copy) NSString * siriAssetInfo;                             //@synthesize siriAssetInfo=_siriAssetInfo - In the implementation block
@property (nonatomic,copy) NSString * siriReferenceIdentifier;                   //@synthesize siriReferenceIdentifier=_siriReferenceIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)queueFeederClass;
-(long long)startIndex;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setShouldStartPlayback:(BOOL)arg1 ;
-(NSString *)siriReferenceIdentifier;
-(long long)repeatType;
-(long long)shuffleType;
-(NSString *)playActivityFeatureName;
-(void)setPlayActivityFeatureName:(NSString *)arg1 ;
-(NSData *)playActivityRecommendationData;
-(void)setPlayActivityRecommendationData:(NSData *)arg1 ;
-(void)setSiriReferenceIdentifier:(NSString *)arg1 ;
-(void)setRepeatType:(long long)arg1 ;
-(void)setShuffleType:(long long)arg1 ;
-(BOOL)shouldStartPlayback;
-(void)setPlayerCurrentItem:(MPAVItem *)arg1 ;
-(BOOL)shouldRestartPlayback;
-(id)descriptionComponents;
-(NSString *)siriAssetInfo;
-(BOOL)requireFinalTracklist;
-(void)setRequireFinalTracklist:(BOOL)arg1 ;
-(void)setShouldRestartPlayback:(BOOL)arg1 ;
-(void)setSiriAssetInfo:(NSString *)arg1 ;
-(MPAVItem *)playerCurrentItem;
-(void)setStartIndex:(long long)arg1 ;
@end
