/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextHostLayout.h>
#import <iWorkImport/TSWPColumnMetrics.h>
#import <iWorkImport/TSWPLayoutParent.h>
#import <iWorkImport/TSWPStorageObserver.h>

@class TSTMasterLayout, TSTLayoutHint, TSTLayoutSpaceBundle, TSWPLayout, NSMutableDictionary, TSTInfo, TSTTableModel, TSWPPadding, NSString;

@interface TSTLayout : TSWPTextHostLayout <TSWPColumnMetrics, TSWPLayoutParent, TSWPStorageObserver> {

	TSTMasterLayout* mMasterLayout;
	TSTLayoutHint* mLayoutHint;
	CGRect mCanvasVisibleRect;
	CGRect mCanvasSafeRect;
	CGRect mPreviousVisibleStrokeFrame;
	BOOL mProcessChangesFiltering;
	BOOL mTabsVisible;
	BOOL mTableNameVisibilityIsValid;
	BOOL mTableNameVisible;
	BOOL mNewCanvasRevealedHorizontally;
	BOOL mNewCanvasRevealedVertically;
	BOOL mLayoutDirectionIsLeftToRight;
	TSTLayoutSpaceBundle* mSpaceBundle;
	SCD_Struct_TS621 mCached;
	CGRect mRenderingFrameForLayoutGeometryFromInfo;
	TSWPLayout* mContainedTextEditingLayout;
	NSMutableDictionary* mAttachmentCellLayouts;
	UIEdgeInsets mCachedPaddingForEditingCell;
	CGRect mComputedEditingCellContentFrame;
	int mCachedVerticalAlignmentForEditingCell;
	CGSize mAdjustableTableSize;
	CGSize mFixedTableSize;
	CGSize mCapturedStrokeFrameSizeForInline;
	TSUCellRect mEditingSpillingTextRange;
	TSUCellRect mPrevEditingSpillingTextRange;
	int mContainedTextEditorParagraphAlignment;
	BOOL mContainedTextEditorTextWraps;
	BOOL mRemovingContainedTextEditorLayout;
	BOOL mContainedTextEditorSpills;
	CGSize mSpillingTextSize;
	int mCoordinatesChangedMaskForChrome;
	BOOL mShouldUpdateAttachmentChildren;
	unsigned long long mPageCount;
	unsigned long long mPageNumber;

}

@property (nonatomic,readonly) TSTInfo * tableInfo; 
@property (nonatomic,readonly) TSTTableModel * tableModel; 
@property (nonatomic,retain) TSTMasterLayout * masterLayout; 
@property (nonatomic,retain) TSTLayoutHint * layoutHint; 
@property (nonatomic,retain) TSTLayoutSpaceBundle * spaceBundle; 
@property (assign,nonatomic) BOOL processChangesFiltering; 
@property (assign,nonatomic) BOOL newCanvasRevealedHorizontally; 
@property (assign,nonatomic) BOOL newCanvasRevealedVertically; 
@property (nonatomic,readonly) BOOL layoutDirectionIsLeftToRight; 
@property (assign,nonatomic) CGSize scaleToFit; 
@property (nonatomic,retain) TSWPLayout * containedTextEditingLayout; 
@property (nonatomic,readonly) UIEdgeInsets paddingForEditingCell; 
@property (nonatomic,readonly) CGRect computedEditingCellContentFrame; 
@property (nonatomic,readonly) TSUCellRect editingSpillingTextRange; 
@property (assign,nonatomic) TSUCellRect prevEditingSpillingTextRange; 
@property (nonatomic,readonly) unsigned long long pageNumber; 
@property (nonatomic,readonly) unsigned long long pageCount; 
@property (nonatomic,readonly) TSWPPadding * layoutMargins; 
@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) BOOL alwaysStartsNewTarget; 
@property (nonatomic,readonly) BOOL shrinkTextToFit; 
@property (nonatomic,readonly) BOOL columnsAreLeftToRight; 
@property (nonatomic,readonly) double textScaleFactor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)adjustRect:(CGRect)arg1 forScrollingToSelectionPath:(id)arg2 forZoom:(BOOL)arg3 ;
-(double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double*)arg4 outGap:(double*)arg5 ;
-(CGSize)adjustedInsetsForTarget:(id)arg1 ;
-(double)viewScaleForZoomingToSelectionPath:(id)arg1 targetPointSize:(double)arg2 ;
-(CGPoint)activityLineUnscaledEndPointForSearchReference:(id)arg1 ;
-(BOOL)canvasShouldScrollForSelectionPath:(id)arg1 ;
-(void)iterateCellsInRange:(TSUCellRect)arg1 flags:(unsigned long long)arg2 searchFlags:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)cellIteratorWithRange:(TSUCellRect)arg1 flags:(unsigned long long)arg2 searchFlags:(unsigned long long)arg3 ;
-(void)iterateCellsAndTerminateWithIterator:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)invalidateLayoutSpaceTableOffsets;
-(void)removeAttachmentCellLayouts;
-(void)invalidateLayoutSpaceCoordinates;
-(void)validatePageNumberCount;
-(void)invalidateLayoutSpaceCoordinatesAfterColumn:(unsigned char)arg1 ;
-(void)invalidateLayoutSpaceCoordinatesAfterRow:(unsigned short)arg1 ;
-(BOOL)isStrokeEditing;
-(int)naturalAlignmentForCellID:(TSUCellCoord)arg1 ;
-(TSUCellRect)p_maximumSpillRangeForCellID:(TSUCellCoord)arg1 ;
-(TSUCellRect)p_spillRangeToRightForCellID:(TSUCellCoord)arg1 ;
-(void)p_prepareAttachmentCells;
-(CGRect)p_nonAutosizedFrameForTextEditingLayout:(id)arg1 ;
-(CGRect)p_nonAutosizedFrameForRichTextLayout:(id)arg1 ;
-(CGRect)p_autosizedFrameForTextEditingLayout:(id)arg1 textSize:(CGSize)arg2 ;
-(CGRect)p_autosizedFrameForRichTextLayout:(id)arg1 textSize:(CGSize)arg2 ;
-(CGRect)p_maskRectForTextEditingLayout:(id)arg1 ;
-(CGRect)p_maskRectForRichTextLayout:(id)arg1 ;
-(TSUCellRect)p_spillRangeForMaskingRichTextLayout:(id)arg1 ;
-(void)bezierPathsForCellRegion:(id)arg1 selectionMask:(unsigned)arg2 transform:(CGAffineTransform)arg3 viewScale:(double)arg4 inset:(double)arg5 clipToVisibleRect:(BOOL)arg6 block:(/*^block*/id)arg7 ;
-(CGRect)p_textFrameForWrappingCell:(TSUCellCoord)arg1 defaultRowHeight:(BOOL*)arg2 ;
-(TSUCellCoord)p_cellIDForWPLayout:(id)arg1 ;
-(CGRect)p_computeSpillingTextFrameForEditingLayout:(id)arg1 textSize:(CGSize)arg2 editingSpillRange:(TSUCellRect*)arg3 ;
-(TSUCellRect)prevEditingSpillingTextRange;
-(void)setPrevEditingSpillingTextRange:(TSUCellRect)arg1 ;
-(void)invalidate;
-(void)setNeedsDisplay;
-(void)dealloc;
-(TSWPPadding *)layoutMargins;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(unsigned long long)pageCount;
-(id)children;
-(void)validate;
-(unsigned long long)pageNumber;
-(BOOL)isDraggable;
-(unsigned long long)columnCount;
-(BOOL)orderedBefore:(id)arg1 ;
-(BOOL)inPrintPreviewMode;
-(id)initWithInfo:(id)arg1 ;
-(BOOL)supportsRotation;
-(void)updateChildrenFromInfo;
-(id)dependentLayouts;
-(void)invalidateSize;
-(void)invalidatePosition;
-(CGPoint)capturedInfoPositionForAttachment;
-(id)computeLayoutGeometry;
-(CGRect)alignmentFrame;
-(id)layoutGeometryFromInfo;
-(CGSize)maximumFrameSizeForChild:(id)arg1 ;
-(CGPoint)calculatePointFromSearchReference:(id)arg1 ;
-(CGPoint)infoGeometryPositionForCurrentAttachedLayoutGeometry;
-(BOOL)resizeMayChangeAspectRatio;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(BOOL)isBeingManipulated;
-(id)initialInfoGeometry;
-(id)inspectorGeometry;
-(void)offsetGeometryBy:(CGPoint)arg1 ;
-(BOOL)canRotateChildLayout:(id)arg1 ;
-(int)wrapFitType;
-(BOOL)inFindReplaceMode;
-(BOOL)textIsVertical;
-(unsigned)autosizeFlagsForTextLayout:(id)arg1 ;
-(int)verticalAlignmentForTextLayout:(id)arg1 ;
-(void)invalidateForAutosizingTextLayout:(id)arg1 ;
-(CGRect)nonAutosizedFrameForTextLayout:(id)arg1 ;
-(CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2 ;
-(id)dependentsOfTextLayout:(id)arg1 ;
-(Class)repClassForTextLayout:(id)arg1 ;
-(double)maxAutoGrowWidthForTextLayout:(id)arg1 ;
-(CGRect)maskRectForTextLayout:(id)arg1 ;
-(int)naturalAlignmentForTextLayout:(id)arg1 ;
-(CGSize)initialTextSize;
-(double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(BOOL)alwaysStartsNewTarget;
-(BOOL)shrinkTextToFit;
-(BOOL)columnsAreLeftToRight;
-(TSTInfo *)tableInfo;
-(CGSize)scaleToFit;
-(TSTTableModel *)tableModel;
-(TSTMasterLayout *)masterLayout;
-(TSUCellRect)editingSpillingTextRange;
-(BOOL)newCanvasRevealedVertically;
-(void)setNewCanvasRevealedVertically:(BOOL)arg1 ;
-(BOOL)newCanvasRevealedHorizontally;
-(void)setNewCanvasRevealedHorizontally:(BOOL)arg1 ;
-(TSTLayoutSpaceBundle *)spaceBundle;
-(TSTLayoutHint *)layoutHint;
-(BOOL)layoutDirectionIsLeftToRight;
-(BOOL)p_getLayoutDirectionLeftToRight;
-(void)setScaleToFit:(CGSize)arg1 ;
-(id)initWithInfo:(id)arg1 layoutHint:(id)arg2 ;
-(void)removeContainedTextEditingLayout;
-(void)validateTableNameVisibility;
-(TSWPLayout *)containedTextEditingLayout;
-(BOOL)isZoomedEditing;
-(void)setupContainedTextEditingLayout:(TSUCellCoord)arg1 ;
-(void)p_updateCachedStyleInformationFromCellID:(TSUCellCoord)arg1 ;
-(int)p_defaultAlignmentForTableWritingDirection;
-(CGRect)computedEditingCellContentFrame;
-(BOOL)p_layoutWhollyContainsGridRange:(SCD_Struct_TS623)arg1 ;
-(CGSize)p_rangeUpAndLeftOfIntersectionRangeOfGridRange:(SCD_Struct_TS623)arg1 ;
-(void)invalidateTableNameVisibility;
-(void)setLayoutHint:(TSTLayoutHint *)arg1 ;
-(int)reapCoordinatesChangedMaskForChrome;
-(void)setContainedTextEditingLayout:(TSWPLayout *)arg1 ;
-(UIEdgeInsets)paddingForEditingCell;
-(void)setSpaceBundle:(TSTLayoutSpaceBundle *)arg1 ;
-(void)setMasterLayout:(TSTMasterLayout *)arg1 ;
-(BOOL)processChangesFiltering;
-(void)setProcessChangesFiltering:(BOOL)arg1 ;
@end
