/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFUInputBundle <NSObject>
@required
-(BOOL)hasEntryWithName:(id)arg1;
-(id)inputStreamForEntry:(id)arg1;
-(id)bufferedInputStreamForEntry:(id)arg1;
-(long long)lengthOfEntry:(id)arg1;
-(void)copyEntry:(id)arg1 toFile:(id)arg2;
-(unsigned)crc32ForEntry:(id)arg1;

@end
