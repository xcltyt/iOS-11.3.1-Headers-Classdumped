/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSPFileManager : NSObject
+(BOOL)linkOrCloneItemAtURL:(id)arg1 toURL:(id)arg2 canLink:(BOOL)arg3 error:(id*)arg4 ;
+(BOOL)linkOrCopyItemAtURL:(id)arg1 decryptionInfo:(id)arg2 toURL:(id)arg3 encryptionInfo:(id)arg4 canLink:(BOOL)arg5 error:(id*)arg6 ;
+(BOOL)copyDataFromReadChannel:(id)arg1 decryptionInfo:(id)arg2 size:(unsigned long long)arg3 toWriteChannel:(id)arg4 encryptionInfo:(id)arg5 error:(id*)arg6 ;
+(BOOL)linkOrCloneItemAtURL:(id)arg1 toURL:(id)arg2 canLink:(BOOL)arg3 canClone:(BOOL)arg4 error:(id*)arg5 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 sourcePath:(id)arg3 targetPath:(id)arg4 ;
+(void)transcodeReadChannel:(id)arg1 decryptionInfo:(id)arg2 size:(unsigned long long)arg3 toWriteChannel:(id)arg4 encryptionInfo:(id)arg5 synchronous:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
+(void)copyDataFromReadChannel:(id)arg1 decryptionInfo:(id)arg2 size:(unsigned long long)arg3 toWriteChannel:(id)arg4 encryptionInfo:(id)arg5 synchronous:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
+(void)copyDataFromReadChannel:(id)arg1 size:(unsigned long long)arg2 toWriteChannel:(id)arg3 synchronous:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
+(id)ioCompletionQueue;
+(void)copyDataFromReadChannel:(id)arg1 decryptionInfo:(id)arg2 toWriteChannel:(id)arg3 encryptionInfo:(id)arg4 completion:(/*^block*/id)arg5 ;
@end
