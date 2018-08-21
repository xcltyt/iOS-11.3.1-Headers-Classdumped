/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVPlayerItem;

@interface _NUAVPlayerItemObservation : NSObject {

	BOOL _registeredKVO;
	AVPlayerItem* _playerItem;

}

@property (nonatomic,retain) AVPlayerItem * playerItem;              //@synthesize playerItem=_playerItem - In the implementation block
@property (assign,nonatomic) BOOL registeredKVO;                     //@synthesize registeredKVO=_registeredKVO - In the implementation block
-(BOOL)registeredKVO;
-(void)setRegisteredKVO:(BOOL)arg1 ;
-(AVPlayerItem *)playerItem;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
@end
