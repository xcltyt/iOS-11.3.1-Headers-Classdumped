/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFAVRoutingControllerObserver.h>

@class ACAccountStore, NSArray, NSHashTable, MPAVRoutingController, NSString;

@interface HFMediaDispatcher : NSObject <HFAVRoutingControllerObserver> {

	ACAccountStore* _appleMusicAccountStore;
	NSArray* _appleMusicMagicAuthCapableAccounts;
	NSHashTable* _appleMusicAccountObservers;
	NSHashTable* _mediaRouteObservers;
	MPAVRoutingController* _routingController;

}

@property (nonatomic,retain) NSHashTable * appleMusicAccountObservers;                //@synthesize appleMusicAccountObservers=_appleMusicAccountObservers - In the implementation block
@property (nonatomic,retain) NSHashTable * mediaRouteObservers;                       //@synthesize mediaRouteObservers=_mediaRouteObservers - In the implementation block
@property (nonatomic,copy) NSArray * appleMusicMagicAuthCapableAccounts;              //@synthesize appleMusicMagicAuthCapableAccounts=_appleMusicMagicAuthCapableAccounts - In the implementation block
@property (nonatomic,retain) MPAVRoutingController * routingController;               //@synthesize routingController=_routingController - In the implementation block
@property (nonatomic,readonly) ACAccountStore * appleMusicAccountStore;               //@synthesize appleMusicAccountStore=_appleMusicAccountStore - In the implementation block
@property (nonatomic,readonly) BOOL isUsingiCloud; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDispatcher;
-(id)init;
-(MPAVRoutingController *)routingController;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2 ;
-(void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2 ;
-(void)routingController:(id)arg1 volumeControlAvailabilityDidChange:(BOOL)arg2 ;
-(void)routingControllerExternalScreenTypeDidChange:(id)arg1 ;
-(void)routingControllerDidPauseFromActiveRouteChange:(id)arg1 ;
-(id)_performStateDump;
-(void)_setupAppleMusicAccountStoreIfNecessary;
-(NSHashTable *)appleMusicAccountObservers;
-(NSHashTable *)mediaRouteObservers;
-(ACAccountStore *)appleMusicAccountStore;
-(NSArray *)appleMusicMagicAuthCapableAccounts;
-(void)setAppleMusicMagicAuthCapableAccounts:(NSArray *)arg1 ;
-(BOOL)_reloadAppleMusicMagicAuthCapableAccounts;
-(void)_accountsStoreWasUpdated:(id)arg1 ;
-(void)addAppleMusicAccountObserver:(id)arg1 ;
-(void)removeAppleMusicAccountObserver:(id)arg1 ;
-(void)addMediaRouteObserver:(id)arg1 ;
-(void)removeMediaRouteObserver:(id)arg1 ;
-(id)mediaRouteForIdentifier:(id)arg1 ;
-(void)setAppleMusicAccountObservers:(NSHashTable *)arg1 ;
-(void)setMediaRouteObservers:(NSHashTable *)arg1 ;
-(void)setRoutingController:(MPAVRoutingController *)arg1 ;
-(BOOL)isUsingiCloud;
@end
