//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSUndoManager.h>

@protocol CbUndoManagerDelegate;

@interface CbUndoManager : NSUndoManager
{
    id <CbUndoManagerDelegate> _cbDelegate;
}

@property(nonatomic) __weak id <CbUndoManagerDelegate> cbDelegate; // @synthesize cbDelegate=_cbDelegate;
- (void).cxx_destruct;
- (_Bool)canRedo;
- (_Bool)canUndo;

@end
