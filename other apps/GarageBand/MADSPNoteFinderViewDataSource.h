//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MADSPViewDataSourceBase.h"

#import "MADSPNoteFinderDataSourceProtocol-Protocol.h"

@interface MADSPNoteFinderViewDataSource : MADSPViewDataSourceBase <MADSPNoteFinderDataSourceProtocol>
{
}

- (void **)getChordDetectedCallbackContextHandle;
- (CDUnknownFunctionPointerType *)getChordDetectedCallbackHandle;
- (long long)maxNoteReportDelay;
- (long long *)getFrameOffsetPointer;
- (struct MADSPEvents *)getReferenceEventsPointer;
- (struct MADSPEvents *)getEventsPointer;
- (void)handleShellNotify:(int)arg1 arguments:(void *)arg2;

@end

