/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol CRCarPlayPreferencesDelegate;
@class NSString;

@interface CRCarPlayPreferences : NSObject <MCProfileConnectionObserver> {

	BOOL _cachedCarPlayAllowed;
	id<CRCarPlayPreferencesDelegate> _preferencesDelegate;

}

@property (assign,nonatomic) BOOL cachedCarPlayAllowed;                                                //@synthesize cachedCarPlayAllowed=_cachedCarPlayAllowed - In the implementation block
@property (assign,nonatomic,__weak) id<CRCarPlayPreferencesDelegate> preferencesDelegate;              //@synthesize preferencesDelegate=_preferencesDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)isWirelessCarPlayEnabled;
-(void)handleAssistantLanguageChanged:(id)arg1 ;
-(void)handleAssistantPreferencesChanged:(id)arg1 ;
-(BOOL)_isCarPlayAllowed;
-(void)setCachedCarPlayAllowed:(BOOL)arg1 ;
-(BOOL)cachedCarPlayAllowed;
-(void)_updateCarPlayAllowed;
-(id<CRCarPlayPreferencesDelegate>)preferencesDelegate;
-(void)setPreferencesDelegate:(id<CRCarPlayPreferencesDelegate>)arg1 ;
-(BOOL)isCarPlayAllowed;
-(BOOL)isCarPlayCapable;
@end
