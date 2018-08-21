//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface BuddyLanguageChangeObserver : NSObject
{
    _Bool _observing;
    id <BuddyLanguageChangeObserverDelegate> _delegate;
    NSTimer *_localeTimer;
}

@property(retain, nonatomic) NSTimer *localeTimer; // @synthesize localeTimer=_localeTimer;
@property(nonatomic, getter=isObserving) _Bool observing; // @synthesize observing=_observing;
@property(nonatomic) __weak id <BuddyLanguageChangeObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)localeDidChange;
- (void)unsubscribeFromLocaleChangeNotification;
- (void)subscribeToLocaleChangeNotification;
- (void)localeTimerFired:(id)arg1;
- (void)startLocaleTimer;
- (void)languageDidChange;
- (void)unsubscribeFromLanguageChangeNotification;
- (void)subscribeToLanguageChangeNotification;
- (void)stopObservingLanguageChanges;
- (void)startObservingLanguageChanges;
- (void)dealloc;

@end

