/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAIMAPNotes.framework/DADaemonIMAPNotes.bundle/DADaemonIMAPNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAFolder.h>

@class MFMailboxUid;

@interface DAIMAPNotesFolder : DAFolder {

	MFMailboxUid* _mailboxUid;

}

@property (nonatomic,retain) MFMailboxUid * mailboxUid;              //@synthesize mailboxUid=_mailboxUid - In the implementation block
-(MFMailboxUid *)mailboxUid;
-(void)setMailboxUid:(MFMailboxUid *)arg1 ;
@end
