/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 11:59:58 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/AccessoryUpdaterBundles/StandaloneHIDFudPlugins.bundle/StandaloneHIDFudPlugins
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface AUFileParser : NSObject {

	NSString* _filePath;
	NSData* _payload;

}

@property (nonatomic,copy) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,retain) NSData * payload;               //@synthesize payload=_payload - In the implementation block
+(id)loadParsersFromFWDirectory:(id)arg1 logHandle:(id)arg2 productID:(id)arg3 equivalentPIDs:(id)arg4 errorDomain:(id)arg5 STFWFirst:(id)arg6 parsers:(id)arg7 ;
+(id)auTypeString:(unsigned char)arg1 ;
-(id)getPID;
-(id)getFirmwareType;
-(id)getFirmwareVersion;
-(id)getHardwareRevisionID;
-(id)getAppleUpdateHeaderField:(unsigned long long)arg1 ;
-(id)initWithFilePath:(id)arg1 productID:(id)arg2 equivalentPIDs:(id)arg3 errorDomain:(id)arg4 error:(id*)arg5 ;
-(id)description;
-(NSData *)payload;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(void)setPayload:(NSData *)arg1 ;
@end
