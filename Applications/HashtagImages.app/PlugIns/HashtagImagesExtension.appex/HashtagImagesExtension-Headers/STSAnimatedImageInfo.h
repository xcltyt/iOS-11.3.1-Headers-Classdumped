//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface STSAnimatedImageInfo : NSObject
{
    NSArray *_frames;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSArray *frames; // @synthesize frames=_frames;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize size;

@end

