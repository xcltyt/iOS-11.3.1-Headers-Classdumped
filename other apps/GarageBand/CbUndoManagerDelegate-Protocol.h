//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CbUndoManager;

@protocol CbUndoManagerDelegate <NSObject>

@optional
- (_Bool)cbUndoManagerShouldCanRedo:(CbUndoManager *)arg1 originalFlag:(_Bool)arg2;
- (_Bool)cbUndoManagerShouldCanUndo:(CbUndoManager *)arg1 originalFlag:(_Bool)arg2;
@end
