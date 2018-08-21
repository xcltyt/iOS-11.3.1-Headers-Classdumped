//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface _WDGraphSeriesZoomLevelConfigurationManager : NSObject
{
    NSMutableDictionary *_displayTypeIdentifierToConfiguration;
    NSMutableDictionary *_graphSeriesUUIDToConfiguration;
    NSMutableArray *_graphSeriesInOrderAdded;
}

@property(retain, nonatomic) NSMutableArray *graphSeriesInOrderAdded; // @synthesize graphSeriesInOrderAdded=_graphSeriesInOrderAdded;
@property(retain, nonatomic) NSMutableDictionary *graphSeriesUUIDToConfiguration; // @synthesize graphSeriesUUIDToConfiguration=_graphSeriesUUIDToConfiguration;
@property(retain, nonatomic) NSMutableDictionary *displayTypeIdentifierToConfiguration; // @synthesize displayTypeIdentifierToConfiguration=_displayTypeIdentifierToConfiguration;
- (void).cxx_destruct;
- (id)_displayTypeIdentifierForDisplayType:(id)arg1;
- (id)allGraphSeries;
- (id)allDisplayTypes;
- (id)configurationForGraphSeries:(id)arg1;
- (id)configurationForDisplayType:(id)arg1;
- (void)reset;
- (void)removeConfigurationForDisplayType:(id)arg1;
- (void)addConfiguration:(id)arg1;
- (id)init;

@end

