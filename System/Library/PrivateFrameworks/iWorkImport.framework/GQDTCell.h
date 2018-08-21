/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class GQDSStyle;

@interface GQDTCell : NSObject {

	unsigned short mColumnIndex;
	unsigned short mRowIndex;
	unsigned short mColumnSpan;
	unsigned short mRowSpan;
	GQDSStyle* mStyle;

}
-(int)readAttributesForBaseCell:(xmlTextReaderRef)arg1 processor:(id)arg2 ;
-(int)readAttributesForBaseTabularCell:(xmlTextReaderRef)arg1 processor:(id)arg2 ;
-(int)readBaseAttributesForBaseCell:(xmlTextReaderRef)arg1 processor:(id)arg2 ;
-(void)incrementColumnSpan;
-(void)dealloc;
-(unsigned short)rowIndex;
-(unsigned short)columnIndex;
-(id)cellStyle;
-(void)setCellStyle:(id)arg1 ;
-(unsigned short)columnSpan;
-(unsigned short)rowSpan;
@end
