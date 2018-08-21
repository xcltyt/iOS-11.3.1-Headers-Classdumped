/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/VideoSubscriberAccountDeveloperSettings.bundle/VideoSubscriberAccountDeveloperSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class VSIdentityProvider;


@protocol VSDeveloperIdentityProviderViewController <NSObject>
@property (nonatomic,copy) VSIdentityProvider * identityProvider; 
@property (assign,nonatomic) long long editingMode; 
@property (assign,nonatomic,__weak) id<VSDeveloperIdentityProviderViewControllerDelegate> delegate; 
@required
-(void)setEditingMode:(long long)arg1;
-(id<VSDeveloperIdentityProviderViewControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(long long)editingMode;
-(VSIdentityProvider *)identityProvider;
-(void)setIdentityProvider:(id)arg1;

@end
