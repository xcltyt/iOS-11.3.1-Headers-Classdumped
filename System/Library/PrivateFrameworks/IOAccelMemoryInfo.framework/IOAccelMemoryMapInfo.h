/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IOAccelMemoryInfo.framework/IOAccelMemoryInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IOAccelMemoryMapInfo : NSObject {

	int pid;
	unsigned long long address;
	id _expansionData;

}

@property (assign) int pid; 
@property (assign) unsigned long long address; 
-(void)setPid:(int)arg1 ;
-(void)setAddress:(unsigned long long)arg1 ;
-(unsigned long long)address;
-(int)pid;
@end
