//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray;

@protocol MADSPPedalBoardDataSource
- (long long)maxFaderIDsPerStompbox;
- (long long)stompBoxIndexForFaderID:(long long)arg1;
- (long long)firstFaderIDOfStompBoxAtIndex:(unsigned long long)arg1;
- (int)typeOfStompBoxAtIndex:(unsigned long long)arg1;
- (NSArray *)stompBoxTypes;
- (struct MADSPUserPlugIn *)plugIn;
- (id)editorForStompBoxAtIndex:(unsigned long long)arg1;
- (void)bypass:(_Bool)arg1;
@end
