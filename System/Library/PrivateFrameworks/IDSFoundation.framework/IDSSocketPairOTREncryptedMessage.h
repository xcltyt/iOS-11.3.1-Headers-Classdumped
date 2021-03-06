/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData;

@interface IDSSocketPairOTREncryptedMessage : IDSSocketPairMessage {

	unsigned long long _offset;
	unsigned char _versionNumber;
	BOOL _encrypted;
	BOOL _fileXfer;
	unsigned short _streamID;
	unsigned short _priority;
	unsigned _sequenceNumber;
	NSData* _data;

}

@property (nonatomic,readonly) unsigned char versionNumber;              //@synthesize versionNumber=_versionNumber - In the implementation block
@property (nonatomic,readonly) BOOL encrypted;                           //@synthesize encrypted=_encrypted - In the implementation block
@property (assign,nonatomic) unsigned short streamID;                    //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,readonly) unsigned short priority;                  //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) unsigned sequenceNumber;                  //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) BOOL fileXfer;                            //@synthesize fileXfer=_fileXfer - In the implementation block
@property (nonatomic,readonly) NSData * data; 
-(unsigned char)versionNumber;
-(unsigned)sequenceNumber;
-(id)description;
-(NSData *)data;
-(unsigned short)priority;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(id)initWithVersion:(unsigned char)arg1 encrypted:(BOOL)arg2 streamID:(unsigned short)arg3 priority:(unsigned short)arg4 sequenceNumber:(unsigned)arg5 fileXfer:(BOOL)arg6 data:(id)arg7 ;
-(BOOL)fileXfer;
-(unsigned short)streamID;
-(void)setStreamID:(unsigned short)arg1 ;
-(unsigned char)command;
-(BOOL)encrypted;
@end

