/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSIdentityProviderViewControllerDelegate <NSObject>
@optional
-(void)identityProviderViewControllerDidFinishLoading:(id)arg1;
-(void)identityProviderViewController:(id)arg1 didAuthenticateAccount:(id)arg2 forRequest:(id)arg3;

@required
-(void)dismissIdentityProviderViewController:(id)arg1;
-(void)identityProviderViewControllerDidCancel:(id)arg1;
-(void)identityProviderViewController:(id)arg1 didFinishRequest:(id)arg2 withResult:(id)arg3;

@end
