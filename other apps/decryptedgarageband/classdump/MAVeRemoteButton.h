//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAVeButton.h"

@class MAVeElementBase, NSString;

@interface MAVeRemoteButton : MAVeButton
{
    double _presetValue;
    MAVeElementBase *_slaveObject;
    NSString *_slaveValueID;
}

@property(nonatomic) NSString *slaveValueID; // @synthesize slaveValueID=_slaveValueID;
@property(retain, nonatomic) MAVeElementBase *slaveObject; // @synthesize slaveObject=_slaveObject;
@property(nonatomic) double presetValue; // @synthesize presetValue=_presetValue;
- (void).cxx_destruct;
- (void)upEvent:(id)arg1;
- (void)downEvent:(id)arg1;
- (void)setOn:(_Bool)arg1;
- (_Bool)on;
- (id)init;

@end

