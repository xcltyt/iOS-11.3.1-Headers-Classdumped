/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@class TSUColor;

@interface TSDFreehandDrawingToolkitUIState : TSPObject {

	TSUColor* _currentColor;
	unsigned long long _currentToolType;
	unsigned long long _mostRecentPenToolType;
	double _penToolOpacity;
	double _penToolUnscaledWidth;
	double _pencilToolOpacity;
	double _pencilToolUnscaledWidth;
	double _crayonToolOpacity;
	double _crayonToolUnscaledWidth;
	double _fillToolOpacity;
	double _eraserToolScaledWidth;
	BOOL _eraserToolErasesWholeObjects;

}

@property (nonatomic,retain) TSUColor * currentColor;                                 //@synthesize currentColor=_currentColor - In the implementation block
@property (assign,nonatomic) unsigned long long currentToolType;                      //@synthesize currentToolType=_currentToolType - In the implementation block
@property (nonatomic,readonly) unsigned long long mostRecentPenToolType;              //@synthesize mostRecentPenToolType=_mostRecentPenToolType - In the implementation block
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchive:(FreehandDrawingToolkitUIState*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const FreehandDrawingToolkitUIState*)arg1 unarchiver:(id)arg2 ;
-(void)p_setupDefaultValuesFromUnarchive:(BOOL)arg1 ;
-(unsigned long long)currentToolType;
-(void)setCurrentToolType:(unsigned long long)arg1 ;
-(unsigned long long)mostRecentPenToolType;
-(id)copy;
-(id)initWithContext:(id)arg1 ;
-(TSUColor *)currentColor;
-(void)setCurrentColor:(TSUColor *)arg1 ;
@end
