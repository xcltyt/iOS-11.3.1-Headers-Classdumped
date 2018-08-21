/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVRoutingController.h>

@class AVAudioSession, NSString, AVAudioSessionPortDescription, MPAVRoute, NSArray;

@interface RCAudioSessionRoutingMPAVRoutingController : MPAVRoutingController {

	AVAudioSession* _audioSession;
	NSString* _audioSessionCategory;
	unsigned long long _audioSessionCategoryOptions;
	BOOL _hasCategoryEverBeenActive;
	AVAudioSessionPortDescription* _cachedPickedInputRoutePortDescription;
	MPAVRoute* _cachedPickedOutputRoute;
	NSArray* _cachedPickableOutputRoutes;

}

@property (nonatomic,readonly) AVAudioSessionPortDescription * cachedPickedInputRoutePortDescription;              //@synthesize cachedPickedInputRoutePortDescription=_cachedPickedInputRoutePortDescription - In the implementation block
@property (nonatomic,readonly) MPAVRoute * cachedPickedOutputRoute;                                                //@synthesize cachedPickedOutputRoute=_cachedPickedOutputRoute - In the implementation block
@property (nonatomic,readonly) NSArray * cachedPickableOutputRoutes;                                               //@synthesize cachedPickableOutputRoutes=_cachedPickableOutputRoutes - In the implementation block
@property (nonatomic,readonly) BOOL hasCategoryEverBeenActive;                                                     //@synthesize hasCategoryEverBeenActive=_hasCategoryEverBeenActive - In the implementation block
@property (nonatomic,readonly) BOOL isRoutingToAirPlayMirrorDestination; 
@property (nonatomic,readonly) BOOL isRoutingToPhoneCall; 
@property (nonatomic,readonly) BOOL isAudioSessionAppropriateForQueryingRoutes; 
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)initWithName:(id)arg1 ;
-(BOOL)routeOtherThanHandsetAndSpeakerAvailable;
-(void)fetchAvailableRoutesWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isRoutingToPhoneCall;
-(BOOL)makeAudioSessionCategoryActive:(BOOL)arg1 ;
-(BOOL)hasCategoryEverBeenActive;
-(long long)outputRouteTypeForNavigationIcon;
-(MPAVRoute *)cachedPickedOutputRoute;
-(AVAudioSessionPortDescription *)cachedPickedInputRoutePortDescription;
-(BOOL)isAudioSessionAppropriateForQueryingRoutes;
-(NSArray *)cachedPickableOutputRoutes;
-(BOOL)isRoutingToAirPlayMirrorDestination;
-(void)audioSessionInterruptionNotification:(id)arg1 ;
-(void)audioSessionRouteChangeNotification:(id)arg1 ;
-(id)_rcDelegate;
-(long long)_outputRouteFromAudioSession;
-(void)_updateHasCategoryEverBeenActive;
@end
