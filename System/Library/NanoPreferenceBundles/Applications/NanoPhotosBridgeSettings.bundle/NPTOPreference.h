/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPhotosBridgeSettings.bundle/NanoPhotosBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NPTOPreference : NSObject {

	NSString* _preferenceKey;
	NSString* _notificationName;

}

@property (nonatomic,retain) NSString * preferenceKey;                 //@synthesize preferenceKey=_preferenceKey - In the implementation block
@property (nonatomic,retain) NSString * notificationName;              //@synthesize notificationName=_notificationName - In the implementation block
+(id)syncedPhotosLimitPreference;
+(id)diskPressureMissingPhotoCountPreference;
+(id)syncedAlbumIdentifierPreference;
-(void)setValue:(id)arg1 ;
-(id)value;
-(void)setPreferenceKey:(NSString *)arg1 ;
-(NSString *)preferenceKey;
-(void)removeValue;
-(id)initWithPreferenceKey:(id)arg1 notificationName:(id)arg2 ;
-(void)_synchronizeAndNotifyObservers;
-(id)changeObserverInQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(NSString *)notificationName;
-(void)setNotificationName:(NSString *)arg1 ;
@end
