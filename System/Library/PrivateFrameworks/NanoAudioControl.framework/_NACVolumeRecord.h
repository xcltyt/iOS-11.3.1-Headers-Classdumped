/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet;

@interface _NACVolumeRecord : NSObject <NSSecureCoding> {

	NSMutableSet* _observers;
	BOOL _volumeControlAvailable;
	BOOL _volumeWarningEnabled;
	BOOL _muted;
	float _volumeValue;
	float _EUVolumeLimit;

}

@property (assign,nonatomic) float volumeValue;                                                        //@synthesize volumeValue=_volumeValue - In the implementation block
@property (assign,getter=isVolumeControlAvailable,nonatomic) BOOL volumeControlAvailable;              //@synthesize volumeControlAvailable=_volumeControlAvailable - In the implementation block
@property (assign,getter=isVolumeWarningEnabled,nonatomic) BOOL volumeWarningEnabled;                  //@synthesize volumeWarningEnabled=_volumeWarningEnabled - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                                //@synthesize muted=_muted - In the implementation block
@property (assign,nonatomic) float EUVolumeLimit;                                                      //@synthesize EUVolumeLimit=_EUVolumeLimit - In the implementation block
@property (nonatomic,readonly) NSMutableSet * observers; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSMutableSet *)observers;
-(void)setVolumeControlAvailable:(BOOL)arg1 ;
-(float)volumeValue;
-(BOOL)isVolumeControlAvailable;
-(void)setVolumeValue:(float)arg1 ;
-(float)EUVolumeLimit;
-(void)setEUVolumeLimit:(float)arg1 ;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(void)setVolumeWarningEnabled:(BOOL)arg1 ;
-(BOOL)isVolumeWarningEnabled;
@end
