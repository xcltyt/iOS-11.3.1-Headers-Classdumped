//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DfMarkerRegionInfo : NSObject
{
    unsigned int m_cutLeft:1;
    unsigned int m_cutRight:1;
    unsigned int m_needsCopy:1;
    CDStruct_ae571156 m_regionID;
    long long m_startClock;
}

- (void)setNeedsCopy:(_Bool)arg1;
- (_Bool)needsCopy;
- (_Bool)doesOverlapRight;
- (_Bool)doesOverlapLeft;
- (_Bool)doesOverlap;
- (CDStruct_ae571156)regionID;
- (id)initWithRegion:(id)arg1 startClock:(long long)arg2 endClock:(long long)arg3;

@end

