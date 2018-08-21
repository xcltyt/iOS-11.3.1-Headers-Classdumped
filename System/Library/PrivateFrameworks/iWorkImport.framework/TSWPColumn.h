/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPOffscreenColumn.h>

@protocol TSWPStyleProvider;
@class TSWPStorage, NSMutableArray, NSString;

@interface TSWPColumn : NSObject <TSWPOffscreenColumn> {

	TSWPStorage* _storage;
	CGRect _frameBounds;
	CGAffineTransform _transform;
	unsigned long long _startCharIndex;
	unsigned long long _characterCount;
	NSRange _anchoredAttachmentRange;
	unsigned long long _nextWidowPullsDownFromCharIndex;
	double _contentBottom;
	double _erasableContentBottom;
	double _nextLinePosition;
	int _layoutResultFlags;
	unsigned long long _columnIndex;
	unsigned long long _pageNumber;
	unsigned long long _scaleTextPercent;
	id<TSWPStyleProvider> _styleProvider;
	shared_ptr<TSWPLineFragmentArray>* _lineFragmentArray;
	unsigned long long _storageChangeCount;
	NSMutableArray* _paragraphAdornments;
	BOOL _textIsVertical;

}

@property (assign,nonatomic) CGRect wpBounds;                                                 //@synthesize frameBounds=_frameBounds - In the implementation block
@property (assign,nonatomic) CGAffineTransform transformFromWP;                               //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) CGAffineTransform transformToWP; 
@property (assign,nonatomic) unsigned long long startCharIndex;                               //@synthesize startCharIndex=_startCharIndex - In the implementation block
@property (assign,nonatomic) unsigned long long characterCount;                               //@synthesize characterCount=_characterCount - In the implementation block
@property (assign,nonatomic) unsigned long long nextWidowPullsDownFromCharIndex;              //@synthesize nextWidowPullsDownFromCharIndex=_nextWidowPullsDownFromCharIndex - In the implementation block
@property (assign,nonatomic) double contentBottom;                                            //@synthesize contentBottom=_contentBottom - In the implementation block
@property (assign,nonatomic) double nextLinePosition;                                         //@synthesize nextLinePosition=_nextLinePosition - In the implementation block
@property (assign,nonatomic) double erasableContentBottom;                                    //@synthesize erasableContentBottom=_erasableContentBottom - In the implementation block
@property (assign,nonatomic) int layoutResultFlags;                                           //@synthesize layoutResultFlags=_layoutResultFlags - In the implementation block
@property (assign,nonatomic) unsigned long long columnIndex;                                  //@synthesize columnIndex=_columnIndex - In the implementation block
@property (assign,nonatomic) unsigned long long pageNumber;                                   //@synthesize pageNumber=_pageNumber - In the implementation block
@property (assign,nonatomic) unsigned long long scaleTextPercent;                             //@synthesize scaleTextPercent=_scaleTextPercent - In the implementation block
@property (assign,nonatomic) NSRange anchoredRange; 
@property (assign,nonatomic) NSRange range; 
@property (nonatomic,retain) id<TSWPStyleProvider> styleProvider;                             //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) BOOL textIsVertical;                                             //@synthesize textIsVertical=_textIsVertical - In the implementation block
@property (nonatomic,readonly) CGRect frameBounds; 
@property (nonatomic,readonly) CGRect typographicBounds; 
@property (nonatomic,readonly) TSWPStorage * storage;                                         //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) unsigned long long countLines; 
@property (nonatomic,readonly) double textBottom; 
@property (assign,nonatomic) unsigned long long storageChangeCount;                           //@synthesize storageChangeCount=_storageChangeCount - In the implementation block
@property (nonatomic,readonly) BOOL lastLineIsEmptyAndHasListLabel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGRect)boundsRectForSelection:(id)arg1 columnArray:(id)arg2 includeRuby:(BOOL)arg3 includePaginatedAttachments:(BOOL)arg4 ;
+(id)columnForCharIndex:(unsigned long long)arg1 allowEndOfColumn:(BOOL)arg2 withColumns:(id)arg3 ;
+(unsigned long long)charIndexForPoint:(CGPoint)arg1 inColumnsArray:(id)arg2 allowPastBreak:(BOOL)arg3 allowNotFound:(BOOL)arg4 pastCenterGoesToNextChar:(BOOL)arg5 constrainToAscentAndDescent:(BOOL)arg6 isAtEndOfLine:(BOOL*)arg7 leadingEdge:(BOOL*)arg8 ;
+(id)commentKnobBaseOriginForHighlightAtTextRange:(NSRange)arg1 withColumns:(id)arg2 ;
+(CGPoint)connectionLinePointForChangeRange:(NSRange)arg1 withColumns:(id)arg2 layoutTarget:(id)arg3 ;
+(NSRange)rangeOfColumns:(id)arg1 ;
+(CGSize)layoutSizeForParagraphEnumerator:(const TSWPParagraphEnumerator*)arg1 inColumns:(id)arg2 lineCount:(out unsigned long long*)arg3 nextLineOffset:(out double*)arg4 ;
+(id)closestColumnInColumnsArray:(id)arg1 forPoint:(CGPoint)arg2 ignoreEmptyColumns:(BOOL)arg3 ignoreDrawableOnlyColumns:(BOOL)arg4 ;
+(CGRect)caretRectForInsertionPoint:(id)arg1 withColumns:(id)arg2 ;
+(CGRect)rectForSelection:(id)arg1 withColumns:(id)arg2 useParagraphModeRects:(BOOL)arg3 ;
+(unsigned long long)charIndexForPoint:(CGPoint)arg1 inColumnsArray:(id)arg2 allowPastBreak:(BOOL)arg3 allowNotFound:(BOOL)arg4 pastCenterGoesToNextChar:(BOOL)arg5 isAtEndOfLine:(BOOL*)arg6 leadingEdge:(BOOL*)arg7 ;
+(CGRect)rectForSelection:(id)arg1 withColumns:(id)arg2 ;
+(unsigned long long)charIndexForPoint:(CGPoint)arg1 inColumnsArray:(id)arg2 allowPastBreak:(BOOL)arg3 allowNotFound:(BOOL)arg4 isAtEndOfLine:(BOOL*)arg5 leadingEdge:(BOOL*)arg6 ;
+(id)smartFieldWithAttributeKind:(int)arg1 inColumnArray:(id)arg2 atPoint:(CGPoint)arg3 ;
+(id)footnoteMarkAttachmentInColumnArray:(id)arg1 atPoint:(CGPoint)arg2 ;
+(id)footnoteReferenceAttachmentInColumnArray:(id)arg1 atPoint:(CGPoint)arg2 ;
+(id)pathForHighlightWithRange:(NSRange)arg1 columnArray:(id)arg2 pathStyle:(int)arg3 ;
-(id)rectsForSelectionRange:(NSRange)arg1 selectionType:(int)arg2 forParagraphMode:(BOOL)arg3 includeRuby:(BOOL)arg4 includePaginatedAttachments:(BOOL)arg5 ;
-(unsigned long long)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 pastCenterGoesToNextChar:(BOOL)arg3 allowNotFound:(BOOL)arg4 constrainToAscentAndDescent:(BOOL)arg5 isAtEndOfLine:(BOOL*)arg6 leadingEdge:(BOOL*)arg7 ;
-(double)nextLinePosition;
-(unsigned long long)storageChangeCount;
-(void)setStorageChangeCount:(unsigned long long)arg1 ;
-(unsigned long long)pRemapCharIndex:(unsigned long long)arg1 outIsAfterBreak:(out BOOL*)arg2 outWithTextSource:(out id*)arg3 ;
-(void)pInfoForCharIndex:(unsigned long long)arg1 isAtStart:(out BOOL*)arg2 isAtEnd:(out BOOL*)arg3 ;
-(id)pMutableRectsForSelectionRange:(NSRange)arg1 selectionType:(int)arg2 includeSpaceAfter:(BOOL)arg3 includeSpaceBefore:(BOOL)arg4 includeLeading:(BOOL)arg5 forParagraphMode:(BOOL)arg6 includeRuby:(BOOL)arg7 includePaginatedAttachments:(BOOL)arg8 inranges:(id)arg9 outranges:(id*)arg10 ;
-(unsigned long long)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 pastCenterGoesToNextChar:(BOOL)arg3 allowNotFound:(BOOL)arg4 constrainToAscentAndDescent:(BOOL)arg5 isAtEndOfLine:(BOOL*)arg6 outFragment:(const TSWPLineFragment*)arg7 leadingEdge:(BOOL*)arg8 ;
-(unsigned long long)charIndexFromWPPoint:(CGPoint)arg1 pastCenterGoesToNextChar:(BOOL)arg2 allowNotFound:(BOOL)arg3 constrainToAscentAndDescent:(BOOL)arg4 outFragment:(const TSWPLineFragment*)arg5 leadingEdge:(BOOL*)arg6 ;
-(unsigned long long)p_charIndexWithTextClosestToWPPoint:(CGPoint)arg1 pastCenterGoesToNextChar:(BOOL)arg2 outFragment:(const TSWPLineFragment*)arg3 leadingEdge:(BOOL*)arg4 ;
-(BOOL)p_pencilAnnotationsShouldSkipLineFragment:(const TSWPLineFragment*)arg1 ;
-(void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeFootnoteReferenceCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4 ;
-(BOOL)lastLineIsEmptyAndHasListLabel;
-(void)incrementRanges:(long long)arg1 startingAt:(unsigned long long)arg2 ;
-(CGRect)changeBarRectForLineFragment:(const TSWPLineFragment*)arg1 layoutTarget:(id)arg2 ;
-(const shared_ptr<TSWPLineFragmentArray>*)lineFragmentArrayForUnitTests;
-(void)offsetLineFragmentsBy:(CGSize)arg1 ;
-(void)makeEmpty:(unsigned long long)arg1 anchoredRange:(NSRange)arg2 layoutResultFlags:(int)arg3 ;
-(unsigned)hyphenCharOfLineFragmentAtIndex:(unsigned long long)arg1 ;
-(const TSWPLineFragment*)nearestLineFragmentWithSameVerticalPositionAs:(unsigned long long)arg1 xPos:(double)arg2 ;
-(unsigned)fontTraitsForRange:(NSRange)arg1 includingLabel:(BOOL)arg2 ;
-(void)renderWithRenderer:(id)arg1 currentSelection:(id)arg2 limitSelection:(id)arg3 listRange:(NSRange)arg4 rubyGlyphRange:(NSRange)arg5 isCanvasInteractive:(BOOL)arg6 suppressedMisspellingRange:(NSRange)arg7 blackAndWhite:(BOOL)arg8 dictationInterpretations:(id)arg9 autocorrections:(id)arg10 markedRange:(NSRange)arg11 markedText:(id)arg12 renderMode:(int)arg13 pageCount:(unsigned long long)arg14 suppressInvisibles:(BOOL)arg15 suppressFontSmoothing:(BOOL)arg16 currentCanvasSelection:(id)arg17 ;
-(BOOL)onlyHasPartitionedAttachments;
-(BOOL)isLastLineFragmentPartitioned;
-(BOOL)hasPartitionedAttachmentAtStart:(BOOL)arg1 ;
-(id)layoutsForInlineDrawables:(id)arg1 ;
-(void)enumerateParagraphAdornmentsUsingBlock:(/*^block*/id)arg1 ;
-(void)setNextLinePosition:(double)arg1 ;
-(void)dealloc;
-(CGSize)maxSize;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(double)textHeight;
-(unsigned long long)pageNumber;
-(TSWPStorage *)storage;
-(BOOL)textIsVertical;
-(CGRect)frameBounds;
-(int)layoutResultFlags;
-(CGRect)erasableBounds:(unsigned long long)arg1 ;
-(unsigned long long)countLines;
-(id<TSWPStyleProvider>)styleProvider;
-(unsigned long long)startCharIndex;
-(void)setAnchoredRange:(NSRange)arg1 ;
-(const shared_ptr<TSWPLineFragmentArray>*)lineFragmentArray;
-(void)setWpBounds:(CGRect)arg1 ;
-(id)initWithStorage:(id)arg1 frameBounds:(CGRect)arg2 ;
-(void)setStyleProvider:(id<TSWPStyleProvider>)arg1 ;
-(void)setColumnIndex:(unsigned long long)arg1 ;
-(void)setTextIsVertical:(BOOL)arg1 ;
-(void)setPageNumber:(unsigned long long)arg1 ;
-(unsigned long long)characterCount;
-(NSRange)anchoredRange;
-(unsigned long long)nextWidowPullsDownFromCharIndex;
-(const TSWPLineFragment*)lineFragmentAtIndex:(unsigned long long)arg1 ;
-(void)setNextWidowPullsDownFromCharIndex:(unsigned long long)arg1 ;
-(CGRect)caretRectForSelection:(id)arg1 ;
-(unsigned long long)lineIndexForCharIndex:(unsigned long long)arg1 eol:(BOOL)arg2 ;
-(CGRect)boundsOfLineFragmentAtIndex:(unsigned long long)arg1 ;
-(CGRect)firstRectForSelection:(id)arg1 includeSpaceAfter:(BOOL)arg2 includeSpaceBefore:(BOOL)arg3 includeLeading:(BOOL)arg4 ;
-(id)rectsForSelection:(id)arg1 ranges:(id*)arg2 ;
-(unsigned long long)scaleTextPercent;
-(SCD_Struct_TS724)lineMetricsAtCharIndex:(unsigned long long)arg1 allowEndOfLine:(BOOL)arg2 ;
-(unsigned long long)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 pastCenterGoesToNextChar:(BOOL)arg3 allowNotFound:(BOOL)arg4 isAtEndOfLine:(BOOL*)arg5 leadingEdge:(BOOL*)arg6 ;
-(unsigned long long)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 pastCenterGoesToNextChar:(BOOL)arg3 allowNotFound:(BOOL)arg4 isAtEndOfLine:(BOOL*)arg5 outFragment:(const TSWPLineFragment*)arg6 leadingEdge:(BOOL*)arg7 ;
-(id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(int)arg2 ;
-(void)setStartCharIndex:(unsigned long long)arg1 ;
-(void)setCharacterCount:(unsigned long long)arg1 ;
-(void)setContentBottom:(double)arg1 ;
-(void)clearAdornments;
-(double)logicalBoundsTop;
-(double)textBottom;
-(CGAffineTransform)transformToWP;
-(CGAffineTransform)transformFromWP;
-(CGRect)columnRectForRange:(NSRange)arg1 ;
-(const TSWPLineFragment*)pColumnEndingPartitionedLineFragmentInSelectionRange:(NSRange)arg1 ;
-(CGRect)wpBounds;
-(unsigned long long)startAnchoredCharIndex;
-(double)logicalBoundsBottom;
-(double)minimumHeightForLayoutOnPage;
-(BOOL)requiresGlyphVectorsForHeightMeasurement;
-(void)addAdornmentRect:(id)arg1 ;
-(void)setLineFragmentArray:(const shared_ptr<TSWPLineFragmentArray>*)arg1 ;
-(unsigned long long)lineFragmentCountForBaseline:(double)arg1 ;
-(NSRange)rangeOfLineFragmentAtIndex:(unsigned long long)arg1 ;
-(double)horizontalOffsetForCharIndex:(unsigned long long)arg1 lineFragmentIndex:(unsigned long long)arg2 bumpPastHyphen:(BOOL)arg3 allowPastLineBounds:(BOOL)arg4 ;
-(CGRect)glyphRectForRange:(NSRange)arg1 includingLabel:(BOOL)arg2 ;
-(CGRect)glyphRectForRubyFieldAtCharIndex:(unsigned long long)arg1 glyphRange:(NSRange)arg2 ;
-(unsigned long long)glyphCountForRubyFieldAtCharIndex:(unsigned long long)arg1 ;
-(CGRect)typographicBounds;
-(id)lineSelectionsForSelection:(id)arg1 ;
-(id)rectsForSelectionRanges:(id)arg1 selectionType:(int)arg2 ;
-(CGRect)erasableRectForSelectionRange:(NSRange)arg1 ;
-(id)drawableIntersectionRectsForSelection:(id)arg1 inTarget:(id)arg2 ;
-(unsigned long long)charIndexForSelectionFromPoint:(CGPoint)arg1 isTail:(BOOL)arg2 ;
-(TSWPCharIndexAndPosition)calcAttachmentPositionForDrawable:(id)arg1 atPoint:(CGPoint)arg2 inTextLayoutTarget:(id)arg3 tlBoundsInfluencingWrap:(CGPoint)arg4 wrapOutset:(CGSize)arg5 wrapMargin:(double)arg6 makeInline:(BOOL)arg7 ;
-(id)partitionedLayoutForInfo:(id)arg1 ;
-(id)singleLinePartitionedInfoAtStart:(BOOL)arg1 ;
-(BOOL)onlyHasAnchoredDrawable;
-(void)setTransformFromWP:(CGAffineTransform)arg1 ;
-(unsigned long long)anchoredCharCount;
-(double)contentBottom;
-(double)erasableContentBottom;
-(void)setErasableContentBottom:(double)arg1 ;
-(void)setLayoutResultFlags:(int)arg1 ;
-(unsigned long long)columnIndex;
-(void)setScaleTextPercent:(unsigned long long)arg1 ;
@end
