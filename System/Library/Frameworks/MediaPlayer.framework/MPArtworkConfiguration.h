/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ML3ArtworkConfiguration;

@interface MPArtworkConfiguration : NSObject {

	ML3ArtworkConfiguration* _artworkConfiguration;

}

@property (nonatomic,retain) ML3ArtworkConfiguration * artworkConfiguration;              //@synthesize artworkConfiguration=_artworkConfiguration - In the implementation block
+(id)systemConfiguration;
-(id)description;
-(id)supportedSizesForMediaType:(unsigned long long)arg1 artworkType:(long long)arg2 ;
-(void)setArtworkConfiguration:(ML3ArtworkConfiguration *)arg1 ;
-(id)initWithConfigurationDictionaries:(id)arg1 ;
-(ML3ArtworkConfiguration *)artworkConfiguration;
-(id)sizesToAutogenerateForMediaType:(unsigned long long)arg1 artworkType:(long long)arg2 ;
@end
