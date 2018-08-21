/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <NotesUI/ICTextAttachment.h>

@interface ICTableTextAttachment : ICTextAttachment {

	double _lastAvailableWidth;
	CGSize _lastAttachmentSize;

}

@property (assign,nonatomic) double lastAvailableWidth;              //@synthesize lastAvailableWidth=_lastAvailableWidth - In the implementation block
@property (assign,nonatomic) CGSize lastAttachmentSize;              //@synthesize lastAttachmentSize=_lastAttachmentSize - In the implementation block
-(SCD_Struct_IC0)attachmentBoundsMargins;
-(BOOL)canDragWithoutSelecting;
-(void)fixAttachmentForAttributedString:(id)arg1 range:(NSRange)arg2 forPlainText:(BOOL)arg3 ;
-(id)printableTextContent;
-(double)lastAvailableWidth;
-(void)setLastAvailableWidth:(double)arg1 ;
-(CGSize)lastAttachmentSize;
-(void)setLastAttachmentSize:(CGSize)arg1 ;
@end
