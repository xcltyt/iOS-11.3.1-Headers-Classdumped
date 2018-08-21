/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _MPCModelRadioPlaybackQueueSection <NSObject>
@property (nonatomic,readonly) long long numberOfItems; 
@required
-(long long)numberOfItems;
-(id)AVItemAtIndex:(long long)arg1;
-(id)AVItemQueueIdentifierAtIndex:(long long)arg1;
-(BOOL)isExplicitItemAtIndex:(long long)arg1;
-(id)trackForItemAtIndex:(long long)arg1;
-(long long)removeExplicitItems;

@end
