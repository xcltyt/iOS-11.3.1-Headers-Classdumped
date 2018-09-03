//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface GADAudioSession : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    _Bool _audioSessionStateSaved;
    NSString *_savedAudioSessionCategory;
    NSString *_savedAudioSessionMode;
    unsigned long long _savedAudioSessionCategoryOption;
    _Bool _enabled;
    _Bool _wasOtherAppAudioInterrupted;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)resumeBackgroundAppAudioIfInterrupted;
- (void)setMixable:(_Bool)arg1;
- (void)restoreState;
- (void)disable;
- (void)enable;
- (id)init;

@end
