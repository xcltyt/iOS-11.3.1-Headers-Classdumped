//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet;

@interface ABFeatureManager : NSObject
{
    NSMutableSet *_features;
}

+ (id)defaultManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *features;
- (_Bool)hasFeature:(id)arg1;
- (void)removeFeature:(id)arg1;
- (void)addFeature:(id)arg1;
- (id)init;

@end

