//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMIPDeviceCommand.h"

@interface SaveLocPrefFoundCommand : FMIPDeviceCommand
{
    _Bool _locFoundEnabled;
}

@property(nonatomic) _Bool locFoundEnabled; // @synthesize locFoundEnabled=_locFoundEnabled;
- (id)jsonBodyDictionary;
- (id)path;

@end

