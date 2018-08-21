//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VMVoicemailManager;

@interface PHCarPlayVoicemailManager : NSObject
{
    VMVoicemailManager *_voicemailManager;
}

+ (id)sharedVoicemailManager;
@property(retain, nonatomic) VMVoicemailManager *voicemailManager; // @synthesize voicemailManager=_voicemailManager;
- (void).cxx_destruct;
- (id)badgeString;
- (id)voicemailWithID:(unsigned long long)arg1;
- (id)trashedVoicemails;
- (id)voicemails;
- (void)_phoneApplicationAddressBookChangedNotification:(id)arg1;
- (void)subscribedStateChangedNotification:(id)arg1;
- (void)onlineStateChangedNotification:(id)arg1;
- (void)voicemailsChangedNotification:(id)arg1;
- (void)dealloc;
- (id)init;
- (_Bool)isVisualVoicemailAvailable;

@end

