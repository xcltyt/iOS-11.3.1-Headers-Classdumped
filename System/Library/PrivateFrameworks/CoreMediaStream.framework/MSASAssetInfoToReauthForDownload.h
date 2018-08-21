/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MSAsset, MSASAlbum;

@interface MSASAssetInfoToReauthForDownload : NSObject {

	MSAsset* _asset;
	MSASAlbum* _album;

}

@property (nonatomic,retain) MSAsset * asset;                //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) MSASAlbum * album;              //@synthesize album=_album - In the implementation block
-(MSAsset *)asset;
-(void)setAsset:(MSAsset *)arg1 ;
-(MSASAlbum *)album;
-(void)setAlbum:(MSASAlbum *)arg1 ;
@end
