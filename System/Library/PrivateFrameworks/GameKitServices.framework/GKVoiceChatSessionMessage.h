/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameKitServices/GKOOBMessage.h>

@class NSData;

@interface GKVoiceChatSessionMessage : GKOOBMessage {

	NSData* _data;
	unsigned _conferenceID;
	unsigned _subtype;

}
-(id)init;
-(void)dealloc;
-(id)payload;
-(unsigned)subtype;
-(id)data;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(unsigned)conferenceID;
-(BOOL)_checkType:(unsigned short)arg1 ;
-(BOOL)_checkSize:(unsigned long long)arg1 ;
-(id)initWithPayload:(id)arg1 conferenceID:(unsigned)arg2 subtype:(unsigned)arg3 ;
@end
