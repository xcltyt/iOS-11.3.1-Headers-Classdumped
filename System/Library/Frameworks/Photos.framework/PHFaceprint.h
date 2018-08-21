/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface PHFaceprint : NSObject {

	long long _faceprintVersion;
	NSData* _faceprintData;

}

@property (nonatomic,readonly) long long faceprintVersion;                 //@synthesize faceprintVersion=_faceprintVersion - In the implementation block
@property (nonatomic,retain,readonly) NSData * faceprintData;              //@synthesize faceprintData=_faceprintData - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithFaceprintData:(id)arg1 faceprintVersion:(long long)arg2 ;
-(long long)faceprintVersion;
-(NSData *)faceprintData;
@end
