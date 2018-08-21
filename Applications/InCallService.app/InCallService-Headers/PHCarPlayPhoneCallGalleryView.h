//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MPCarPlayPhoneCallContainerDataSource.h"
#import "MPCarPlayPhoneCallContainerDelegate.h"

@class NSString, PHCarPlayPhoneCallContainer;

@interface PHCarPlayPhoneCallGalleryView : UIView <MPCarPlayPhoneCallContainerDataSource, MPCarPlayPhoneCallContainerDelegate>
{
    id <MPCarPlayPhoneCallGalleryViewDelegate> _delegate;
    PHCarPlayPhoneCallContainer *_container;
}

@property(retain) PHCarPlayPhoneCallContainer *container; // @synthesize container=_container;
@property id <MPCarPlayPhoneCallGalleryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)phoneCallDataDidChange:(id)arg1;
- (void)setIsShowingCallFailure:(_Bool)arg1;
- (void)endPhoneCall:(id)arg1 animated:(_Bool)arg2;
- (void)mergePrimaryPhoneCallsAnimated:(_Bool)arg1;
- (void)addPrimaryPhoneCall:(id)arg1 animated:(_Bool)arg2;
- (id)phoneCallForIndex:(unsigned long long)arg1 isMerged:(_Bool *)arg2;
- (id)mergedStringForMergedCalls;
- (void)phoneCallContainer:(id)arg1 phoneCallViewTappedAtIndex:(unsigned long long)arg2;
- (_Bool)phoneCallContainer:(id)arg1 cellIsDimmedAtIndex:(unsigned long long)arg2;
- (id)phoneCallContainer:(id)arg1 subtitleForViewCellAtIndex:(unsigned long long)arg2;
- (id)phoneCallContainer:(id)arg1 titleForViewCellAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfViewCellsForPhoneCallContainer:(id)arg1;
- (void)reloadPhoneCallData;
- (id)primaryCalls;
- (id)mergedCalls;
- (void)stopListeningForCallNotifications;
- (void)startListeningForCallNotifications;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

