/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFMessageCriterion, NSIndexSet;

@interface _MFLibrarySearchableIndexResultKey : NSObject {

	MFMessageCriterion* _criterion;
	NSIndexSet* _mailboxIDs;

}

@property (nonatomic,retain) MFMessageCriterion * criterion;              //@synthesize criterion=_criterion - In the implementation block
@property (nonatomic,copy) NSIndexSet * mailboxIDs;                       //@synthesize mailboxIDs=_mailboxIDs - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setCriterion:(MFMessageCriterion *)arg1 ;
-(MFMessageCriterion *)criterion;
-(NSIndexSet *)mailboxIDs;
-(void)setMailboxIDs:(NSIndexSet *)arg1 ;
@end
