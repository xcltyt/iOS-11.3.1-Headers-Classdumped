/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFAdjustmentSerialization : NSObject
+(id)serializeDictionary:(id)arg1 error:(id*)arg2 ;
+(id)deserializeDictionaryFromData:(id)arg1 error:(id*)arg2 ;
+(id)serializeAdjustments:(id)arg1 error:(id*)arg2 ;
+(id)deserializeAdjustmentsFromData:(id)arg1 error:(id*)arg2 ;
+(BOOL)validateArchive:(id)arg1 containsEntryWithKey:(id)arg2 ofType:(Class)arg3 errors:(id)arg4 ;
+(BOOL)validateValue:(id)arg1 isOfType:(Class)arg2 errors:(id)arg3 ;
@end
