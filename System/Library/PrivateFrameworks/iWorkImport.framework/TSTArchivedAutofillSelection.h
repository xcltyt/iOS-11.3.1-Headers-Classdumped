/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSKArchivedSelection.h>

@class TSTAutofillSelection, NSString, TSKSelection;

@interface TSTArchivedAutofillSelection : TSPObject <TSKArchivedSelection> {

	TSTAutofillSelection* _autofillSelection;

}

@property (nonatomic,retain) TSTAutofillSelection * autofillSelection;              //@synthesize autofillSelection=_autofillSelection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TSKSelection * selection; 
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(TSTAutofillSelection *)autofillSelection;
-(void)setAutofillSelection:(TSTAutofillSelection *)arg1 ;
-(TSKSelection *)selection;
-(void)setSelection:(TSKSelection *)arg1 ;
@end
