//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbInputMethodSettings.h"

@protocol CbErhuInputMethodSettingsDelegate;

@interface CbErhuInputMethodSettings : CbInputMethodSettings
{
    id <CbErhuInputMethodSettingsDelegate> _erhuSettingsDelegate;
}

+ (id)_nonBasicTypeTrackOrCSTOrSongValueKeys;
+ (id)_songBasedValueKeys;
+ (id)_CSTBasedDefaultValueKeys;
+ (id)_allowedKeys;
@property(nonatomic) id <CbErhuInputMethodSettingsDelegate> erhuSettingsDelegate; // @synthesize erhuSettingsDelegate=_erhuSettingsDelegate;
- (id)_defaultValueForKey:(id)arg1;

@end
