//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DBLocalEndpoint, NSArray, NSMutableDictionary, NSString;

@interface DBRegistry : NSObject
{
    unsigned int _metadataSequenceNumber;
    _Bool _enableNetwork;
    _Bool _publishing;
    _Bool _readyForFullMetadata;
    NSMutableDictionary *_addressesToPeers;
    NSArray *_peers;
    NSString *_serviceType;
    DBLocalEndpoint *_localEndpoint;
}

+ (_Bool)parseRegistryName:(id)arg1 peerName:(id *)arg2 deviceName:(id *)arg3;
@property(nonatomic) _Bool readyForFullMetadata; // @synthesize readyForFullMetadata=_readyForFullMetadata;
@property(nonatomic) _Bool publishing; // @synthesize publishing=_publishing;
@property(nonatomic) _Bool enableNetwork; // @synthesize enableNetwork=_enableNetwork;
@property(retain, nonatomic) DBLocalEndpoint *localEndpoint; // @synthesize localEndpoint=_localEndpoint;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(retain) NSArray *peers; // @synthesize peers=_peers;
@property(retain, nonatomic) NSMutableDictionary *addressesToPeers; // @synthesize addressesToPeers=_addressesToPeers;
- (void).cxx_destruct;
- (id)updateOrCreatePeerFromPeerProperties:(id)arg1;
- (void)reportPeerAppeared:(id)arg1;
- (void)reportPeerDisappeared:(id)arg1;
- (id)metadataDictionaryFromDictionary:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillBecomeActive:(id)arg1;
- (void)applicationWillEnterBackground:(id)arg1;
- (id)audiobusPeer;
- (id)peerMatchingID:(id)arg1;
- (id)peerMatchingAddress:(id)arg1;
- (id)initWithServiceType:(id)arg1 localEndpoint:(id)arg2;

@end
