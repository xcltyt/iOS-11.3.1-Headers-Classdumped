/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBNameTable : NSObject
+(id)edNameFromXlName:(XlName*)arg1 name:(OcText*)arg2 state:(id)arg3 ;
+(XlName*)xlNameFromEDName:(id)arg1 state:(id)arg2 ;
+(void)readFromState:(id)arg1 ;
+(XlNameTable*)createXlNameTableFromNamesCollection:(id)arg1 state:(id)arg2 ;
@end
