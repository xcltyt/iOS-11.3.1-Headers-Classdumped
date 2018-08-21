/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/TVAppBundles/VideoSubscriberAccountTVApp.bundle/VideoSubscriberAccountTVApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSSetupFlowControllerDelegate <NSObject>
@required
-(void)setupFlowControllerDidStartLoading:(id)arg1;
-(void)setupFlowController:(id)arg1 offerAuthenticationWithSupportedAppsButton:(BOOL)arg2;
-(void)setupFlowController:(id)arg1 offerAuthenticationForProvider:(id)arg2 withSupportedAppsButton:(BOOL)arg3;
-(void)setupFlowController:(id)arg1 pickProviderWithViewController:(id)arg2;
-(void)setupFlowController:(id)arg1 requestAccessWithViewController:(id)arg2;
-(void)setupFlowController:(id)arg1 presentViewController:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setupFlowController:(id)arg1 dismissViewController:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setupFlowControllerDidFinish:(id)arg1;
-(void)setupFlowController:(id)arg1 authenticateProviderWithViewController:(id)arg2;

@end
