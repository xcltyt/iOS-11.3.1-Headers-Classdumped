/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData;

@interface GEONetworkDataReader : NSObject {

	NSMutableData* _data;
	unsigned long long _dataLength;
	const void* _bytes;
	unsigned long long _bookmarkOffset;
	unsigned long long _offset;

}
-(id)allData;
-(void)appendNetworkData:(id)arg1 ;
-(id)readString;
-(BOOL)readUnsignedShort:(unsigned short*)arg1 ;
-(BOOL)readUnsignedInt:(unsigned*)arg1 ;
-(id)readData:(unsigned)arg1 ;
-(void)markOffset;
-(void)seekToMarkedOffset;
-(BOOL)hasUnreadData;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
@end
