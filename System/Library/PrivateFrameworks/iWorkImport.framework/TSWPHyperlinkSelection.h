/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSKSelection.h>

@protocol TSWPHyperlinkHostRepProtocol;
@class TSWPHyperlinkField;

@interface TSWPHyperlinkSelection : TSKSelection {

	BOOL _openInEditMode;
	TSWPHyperlinkField* _hyperlinkField;
	id<TSWPHyperlinkHostRepProtocol> _hyperlinkRep;

}

@property (nonatomic,readonly) TSWPHyperlinkField * hyperlinkField;                        //@synthesize hyperlinkField=_hyperlinkField - In the implementation block
@property (nonatomic,readonly) id<TSWPHyperlinkHostRepProtocol> hyperlinkRep;              //@synthesize hyperlinkRep=_hyperlinkRep - In the implementation block
@property (assign,nonatomic) BOOL openInEditMode;                                          //@synthesize openInEditMode=_openInEditMode - In the implementation block
+(id)selectionWithHyperlinkField:(id)arg1 rep:(id)arg2 ;
+(Class)archivedSelectionClass;
-(id)initWithHyperlinkField:(id)arg1 rep:(id)arg2 ;
-(TSWPHyperlinkField *)hyperlinkField;
-(id<TSWPHyperlinkHostRepProtocol>)hyperlinkRep;
-(BOOL)openInEditMode;
-(void)setOpenInEditMode:(BOOL)arg1 ;
@end
