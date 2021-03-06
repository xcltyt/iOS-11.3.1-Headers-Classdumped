//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MAVeEvent, NSMutableDictionary;

@protocol MAVeGraphActionElementProtocol <NSObject>
- (NSMutableDictionary *)actionInfoForPoint:(struct CGPoint)arg1 event:(MAVeEvent *)arg2;

@optional
- (void)actionExited:(struct CGPoint)arg1 event:(MAVeEvent *)arg2;
- (void)actionMoved:(struct CGPoint)arg1 event:(MAVeEvent *)arg2;
- (void)actionEntered:(struct CGPoint)arg1 event:(MAVeEvent *)arg2;
- (void)actionUp:(struct CGPoint)arg1 event:(MAVeEvent *)arg2;
- (void)actionDragged:(struct CGPoint)arg1 event:(MAVeEvent *)arg2;
- (void)actionDown:(struct CGPoint)arg1 event:(MAVeEvent *)arg2;
@end

