//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BYExpressSetupDataSource.h"

@class NSString, SASProximityInformation;

@interface BYExpressSetupProximityDataSource : NSObject <BYExpressSetupDataSource>
{
    SASProximityInformation *_information;
}

@property(retain, nonatomic) SASProximityInformation *information; // @synthesize information=_information;
- (void).cxx_destruct;
- (id)siriOptIn;
- (id)deviceAnalyticsOptIn;
- (id)appAnalyticsOptIn;
- (_Bool)locationServicesOptIn;
- (id)findMyPhoneOptIn;
- (id)appleID;
- (id)firstName;
- (id)sourceDeviceClass;
- (id)sourceDeviceName;
- (_Bool)dataAvailable;
- (id)initWithInformation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

