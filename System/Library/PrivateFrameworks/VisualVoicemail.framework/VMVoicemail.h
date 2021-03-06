/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VisualVoicemail/VisualVoicemail-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString, NSURL, NSData, VMVoicemailTranscript;

@interface VMVoicemail : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	unsigned long long _remoteUID;
	unsigned long long _identifier;
	NSDate* _date;
	NSString* _senderDestinationID;
	NSString* _callbackDestinationID;
	double _duration;
	NSURL* _dataURL;
	NSURL* _transcriptionURL;
	NSString* _callbackISOCountryCode;
	NSString* _senderISOCountryCode;
	unsigned long long _flags;

}

@property (nonatomic,copy,readonly) NSData * data; 
@property (assign,nonatomic) unsigned long long flags; 
@property (nonatomic,readonly) NSString * sender; 
@property (nonatomic,readonly) NSString * callbackNumber; 
@property (nonatomic,readonly) NSString * dataPath; 
@property (nonatomic,copy) NSString * callbackDestinationID;                                           //@synthesize callbackDestinationID=_callbackDestinationID - In the implementation block
@property (nonatomic,copy) NSString * callbackISOCountryCode;                                          //@synthesize callbackISOCountryCode=_callbackISOCountryCode - In the implementation block
@property (nonatomic,retain) NSURL * dataURL;                                                          //@synthesize dataURL=_dataURL - In the implementation block
@property (nonatomic,retain) NSDate * date;                                                            //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) double duration;                                                          //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned long long identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long remoteUID;                                             //@synthesize remoteUID=_remoteUID - In the implementation block
@property (nonatomic,copy) NSString * senderDestinationID;                                             //@synthesize senderDestinationID=_senderDestinationID - In the implementation block
@property (nonatomic,copy) NSString * senderISOCountryCode;                                            //@synthesize senderISOCountryCode=_senderISOCountryCode - In the implementation block
@property (nonatomic,retain) NSURL * transcriptionURL;                                                 //@synthesize transcriptionURL=_transcriptionURL - In the implementation block
@property (assign,getter=isBlocked,nonatomic) BOOL blocked; 
@property (assign,getter=isDataAvailable,nonatomic) BOOL dataAvailable; 
@property (assign,getter=isDeleted,nonatomic) BOOL deleted; 
@property (assign,getter=isDetached,nonatomic) BOOL detached; 
@property (assign,getter=isDownloading,nonatomic) BOOL downloading; 
@property (assign,getter=isRead,nonatomic) BOOL read; 
@property (assign,getter=isTemporary,nonatomic) BOOL temporary; 
@property (assign,getter=isTranscriptionAvailable,nonatomic) BOOL transcriptionAvailable; 
@property (assign,getter=isTrashed,nonatomic) BOOL trashed; 
@property (assign,nonatomic) unsigned long long flags;                                                 //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) BOOL hasCallbackNumber; 
@property (getter=isUnread,nonatomic,readonly) BOOL unread; 
@property (nonatomic,readonly) VMVoicemailTranscript * transcript; 
@property (getter=isTranscriptionRated,nonatomic,readonly) BOOL transcriptionRated; 
@property (nonatomic,readonly) unsigned long long transcriptionState; 
+(BOOL)supportsSecureCoding;
-(NSURL *)dataURL;
-(void)setDataURL:(NSURL *)arg1 ;
-(unsigned long long)flags;
-(void)setDeleted:(BOOL)arg1 ;
-(void)setBlocked:(BOOL)arg1 ;
-(void)setTrashed:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)duration;
-(unsigned long long)identifier;
-(void)setDuration:(double)arg1 ;
-(NSDate *)date;
-(NSString *)sender;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setRead:(BOOL)arg1 ;
-(BOOL)isDataAvailable;
-(BOOL)isDetached;
-(void)setDetached:(BOOL)arg1 ;
-(BOOL)isTrashed;
-(BOOL)isDeleted;
-(id)initWithRecord:(const void*)arg1 ;
-(BOOL)isRead;
-(BOOL)isDownloading;
-(void)setSenderDestinationID:(NSString *)arg1 ;
-(void)setCallbackDestinationID:(NSString *)arg1 ;
-(void)setTranscriptionURL:(NSURL *)arg1 ;
-(void)setRemoteUID:(unsigned long long)arg1 ;
-(unsigned long long)remoteUID;
-(NSString *)senderDestinationID;
-(NSString *)callbackDestinationID;
-(NSURL *)transcriptionURL;
-(VMVoicemailTranscript *)transcript;
-(BOOL)hasSameContent:(id)arg1 ;
-(BOOL)hasSameFlags:(id)arg1 ;
-(BOOL)isTranscribing;
-(BOOL)hasFlags:(unsigned long long)arg1 ;
-(BOOL)doesNotHaveFlags:(unsigned long long)arg1 ;
-(BOOL)isTranscriptionAvailable;
-(id)contactUsingContactStore:(id)arg1 withKeysToFetch:(id)arg2 ;
-(BOOL)isContactSuggested:(id)arg1 ;
-(NSString *)callbackISOCountryCode;
-(NSString *)senderISOCountryCode;
-(void)setFlag:(unsigned long long)arg1 enabled:(BOOL)arg2 ;
-(BOOL)wasTranscriptionAttempted;
-(id)flagDescription;
-(BOOL)isTranscriptionRated;
-(id)displayNameUsingContactStore:(id)arg1 ;
-(id)displayLabelUsingContactStore:(id)arg1 ;
-(id)contactUsingContactStore:(id)arg1 ;
-(BOOL)hasCallbackNumber;
-(void)setDataAvailable:(BOOL)arg1 ;
-(void)setTranscriptionAvailable:(BOOL)arg1 ;
-(unsigned long long)transcriptionState;
-(void)setCallbackISOCountryCode:(NSString *)arg1 ;
-(void)setSenderISOCountryCode:(NSString *)arg1 ;
-(id)initWithVoicemailMessage:(id)arg1 ;
-(NSString *)callbackNumber;
-(NSString *)dataPath;
-(BOOL)isUnread;
-(void)setFlags:(unsigned long long)arg1 ;
-(BOOL)isTemporary;
-(void)setTemporary:(BOOL)arg1 ;
-(BOOL)isEqualToMessage:(id)arg1 ;
-(BOOL)isBlocked;
-(void)setDownloading:(BOOL)arg1 ;
-(id)initWithMessage:(id)arg1 ;
@end

