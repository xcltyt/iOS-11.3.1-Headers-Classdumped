/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaControls/MediaControlsEndpointController.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>

@class MPAVRoutingController, NSString;

@interface MediaControlsStandaloneEndpointController : MediaControlsEndpointController <MPAVRoutingControllerDelegate> {

	MPAVRoutingController* _routingController;

}

@property (nonatomic,readonly) MPAVRoutingController * routingController;              //@synthesize routingController=_routingController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEndpoint:(id)arg1 ;
-(MPAVRoutingController *)routingController;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)setAutomaticResponseLoading:(BOOL)arg1 ;
@end
