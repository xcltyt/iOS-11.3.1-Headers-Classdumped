//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface RegionPositionCache : NSObject
{
    struct map<TAbsPureClock, RegionPositionCacheEntry, std::__1::less<TAbsPureClock>, std::__1::allocator<std::__1::pair<const TAbsPureClock, RegionPositionCacheEntry>>> *regionMap;
}

- (int)seqIDAtClock:(struct TPureClock)arg1;
- (void)addEntryForRegion:(const struct CRegion *)arg1 song:(struct CSong *)arg2 folderID:(int)arg3;
- (struct TAbsClockRange)clockRangeForRegion:(const struct CRegion *)arg1 song:(struct CSong *)arg2 folderID:(int)arg3;
- (void)clear;
- (void)dealloc;
- (id)init;

@end

