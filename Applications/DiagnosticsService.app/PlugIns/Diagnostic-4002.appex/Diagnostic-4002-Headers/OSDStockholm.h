//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NFContactlessSessionDelegate.h"

@class NFContactlessSession, NSObject<NFSession>, NSObject<OSDStockholmDelegate>, NSObject<OS_dispatch_semaphore>, NSString;

@interface OSDStockholm : NSObject <NFContactlessSessionDelegate>
{
    NSObject<OS_dispatch_semaphore> *_start_timeout_sema;
    NSObject<OSDStockholmDelegate> *_delegate;
    NSObject<NFSession> *_sessionController;
    NFContactlessSession *_contactlessSession;
}

@property(retain, nonatomic) NFContactlessSession *contactlessSession; // @synthesize contactlessSession=_contactlessSession;
@property(retain, nonatomic) NSObject<NFSession> *sessionController; // @synthesize sessionController=_sessionController;
@property(nonatomic) __weak NSObject<OSDStockholmDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)contactlessSession:(id)arg1 didSelectApplet:(id)arg2;
- (void)contactlessSessionDidEndUnexpectedly:(id)arg1;
- (void)contactlessSession:(id)arg1 didDetectField:(_Bool)arg2;
- (id)_appletAID;
- (id)serialNumber;
- (id)serverRegistrationInfo;
- (void)stopCardEmulation;
- (_Bool)startCardEmulationWithTimeout:(double)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

