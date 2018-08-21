/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MTPBAlarm : PBCodable <NSCopying> {

	double _bedtimeForSleepTracking;
	double _bedtimeSnoozeFire;
	double _dismissed;
	double _fired;
	double _lastModified;
	double _mediaID;
	double _snoozeFire;
	unsigned _active;
	NSString* _alarmID;
	unsigned _bedtimeHour;
	unsigned _bedtimeMinute;
	unsigned _bedtimeReminderMinutes;
	unsigned _daySetting;
	unsigned _hour;
	unsigned _minute;
	unsigned _revision;
	unsigned _soundType;
	float _soundVolume;
	NSString* _title;
	NSString* _toneID;
	NSString* _vibeID;
	BOOL _allowsSnooze;
	BOOL _isEnabled;
	BOOL _isSleepAlarm;
	SCD_Struct_MT1 _has;

}

@property (nonatomic,retain) NSString * alarmID;                           //@synthesize alarmID=_alarmID - In the implementation block
@property (assign,nonatomic) unsigned hour;                                //@synthesize hour=_hour - In the implementation block
@property (assign,nonatomic) unsigned minute;                              //@synthesize minute=_minute - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL allowsSnooze;                            //@synthesize allowsSnooze=_allowsSnooze - In the implementation block
@property (assign,nonatomic) unsigned daySetting;                          //@synthesize daySetting=_daySetting - In the implementation block
@property (assign,nonatomic) unsigned soundType;                           //@synthesize soundType=_soundType - In the implementation block
@property (nonatomic,readonly) BOOL hasToneID; 
@property (nonatomic,retain) NSString * toneID;                            //@synthesize toneID=_toneID - In the implementation block
@property (assign,nonatomic) double mediaID;                               //@synthesize mediaID=_mediaID - In the implementation block
@property (nonatomic,readonly) BOOL hasVibeID; 
@property (nonatomic,retain) NSString * vibeID;                            //@synthesize vibeID=_vibeID - In the implementation block
@property (assign,nonatomic) float soundVolume;                            //@synthesize soundVolume=_soundVolume - In the implementation block
@property (assign,nonatomic) BOOL isSleepAlarm;                            //@synthesize isSleepAlarm=_isSleepAlarm - In the implementation block
@property (assign,nonatomic) unsigned bedtimeHour;                         //@synthesize bedtimeHour=_bedtimeHour - In the implementation block
@property (assign,nonatomic) unsigned bedtimeMinute;                       //@synthesize bedtimeMinute=_bedtimeMinute - In the implementation block
@property (assign,nonatomic) unsigned bedtimeReminderMinutes;              //@synthesize bedtimeReminderMinutes=_bedtimeReminderMinutes - In the implementation block
@property (assign,nonatomic) unsigned revision;                            //@synthesize revision=_revision - In the implementation block
@property (assign,nonatomic) double lastModified;                          //@synthesize lastModified=_lastModified - In the implementation block
@property (assign,nonatomic) unsigned active;                              //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL hasSnoozeFire; 
@property (assign,nonatomic) double snoozeFire;                            //@synthesize snoozeFire=_snoozeFire - In the implementation block
@property (assign,nonatomic) BOOL hasBedtimeForSleepTracking; 
@property (assign,nonatomic) double bedtimeForSleepTracking;               //@synthesize bedtimeForSleepTracking=_bedtimeForSleepTracking - In the implementation block
@property (assign,nonatomic) BOOL hasBedtimeSnoozeFire; 
@property (assign,nonatomic) double bedtimeSnoozeFire;                     //@synthesize bedtimeSnoozeFire=_bedtimeSnoozeFire - In the implementation block
@property (assign,nonatomic) BOOL isEnabled;                               //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasFired; 
@property (assign,nonatomic) double fired;                                 //@synthesize fired=_fired - In the implementation block
@property (assign,nonatomic) BOOL hasDismissed; 
@property (assign,nonatomic) double dismissed;                             //@synthesize dismissed=_dismissed - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)title;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActive:(unsigned)arg1 ;
-(unsigned)active;
-(double)dismissed;
-(void)setHour:(unsigned)arg1 ;
-(unsigned)hour;
-(void)setIsEnabled:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)soundType;
-(void)setSoundType:(unsigned)arg1 ;
-(unsigned)minute;
-(BOOL)hasTitle;
-(void)setMinute:(unsigned)arg1 ;
-(void)setSoundVolume:(float)arg1 ;
-(float)soundVolume;
-(void)setRevision:(unsigned)arg1 ;
-(void)setLastModified:(double)arg1 ;
-(unsigned)revision;
-(void)setDismissed:(double)arg1 ;
-(double)lastModified;
-(void)setAlarmID:(NSString *)arg1 ;
-(BOOL)isSleepAlarm;
-(void)setAllowsSnooze:(BOOL)arg1 ;
-(void)setDaySetting:(unsigned)arg1 ;
-(void)setIsSleepAlarm:(BOOL)arg1 ;
-(void)setBedtimeReminderMinutes:(unsigned)arg1 ;
-(unsigned)daySetting;
-(BOOL)allowsSnooze;
-(unsigned)bedtimeReminderMinutes;
-(void)setSnoozeFire:(double)arg1 ;
-(void)setBedtimeSnoozeFire:(double)arg1 ;
-(double)bedtimeForSleepTracking;
-(void)setBedtimeForSleepTracking:(double)arg1 ;
-(void)setFired:(double)arg1 ;
-(void)setVibeID:(NSString *)arg1 ;
-(void)setToneID:(NSString *)arg1 ;
-(void)setMediaID:(double)arg1 ;
-(BOOL)hasSnoozeFire;
-(double)snoozeFire;
-(BOOL)hasBedtimeSnoozeFire;
-(double)bedtimeSnoozeFire;
-(BOOL)hasBedtimeForSleepTracking;
-(BOOL)hasDismissed;
-(BOOL)hasFired;
-(double)fired;
-(double)mediaID;
-(NSString *)vibeID;
-(NSString *)toneID;
-(BOOL)hasToneID;
-(BOOL)hasVibeID;
-(void)setHasSnoozeFire:(BOOL)arg1 ;
-(void)setHasBedtimeForSleepTracking:(BOOL)arg1 ;
-(void)setHasBedtimeSnoozeFire:(BOOL)arg1 ;
-(void)setHasFired:(BOOL)arg1 ;
-(void)setHasDismissed:(BOOL)arg1 ;
-(NSString *)alarmID;
-(void)setBedtimeHour:(unsigned)arg1 ;
-(void)setBedtimeMinute:(unsigned)arg1 ;
-(unsigned)bedtimeHour;
-(unsigned)bedtimeMinute;
@end
