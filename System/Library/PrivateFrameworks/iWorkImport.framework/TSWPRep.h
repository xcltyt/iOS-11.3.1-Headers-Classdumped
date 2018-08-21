/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDContainerRep.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class CALayer, CAShapeLayer, TSWPSelection, NSTimer, TSWPSearchReference, NSArray, TSWPStorage, NSString;

@interface TSWPRep : TSDContainerRep <CAAnimationDelegate> {

	CALayer* _textLayers[2];
	CALayer* _caretLayer;
	CAShapeLayer* _selectionLineLayers[2];
	CAShapeLayer* _selectionHighlightLayer;
	CAShapeLayer* _selectionParagraphBorderLayer;
	CAShapeLayer* _markHighlightLayer;
	CAShapeLayer* _smartFieldHighlightLayer;
	CAShapeLayer* _secondaryHighlightLayer;
	NSRange _secondaryHighlightRange;
	int _secondaryHighlightPathStyle;
	BOOL _caretAnimationDisabled;
	BOOL _suppressCaret;
	NSRange _suppressedMisspellingRange;
	BOOL _updatingHighlights;
	BOOL _suppressSelectionHighlight;
	NSRange _dragRange;
	TSWPSelection* _lastSelection;
	BOOL _selectionChanged;
	BOOL _markChanged;
	unsigned long long _newSelectionFlags;
	BOOL _repFieldsAreActive;
	BOOL _hudStateDirty;
	BOOL _invalidateHUDState;
	BOOL _useKeyboardWhenEditing;
	double _listLevelIndents[9];
	TSWPSelection* _dropSelection;
	BOOL _isShowingCommentKnobs;
	BOOL _tornDown;
	NSTimer* _caretTimer;
	BOOL _caretCancelled;
	BOOL _findIsShowing;
	TSWPSearchReference* _activeSearchReference;
	NSArray* _searchReferences;
	CALayer* _floatingCaretLayer;
	CGAffineTransform _transformToConvertNaturalToScaledRoot;

}

@property (nonatomic,readonly) BOOL textIsVertical; 
@property (nonatomic,readonly) CGAffineTransform transformToConvertNaturalToScaledRoot;                          //@synthesize transformToConvertNaturalToScaledRoot=_transformToConvertNaturalToScaledRoot - In the implementation block
@property (nonatomic,retain) NSArray * searchReferences;                                                         //@synthesize searchReferences=_searchReferences - In the implementation block
@property (nonatomic,retain) CALayer * floatingCaretLayer;                                                       //@synthesize floatingCaretLayer=_floatingCaretLayer - In the implementation block
@property (nonatomic,copy) TSWPSelection * lastSelection;                                                        //@synthesize lastSelection=_lastSelection - In the implementation block
@property (nonatomic,retain) TSWPSearchReference * activeSearchReference;                                        //@synthesize activeSearchReference=_activeSearchReference - In the implementation block
@property (assign,nonatomic) BOOL findIsShowing;                                                                 //@synthesize findIsShowing=_findIsShowing - In the implementation block
@property (nonatomic,__weak,readonly) TSDLayout*<TSWPLayoutTarget> layout; 
@property (nonatomic,readonly) TSWPStorage * storage; 
@property (nonatomic,readonly) NSArray * columns; 
@property (nonatomic,readonly) TSWPSelection * selection; 
@property (assign,getter=isSelectionHighlightSuppressed,nonatomic) BOOL suppressSelectionHighlight;              //@synthesize suppressSelectionHighlight=_suppressSelectionHighlight - In the implementation block
@property (assign,nonatomic) NSRange dragRange;                                                                  //@synthesize dragRange=_dragRange - In the implementation block
@property (nonatomic,readonly) BOOL isBeingEdited; 
@property (assign,nonatomic) BOOL useKeyboardWhenEditing;                                                        //@synthesize useKeyboardWhenEditing=_useKeyboardWhenEditing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)fontTraitsForRange:(NSRange)arg1 includingLabel:(BOOL)arg2 ;
-(BOOL)p_hasEmptyParagraphFillOrBorders;
-(CGRect)rectForSelection:(id)arg1 includeRuby:(BOOL)arg2 includePaginatedAttachments:(BOOL)arg3 ;
-(unsigned long long)charIndexForPointWithPinning:(CGPoint)arg1 constrainToAscentAndDescent:(BOOL)arg2 ;
-(unsigned long long)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 constrainToAscentAndDescent:(BOOL)arg3 isAtEndOfLine:(BOOL*)arg4 ;
-(unsigned long long)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 allowNotFound:(BOOL)arg3 constrainToAscentAndDescent:(BOOL)arg4 isAtEndOfLine:(BOOL*)arg5 leadingEdge:(BOOL*)arg6 ;
-(unsigned long long)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 allowNotFound:(BOOL)arg3 pastCenterGoesToNextChar:(BOOL)arg4 constrainToAscentAndDescent:(BOOL)arg5 isAtEndOfLine:(BOOL*)arg6 leadingEdge:(BOOL*)arg7 ;
-(BOOL)isBeingEdited;
-(const CGPathRef)newPathForSelection:(id)arg1 ;
-(CGRect)p_closestCaretRectForPoint:(CGPoint)arg1 inSelection:(BOOL)arg2 allowPastBreak:(BOOL)arg3 ;
-(BOOL)p_shouldShowCommentsIncludingHighlights:(BOOL)arg1 ;
-(BOOL)p_allowCaretForSelection:(id)arg1 ;
-(CALayer *)floatingCaretLayer;
-(void)setFloatingCaretLayer:(CALayer *)arg1 ;
-(TSWPSelection *)lastSelection;
-(void)setLastSelection:(TSWPSelection *)arg1 ;
-(void)dealloc;
-(Class)layerClass;
-(TSDLayout*<TSWPLayoutTarget>)layout;
-(TSWPSelection *)selection;
-(NSRange)range;
-(CGRect)caretRect;
-(void)drawInContext:(CGContextRef)arg1 ;
-(CGRect)selectionRect;
-(void)willBeRemoved;
-(NSRange)dragRange;
-(TSWPStorage *)storage;
-(TSWPSearchReference *)activeSearchReference;
-(void)setActiveSearchReference:(TSWPSearchReference *)arg1 ;
-(BOOL)directlyManagesLayerContent;
-(void)drawInLayerContext:(CGContextRef)arg1 ;
-(void)gesturesDidEnd;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(CGRect)naturalBoundsRectForHyperlinkField:(id)arg1 ;
-(id)repForCharIndex:(unsigned long long)arg1 isStart:(BOOL)arg2 ;
-(NSArray *)columns;
-(BOOL)textIsVertical;
-(unsigned long long)charIndexForPointWithPinning:(CGPoint)arg1 isTail:(BOOL)arg2 selectionType:(int)arg3 ;
-(unsigned long long)charIndexForPointWithPinning:(CGPoint)arg1 ;
-(id)columnForCharIndex:(unsigned long long)arg1 ;
-(id)smartFieldAtPoint:(CGPoint)arg1 ;
-(BOOL)isOverflowing;
-(CGRect)caretRectForCharIndex:(unsigned long long)arg1 caretAffinity:(int)arg2 ;
-(id)footnoteReferenceAttachmentAtPoint:(CGPoint)arg1 ;
-(BOOL)isSelectionHighlightSuppressed;
-(void)setSuppressSelectionHighlight:(BOOL)arg1 ;
-(CGRect)caretRectForSelection:(id)arg1 ;
-(BOOL)isPointInSelectedArea:(CGPoint)arg1 ;
-(CGPoint)pinToNaturalBounds:(CGPoint)arg1 andLastLineFragment:(BOOL)arg2 ;
-(SCD_Struct_TS724)lineMetricsAtPoint:(CGPoint)arg1 ;
-(unsigned long long)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 allowNotFound:(BOOL)arg3 isAtEndOfLine:(BOOL*)arg4 leadingEdge:(BOOL*)arg5 ;
-(unsigned long long)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 allowNotFound:(BOOL)arg3 pastCenterGoesToNextChar:(BOOL)arg4 isAtEndOfLine:(BOOL*)arg5 leadingEdge:(BOOL*)arg6 ;
-(CGRect)labelRectForCharIndex:(unsigned long long)arg1 ;
-(CGPoint)pinToClosestColumn:(CGPoint)arg1 ;
-(CGRect)caretRectForCharIndex:(unsigned long long)arg1 leadingEdge:(BOOL)arg2 caretAffinity:(int)arg3 ;
-(CGRect)columnRectForRange:(NSRange)arg1 ;
-(CGRect)glyphRectForRange:(NSRange)arg1 includingLabel:(BOOL)arg2 ;
-(CGRect)glyphRectForRubyFieldAtCharIndex:(unsigned long long)arg1 glyphRange:(NSRange)arg2 ;
-(unsigned long long)glyphCountForRubyFieldAtCharIndex:(unsigned long long)arg1 ;
-(NSArray *)searchReferences;
-(void)setSearchReferences:(NSArray *)arg1 ;
-(void)p_teardown;
-(CGPoint)p_pinPoint:(CGPoint)arg1 toRect:(CGRect)arg2 ;
-(id)closestColumnForPoint:(CGPoint)arg1 ;
-(CGRect)p_caretRectForSelection:(id)arg1 ;
-(SCD_Struct_TS724)lineMetricsAtCharIndex:(unsigned long long)arg1 ;
-(CGAffineTransform)transformToConvertNaturalToScaledRoot;
-(unsigned long long)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 isAtEndOfLine:(BOOL*)arg3 ;
-(BOOL)p_hasVisibleContents;
-(void)performBlockOnTextLayers:(/*^block*/id)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 limitSelection:(id)arg2 suppressInvisibles:(BOOL)arg3 ;
-(void)p_drawTextInLayer:(id)arg1 context:(CGContextRef)arg2 limitSelection:(id)arg3 rubyGlyphRange:(NSRange)arg4 renderMode:(int)arg5 suppressInvisibles:(BOOL)arg6 ;
-(id)textLayer;
-(BOOL)p_hasEmptyList;
-(BOOL)useKeyboardWhenEditing;
-(id)p_hyperlinkAtPoint:(CGPoint)arg1 ;
-(void)setUseKeyboardWhenEditing:(BOOL)arg1 ;
-(void)setDragRange:(NSRange)arg1 ;
-(CGRect)p_paragraphModeRectangleForColumn:(id)arg1 selection:(id)arg2 ;
-(void)p_updateLayersForInsertionPointSelection:(id)arg1 ;
-(id)textBackgroundLayer;
-(CGRect)p_convertNaturalRectToRotated:(CGRect)arg1 repAngle:(double)arg2 ;
-(SCD_Struct_TS727)wordMetricsAtCharIndex:(unsigned long long)arg1 ;
-(CGRect)p_topicDragRectForSelection:(id)arg1 ;
-(void)drawRubyInContext:(CGContextRef)arg1 rubyFieldStart:(unsigned long long)arg2 rubyGlyphRange:(NSRange)arg3 ;
-(id)rubyFieldAtPoint:(CGPoint)arg1 ;
-(id)footnoteMarkAttachmentAtPoint:(CGPoint)arg1 ;
-(void)viewDidAppear;
-(unsigned long long)charCountOfGlyphStartingAtCharIndex:(unsigned long long)arg1 ;
-(BOOL)findIsShowing;
-(void)setFindIsShowing:(BOOL)arg1 ;
@end
