/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol HFMediaValueSource <NSObject>
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfile; 
@property (nonatomic,readonly) BOOL hasPendingWrites; 
@property (nonatomic,readonly) NSError * cachedPlaybackStateWriteError; 
@required
-(long long)lastPlaybackStateForProfile;
-(id)writePlaybackState:(long long)arg1;
-(BOOL)hasPendingWrites;
-(NSError *)cachedPlaybackStateWriteError;
-(id<HFMediaProfileContainer>)mediaProfile;

@end
