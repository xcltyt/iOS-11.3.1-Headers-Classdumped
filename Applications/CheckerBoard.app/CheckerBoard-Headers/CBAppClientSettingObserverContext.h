//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSSceneTransitionContext, FBScene, UIApplicationSceneClientSettings, UIApplicationSceneSettings;

@interface CBAppClientSettingObserverContext : NSObject
{
    FBScene *_scene;
    UIApplicationSceneSettings *_settings;
    UIApplicationSceneClientSettings *_oldClientSettings;
    UIApplicationSceneClientSettings *_updatedClientSettings;
    FBSSceneTransitionContext *_transition;
}

@property(retain, nonatomic) FBSSceneTransitionContext *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) UIApplicationSceneClientSettings *updatedClientSettings; // @synthesize updatedClientSettings=_updatedClientSettings;
@property(retain, nonatomic) UIApplicationSceneClientSettings *oldClientSettings; // @synthesize oldClientSettings=_oldClientSettings;
@property(retain, nonatomic) UIApplicationSceneSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) FBScene *scene; // @synthesize scene=_scene;
- (void).cxx_destruct;

@end

