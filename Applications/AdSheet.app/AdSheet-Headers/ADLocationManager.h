//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocation, CLLocationManager, NSLock, NSObject<OS_dispatch_queue>, NSString;

@interface ADLocationManager : NSObject <CLLocationManagerDelegate>
{
    _Bool _locationServicesEnabled;
    _Bool _isUpdatingLocation;
    int _authorizationStatus;
    CLLocation *_location;
    NSLock *_statusLock;
    CLLocation *_previousLocation;
    CLLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_queue;
    double _requestedLocationAccuracy;
}

+ (id)sharedManager;
@property(nonatomic) double requestedLocationAccuracy; // @synthesize requestedLocationAccuracy=_requestedLocationAccuracy;
@property(nonatomic) _Bool isUpdatingLocation; // @synthesize isUpdatingLocation=_isUpdatingLocation;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(copy, nonatomic) CLLocation *previousLocation; // @synthesize previousLocation=_previousLocation;
@property(retain, nonatomic) NSLock *statusLock; // @synthesize statusLock=_statusLock;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)updateAuthorizationStatus;
- (void)_stopUpdatingLocation;
- (void)_startUpdatingLocation;
- (double)_updateInterval;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) int authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property(nonatomic) _Bool locationServicesEnabled; // @synthesize locationServicesEnabled=_locationServicesEnabled;
- (_Bool)_locationRequiresUpdate;
- (void)_considerRefreshingLocation;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

