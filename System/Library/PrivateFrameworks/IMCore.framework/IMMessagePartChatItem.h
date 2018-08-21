/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMMessageChatItem.h>
#import <IMCore/IMVisibleAssociatedMessageHost.h>

@class NSArray, NSAttributedString, NSString;

@interface IMMessagePartChatItem : IMMessageChatItem <IMVisibleAssociatedMessageHost> {

	NSAttributedString* _text;
	long long _index;
	NSRange _messagePartRange;
	NSArray* _visibleAssociatedMessageChatItems;
	NSArray* _messageEditChatItems;
	BOOL _isBusiness;

}

@property (assign,nonatomic) long long index;                                                                                        //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) NSRange messagePartRange;                                                                               //@synthesize messagePartRange=_messagePartRange - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * text;                                                                       //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSArray * messageEditChatItems;                                                                       //@synthesize messageEditChatItems=_messageEditChatItems - In the implementation block
@property (assign,nonatomic) BOOL isBusiness;                                                                                        //@synthesize isBusiness=_isBusiness - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=_setVisibleAssociatedMessageChatItems:,nonatomic,retain) NSArray * visibleAssociatedMessageChatItems;              //@synthesize visibleAssociatedMessageChatItems=_visibleAssociatedMessageChatItems - In the implementation block
+(id)_newMessagePartsForMessageItem:(id)arg1 ;
+(id)_newMessagePartsForMessageItem:(id)arg1 shouldDisplayLink:(BOOL)arg2 isBusiness:(BOOL)arg3 hasKnownParticipants:(BOOL)arg4 ;
+(id)_defaultRichLinkWhiteList;
+(BOOL)_isWhiteListedURL:(id)arg1 ;
+(BOOL)_testingSupportsURL:(id)arg1 ;
+(id)_guidForMessage:(id)arg1 url:(id)arg2 ;
+(id)_messageItemWithPartsDeleted:(id)arg1 fromMessageItem:(id)arg2 ;
-(NSString *)description;
-(NSAttributedString *)text;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIndex:(long long)arg1 ;
-(long long)index;
-(id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(NSRange)arg4 visibleAssociatedMessageChatItems:(id)arg5 ;
-(void)setIsBusiness:(BOOL)arg1 ;
-(id)_initWithItem:(id)arg1 messagePartRange:(NSRange)arg2 ;
-(void)_setVisibleAssociatedMessageChatItems:(id)arg1 ;
-(void)_setMessageEditChatItems:(id)arg1 ;
-(void)setMessagePartRange:(NSRange)arg1 ;
-(NSArray *)messageEditChatItems;
-(BOOL)isBusiness;
-(NSRange)messagePartRange;
-(BOOL)canDelete;
-(NSArray *)visibleAssociatedMessageChatItems;
-(BOOL)canSendMessageAcknowledgment;
@end
