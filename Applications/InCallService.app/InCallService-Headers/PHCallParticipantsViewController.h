//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PHCallParticipantsViewDelegate.h"

@class NSMutableArray, NSNumberFormatter, NSString, PHCallParticipantsView, PHContactsClient;

@interface PHCallParticipantsViewController : UIViewController <PHCallParticipantsViewDelegate>
{
    _Bool _handlesCallWaitingCalls;
    _Bool _allowsFieldModeSendButton;
    _Bool _shouldCompressLabelsVertically;
    _Bool _shouldIgnoreUpdates;
    _Bool _shouldInsertSpaceBeforeNextOverrideStringCharacter;
    PHContactsClient *_contactsClient;
    NSNumberFormatter *_numberFormatter;
    PHCallParticipantsView *_participantsView;
    NSMutableArray *_callGroups;
    NSString *_nameOverrideString;
}

@property _Bool shouldInsertSpaceBeforeNextOverrideStringCharacter; // @synthesize shouldInsertSpaceBeforeNextOverrideStringCharacter=_shouldInsertSpaceBeforeNextOverrideStringCharacter;
@property(retain) NSString *nameOverrideString; // @synthesize nameOverrideString=_nameOverrideString;
@property(retain, nonatomic) NSMutableArray *callGroups; // @synthesize callGroups=_callGroups;
@property(retain) PHCallParticipantsView *participantsView; // @synthesize participantsView=_participantsView;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(retain, nonatomic) PHContactsClient *contactsClient; // @synthesize contactsClient=_contactsClient;
@property(nonatomic) _Bool shouldIgnoreUpdates; // @synthesize shouldIgnoreUpdates=_shouldIgnoreUpdates;
@property(nonatomic) _Bool shouldCompressLabelsVertically; // @synthesize shouldCompressLabelsVertically=_shouldCompressLabelsVertically;
@property(nonatomic) _Bool allowsFieldModeSendButton; // @synthesize allowsFieldModeSendButton=_allowsFieldModeSendButton;
@property _Bool handlesCallWaitingCalls; // @synthesize handlesCallWaitingCalls=_handlesCallWaitingCalls;
- (void).cxx_destruct;
- (_Bool)isDeviceCapableOfTelephonyCalls;
- (void)fieldModeSendButtonTappedInParticipantsView:(id)arg1;
- (id)appIconInParticipantsView:(id)arg1;
- (id)fontForParticipantLabelForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;
- (id)colorForStatusLabelForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;
- (_Bool)shouldIgnoreUpdatesInParticipantsView:(id)arg1;
- (id)compactLabelTextForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;
- (void)participantViewInfoButtonTappedAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;
- (void)participantTappedAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;
- (_Bool)shouldShowParticipantImageAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;
- (unsigned short)activityStateForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;
- (id)supplementalParticipantLabelFormatStringAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;
- (_Bool)anyLabelDescriptorIsDynamic;
- (id)labelForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;
- (id)callForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;
- (id)nameForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;
- (id)overrideStringForParticipantsView:(id)arg1;
- (unsigned long long)numberOfParticipantLabels;
- (unsigned long long)numberOfParticipantsForParticipantsView:(id)arg1;
- (_Bool)shouldShowInfoButtonForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;
- (_Bool)shouldShowSingleDurationLabel;
- (_Bool)shouldShowSingleDurationLabelInParticipantsView:(id)arg1;
- (id)contactForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;
- (void)resetNameOverrideString;
- (void)setShouldInsertSpaceBeforeNextOverrideStringCharacter;
- (void)keypadDataSourceChangedNotification:(id)arg1;
- (void)callContinuityChangedNotification:(id)arg1;
- (void)secondTickNotification:(id)arg1;
- (void)displayContextChangedNotification:(id)arg1;
- (void)callModelChangedNotification:(id)arg1;
- (void)isThirdPartyVideoChangedNotification:(id)arg1;
- (void)conferenceParticipantsChangedNotification:(id)arg1;
- (void)callStatusChangedNotification:(id)arg1;
- (void)_updateCallGroups;
- (void)loadView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

