/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBCharacterProperties : NSObject
+(void)readFrom:(id)arg1 wrdProperties:(WrdCharacterProperties*)arg2 document:(id)arg3 properties:(id)arg4 ;
+(void)readFrom:(id)arg1 wrdProperties:(WrdCharacterProperties*)arg2 tracked:(WrdCharacterProperties*)arg3 document:(id)arg4 properties:(id)arg5 ;
+(void)prepareForWriting:(id)arg1 properties:(id)arg2 wrdProperties:(WrdCharacterProperties*)arg3 tracked:(WrdCharacterProperties*)arg4 ;
+(WrdCharacterProperties*)createTrackedPropertiesIfNeeded:(id)arg1 ;
+(id)formattingChangeDate:(const WrdDateTimeRef)arg1 ;
@end
