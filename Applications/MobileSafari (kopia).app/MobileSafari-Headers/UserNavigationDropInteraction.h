//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIDropInteraction.h"

#import "UIDropInteractionDelegate.h"
#import "UIDropInteractionDelegate_Private.h"

@class NSString;

@interface UserNavigationDropInteraction : UIDropInteraction <UIDropInteractionDelegate, UIDropInteractionDelegate_Private>
{
    CDUnknownBlockType _navigationHandler;
    _Bool _opensNewTab;
}

- (void).cxx_destruct;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (id)initWithOpensNewTab:(_Bool)arg1 navigationHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

