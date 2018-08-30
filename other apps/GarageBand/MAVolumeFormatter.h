//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@interface MAVolumeFormatter : NSFormatter
{
    _Bool _usesCondensedFormat;
}

+ (id)stringForDBValue:(double)arg1 condensed:(_Bool)arg2 showsUnits:(_Bool)arg3;
@property(nonatomic) _Bool usesCondensedFormat; // @synthesize usesCondensedFormat=_usesCondensedFormat;
- (double)dbValueForString:(id)arg1;
- (double)dbValueForString:(id)arg1 min:(double)arg2 max:(double)arg3;
- (id)editingStringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)stringForObjectValue:(id)arg1 condensed:(_Bool)arg2 showsUnits:(_Bool)arg3;
- (long long)inverseValueTransform:(double)arg1;
- (double)valueTransform:(long long)arg1;

@end

