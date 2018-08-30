//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface MAVeEvent : NSObject
{
    _Bool _canHaveModifiers;
    _Bool _fineAdjustmentModifier;
    int _type;
    int _gestureState;
    int _direction;
    unsigned long long _activityCount;
    double _timestamp;
    NSMutableArray *_additionalEvents;
    unsigned long long _eventID;
    double _deltaY;
    double _deltaX;
    double _rotation;
    double _scale;
    double _velocity;
    struct CGPoint _location;
    struct CGPoint _previousLocation;
    struct CGPoint _startLocation;
}

@property(nonatomic) int direction; // @synthesize direction=_direction;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) int gestureState; // @synthesize gestureState=_gestureState;
@property(nonatomic) struct CGPoint startLocation; // @synthesize startLocation=_startLocation;
@property(nonatomic) _Bool fineAdjustmentModifier; // @synthesize fineAdjustmentModifier=_fineAdjustmentModifier;
@property(nonatomic) _Bool canHaveModifiers; // @synthesize canHaveModifiers=_canHaveModifiers;
@property(nonatomic) double deltaX; // @synthesize deltaX=_deltaX;
@property(nonatomic) double deltaY; // @synthesize deltaY=_deltaY;
@property(nonatomic) unsigned long long eventID; // @synthesize eventID=_eventID;
@property(retain, nonatomic) NSMutableArray *additionalEvents; // @synthesize additionalEvents=_additionalEvents;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned long long activityCount; // @synthesize activityCount=_activityCount;
@property(nonatomic) struct CGPoint previousLocation; // @synthesize previousLocation=_previousLocation;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)addEvent:(id)arg1;
@property(readonly, nonatomic) _Bool hasAdditionalEvents;
- (void)dealloc;
- (id)init;

@end

