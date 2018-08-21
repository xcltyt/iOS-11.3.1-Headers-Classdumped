/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface IMSPIAttachment : NSObject {

	NSURL* _fileUrl;
	long long _fileTransferState;

}

@property (retain) NSURL * fileUrl;                          //@synthesize fileUrl=_fileUrl - In the implementation block
@property (assign) long long fileTransferState;              //@synthesize fileTransferState=_fileTransferState - In the implementation block
-(id)description;
-(NSURL *)fileUrl;
-(long long)fileTransferState;
-(id)initWithFileUrl:(id)arg1 transferState:(long long)arg2 ;
-(void)setFileUrl:(NSURL *)arg1 ;
-(void)setFileTransferState:(long long)arg1 ;
@end
