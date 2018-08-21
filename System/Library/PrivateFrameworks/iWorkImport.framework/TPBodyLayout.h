/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDLayout.h>
#import <iWorkImport/TSWPLayoutTarget.h>
#import <iWorkImport/TPAttachmentLayoutParent.h>

@class NSMutableArray, TPFootnoteHeightMeasurer, NSMutableSet, NSString, TSWPStorage, TSDCanvas, TSDLayout;

@interface TPBodyLayout : TSDLayout <TSWPLayoutTarget, TPAttachmentLayoutParent> {

	NSMutableArray* _columns;
	TPFootnoteHeightMeasurer* _footnoteHeightMeasurer;
	NSMutableArray* _anchoredDrawablesForRelayout;
	NSMutableSet* _inlineDrawableLayouts;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableArray * columns;                                                //@synthesize columns=_columns - In the implementation block
@property (nonatomic,readonly) id<TSWPOffscreenColumn> previousTargetLastColumn; 
@property (nonatomic,readonly) NSObject*<TSWPTopicNumberHints> previousTargetTopicNumbers; 
@property (nonatomic,readonly) id<TSWPOffscreenColumn> nextTargetFirstColumn; 
@property (nonatomic,readonly) NSObject*<TSWPTopicNumberHints> nextTargetTopicNumbers; 
@property (nonatomic,readonly) id<TSWPFootnoteHeightMeasurer> footnoteHeightMeasurer; 
@property (nonatomic,readonly) id<TSWPFootnoteMarkProvider> footnoteMarkProvider; 
@property (nonatomic,readonly) TSPObject*<TSDHint> nextTargetFirstChildHint; 
@property (nonatomic,readonly) TSWPStorage * storage; 
@property (nonatomic,readonly) BOOL isInstructional; 
@property (nonatomic,readonly) CGSize minSize; 
@property (nonatomic,readonly) CGSize maxSize; 
@property (nonatomic,readonly) CGSize currentSize; 
@property (nonatomic,readonly) CGPoint position; 
@property (nonatomic,readonly) CGPoint anchorPoint; 
@property (nonatomic,readonly) unsigned autosizeFlags; 
@property (nonatomic,readonly) int verticalAlignment; 
@property (nonatomic,readonly) int naturalAlignment; 
@property (nonatomic,readonly) int naturalDirection; 
@property (nonatomic,readonly) BOOL wantsLineFragments; 
@property (nonatomic,readonly) unsigned long long pageNumber; 
@property (nonatomic,readonly) unsigned long long pageCount; 
@property (nonatomic,readonly) BOOL textIsVertical; 
@property (nonatomic,readonly) BOOL layoutIsValid; 
@property (nonatomic,readonly) BOOL shouldWrapAroundExternalDrawables; 
@property (nonatomic,readonly) double maxAnchorY; 
@property (nonatomic,readonly) CGRect maskRect; 
@property (nonatomic,retain) NSMutableArray * anchoredDrawablesForRelayout;                             //@synthesize anchoredDrawablesForRelayout=_anchoredDrawablesForRelayout - In the implementation block
@property (nonatomic,readonly) TSDCanvas * canvas; 
@property (nonatomic,readonly) TSDLayout * parentLayoutForInlineAttachments; 
@property (nonatomic,readonly) BOOL shouldHyphenate; 
@property (nonatomic,readonly) CFLocaleRef hyphenationLocale; 
@property (nonatomic,readonly) BOOL repShouldPreventCaret; 
@property (nonatomic,readonly) BOOL isLinked; 
@property (nonatomic,readonly) BOOL marginsAreMirrored; 
+(CGSize)minimumBodySize;
-(double)viewScaleForZoomingToSelectionPath:(id)arg1 targetPointSize:(double)arg2 ;
-(CGRect)rectInRootForSelectionPath:(id)arg1 ;
-(CGRect)rectInRootForPresentingAnnotationPopoverForSelectionPath:(id)arg1 ;
-(CGPoint)activityLineUnscaledEndPointForSearchReference:(id)arg1 ;
-(CGRect)rectInRootOfAutoZoomContextOfSelectionPath:(id)arg1 ;
-(CGRect)rectInRootForAnchoringPencilAnnotationsForSelectionPath:(id)arg1 ;
-(BOOL)selectionMustBeEntirelyOnscreenToCountAsVisibleInSelectionPath:(id)arg1 ;
-(BOOL)marginsAreMirrored;
-(BOOL)isInstructional;
-(id)validatedLayoutForInlineDrawable:(id)arg1 ;
-(CGRect)rectForPresentingAnnotationPopoverForSelectionPath:(id)arg1 ;
-(void)p_killDrawableLayouts:(id)arg1 ;
-(BOOL)needsInflation;
-(void)p_addLayoutIfAttached:(id)arg1 ;
-(id)existingAttachmentLayoutForInfo:(id)arg1 ;
-(id)p_validatedLayoutForDrawable:(id)arg1 inContainingLayout:(id)arg2 ;
-(void)setNeedsInflation;
-(void)updateStartCharIndexWithDirtyRanges:(id)arg1 ;
-(BOOL)processWidowAndInflation;
-(CGSize)maxSize;
-(CGPoint)position;
-(CGPoint)anchorPoint;
-(CGSize)minSize;
-(CGRect)rectForSelection:(id)arg1 ;
-(TSDCanvas *)canvas;
-(unsigned long long)pageCount;
-(int)verticalAlignment;
-(void)validate;
-(unsigned long long)pageNumber;
-(double)contentHeight;
-(TSWPStorage *)storage;
-(void)setChildren:(id)arg1 ;
-(void)invalidateSize;
-(void)parentWillChangeTo:(id)arg1 ;
-(CGPoint)capturedInfoPositionForAttachment;
-(id)computeLayoutGeometry;
-(CGSize)maximumFrameSizeForChild:(id)arg1 ;
-(CGPoint)calculatePointFromSearchReference:(id)arg1 ;
-(BOOL)shouldProvideSizingGuides;
-(void)replaceChild:(id)arg1 with:(id)arg2 ;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSMutableArray *)columns;
-(BOOL)textIsVertical;
-(unsigned)autosizeFlags;
-(id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(NSRange*)arg2 ;
-(BOOL)isLayoutOffscreen;
-(CGRect)p_rectForSelection:(id)arg1 useParagraphModeRects:(BOOL)arg2 ;
-(BOOL)isLastTarget;
-(void)setNeedsDisplayInTargetRect:(CGRect)arg1 ;
-(CGRect)targetRectForCanvasRect:(CGRect)arg1 ;
-(id)validatedLayoutForAnchoredDrawable:(id)arg1 ;
-(id)currentInlineDrawableLayouts;
-(id)currentAnchoredDrawableLayouts;
-(void)addAttachmentLayout:(id)arg1 ;
-(id<TSWPOffscreenColumn>)previousTargetLastColumn;
-(NSObject*<TSWPTopicNumberHints>)previousTargetTopicNumbers;
-(id<TSWPOffscreenColumn>)nextTargetFirstColumn;
-(NSObject*<TSWPTopicNumberHints>)nextTargetTopicNumbers;
-(id<TSWPFootnoteHeightMeasurer>)footnoteHeightMeasurer;
-(id<TSWPFootnoteMarkProvider>)footnoteMarkProvider;
-(TSPObject*<TSDHint>)nextTargetFirstChildHint;
-(CGSize)currentSize;
-(int)naturalAlignment;
-(int)naturalDirection;
-(BOOL)wantsLineFragments;
-(BOOL)layoutIsValid;
-(double)maxAnchorY;
-(CGPoint)layoutPositionFromAnchoredAttachmentPosition:(CGPoint)arg1 ;
-(CGPoint)anchoredAttachmentPositionFromLayoutPosition:(CGPoint)arg1 ;
-(BOOL)invalidateForPageCountChange;
-(NSMutableArray *)anchoredDrawablesForRelayout;
-(void)setAnchoredDrawablesForRelayout:(NSMutableArray *)arg1 ;
-(TSDLayout *)parentLayoutForInlineAttachments;
-(BOOL)shouldWrapAroundExternalDrawables;
@end
