/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/MPMediaControlsClientController.h>

@protocol MPMediaControlsClientController;
@class NSString;

@interface MPMediaControlsRemoteViewController : _UIRemoteViewController <MPMediaControlsClientController> {

	id<MPMediaControlsClientController> _hostViewController;

}

@property (assign,nonatomic,__weak) id<MPMediaControlsClientController> hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)dismiss;
-(void)setHostViewController:(id<MPMediaControlsClientController>)arg1 ;
-(void)didReceiveInteraction;
-(void)didSelectRoute:(id)arg1 ;
-(id<MPMediaControlsClientController>)hostViewController;
@end
