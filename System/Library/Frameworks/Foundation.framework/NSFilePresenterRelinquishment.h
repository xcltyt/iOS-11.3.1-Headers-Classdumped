/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCountedSet, NSMutableArray;

@interface NSFilePresenterRelinquishment : NSObject {

	NSCountedSet* _blockingAccessClaimIDs;
	NSMutableArray* _relinquishReplies;
	/*^block*/id _reacquirer;
	BOOL _prerelinquishInProgress;
	NSMutableArray* _blockingPrerelinquishReplies;

}
-(void)removeAllBlockingAccessClaimIDs;
-(void)removeBlockingAccessClaimID:(id)arg1 ;
-(void)performRemoteDeletePrerelinquishmentIfNecessaryUsingBlock:(/*^block*/id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setReacquirer:(/*^block*/id)arg1 ;
-(void)performRelinquishmentToAccessClaimIfNecessary:(id)arg1 usingBlock:(/*^block*/id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)removeBlockingAccessClaimID:(id)arg1 thenContinue:(/*^block*/id)arg2 ;
-(void)addPrerelinquishReply:(/*^block*/id)arg1 ;
-(void)addRelinquishReply:(/*^block*/id)arg1 ;
-(void)didRelinquish;
-(void)dealloc;
@end
