//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BFFSimpleProgressView.h"

@class NSDateComponentsFormatter;

@interface BackupRestoreProgressView : BFFSimpleProgressView
{
    NSDateComponentsFormatter *_durationFormatter;
}

@property(retain) NSDateComponentsFormatter *durationFormatter; // @synthesize durationFormatter=_durationFormatter;
- (void).cxx_destruct;
- (void)setTimeRemainingEstimate:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

