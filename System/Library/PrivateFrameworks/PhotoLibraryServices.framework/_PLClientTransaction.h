/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLClientServerTransaction.h>

@protocol OS_dispatch_semaphore;
@class NSSet, NSString, NSObject;

@interface _PLClientTransaction : PLClientServerTransaction {

	NSSet* _changeScopes;
	long long _addChangeScopesBatch;
	NSSet* _batchScopes;
	int _fileDescriptor;
	id _processAssertion;
	NSString* _path;
	NSObject*<OS_dispatch_semaphore> _fdResourceSemaphore;
	NSString* _changeScopesDescriptionSnapshot;

}

@property (assign,nonatomic) int fileDescriptor;                                                //@synthesize fileDescriptor=_fileDescriptor - In the implementation block
@property (nonatomic,retain) id processAssertion;                                               //@synthesize processAssertion=_processAssertion - In the implementation block
@property (nonatomic,retain) NSString * path;                                                   //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_semaphore> fdResourceSemaphore;              //@synthesize fdResourceSemaphore=_fdResourceSemaphore - In the implementation block
@property (copy) NSString * changeScopesDescriptionSnapshot;                                    //@synthesize changeScopesDescriptionSnapshot=_changeScopesDescriptionSnapshot - In the implementation block
+(id)_fdIsolationQueue;
+(id)_fdResourceSemaphore;
-(int)fileDescriptor;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(void)completeTransactionScope:(id)arg1 ;
-(void)completeTransaction;
-(void)setFileDescriptor:(int)arg1 ;
-(void)pushChangeScopesBatch;
-(void)popChangeScopesBatch;
-(void)abortTransaction;
-(id)changeScopes;
-(void)setProcessAssertion:(id)arg1 ;
-(void)setChangeScopesDescriptionSnapshot:(NSString *)arg1 ;
-(void)_updateChangeScopesDescriptionSnapshot;
-(void)persistTransactionScopes:(id)arg1 ;
-(id)processAssertion;
-(NSString *)changeScopesDescriptionSnapshot;
-(void)addChangeScopes:(id)arg1 ;
-(BOOL)isClientTransaction;
-(id)generateChangeScopesDescription;
-(NSObject*<OS_dispatch_semaphore>)fdResourceSemaphore;
-(void)setFdResourceSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

