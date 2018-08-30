//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MAMetroAnalysisDataSource : NSObject
{
    struct MetroAnalysisDataSource *_realDataSource;
    _Bool _deleteRealDataSource;
}

@property(readonly, nonatomic) struct MetroAnalysisDataSource *internalDataSource; // @synthesize internalDataSource=_realDataSource;
@property(readonly, nonatomic) float frameRate;
@property(readonly, nonatomic) int numChannels;
@property(readonly, nonatomic) long long numFrames;
- (void)readFrom:(long long)arg1 to:(long long)arg2 intoBuffer:(float *)arg3;
- (void)dealloc;
- (id)initWithRealDataSourceNoCopy:(struct MetroAnalysisDataSource *)arg1 deleteWhenFinished:(_Bool)arg2;
- (id)initWithURLs:(id)arg1 startFrames:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

