/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBProtection : NSObject
+(id)edProtectionFromXlXf:(XlXf*)arg1 ;
+(id)edProtectionFromXlDXfProtect:(XlDXfProtect*)arg1 ;
+(id)edProtectionFromXlGraphicsInfo:(XlGraphicsInfo*)arg1 ;
+(void)writeProtection:(id)arg1 toXlXf:(XlXf*)arg2 ;
+(void)writeProtection:(id)arg1 toXlGraphicsInfo:(XlGraphicsInfo*)arg2 ;
+(XlDXfProtect*)xlDXfProtectFromEDProtection:(id)arg1 ;
@end
