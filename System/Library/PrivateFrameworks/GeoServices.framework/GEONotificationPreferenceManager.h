/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface GEONotificationPreferenceManager : NSObject {

	NSMutableDictionary* _enableFlags;

}
+(id)sharedManager;
-(BOOL)isEnabledForSubTestWithName:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 forSubTestWithName:(id)arg2 ;
-(id)init;
-(void)reset;
@end
