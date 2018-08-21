/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVPlayerItemAccessLog, NSData, NSArray;

@interface MPMovieAccessLog : NSObject <NSCopying> {

	AVPlayerItemAccessLog* _accessLog;

}

@property (nonatomic,readonly) NSData * extendedLogData; 
@property (nonatomic,readonly) unsigned long long extendedLogDataStringEncoding; 
@property (nonatomic,readonly) NSArray * events; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithAVItemAccessLog:(id)arg1 ;
-(NSData *)extendedLogData;
-(unsigned long long)extendedLogDataStringEncoding;
-(NSArray *)events;
@end
