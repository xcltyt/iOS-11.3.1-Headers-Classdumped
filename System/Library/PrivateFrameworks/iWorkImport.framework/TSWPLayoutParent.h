/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSWPLayoutParent
@optional
-(CGRect*)adjustRect:(CGRect)arg1 forScrollingToSelectionPath:(id)arg2 forZoom:(BOOL)arg3;
-(double)maxAutoGrowWidthForTextLayout:(id)arg1;
-(double)maxAutoGrowHeightForTextLayout:(id)arg1;
-(unsigned long long)initialCharIndex;
-(BOOL)textLayoutShouldWrapAroundExternalDrawables:(id)arg1;
-(BOOL)textLayoutShouldLayoutVertically:(id)arg1;
-(CGRect*)maskRectForTextLayout:(id)arg1;
-(int)naturalAlignmentForTextLayout:(id)arg1;
-(CGSize*)initialTextSize;
-(unsigned long long)pageCountForAttachment:(id)arg1;
-(unsigned long long)pageNumberForAttachment:(id)arg1;
-(id)styleProvider;

@required
-(unsigned)autosizeFlagsForTextLayout:(id)arg1;
-(int)verticalAlignmentForTextLayout:(id)arg1;
-(void)invalidateForAutosizingTextLayout:(id)arg1;
-(CGRect*)nonAutosizedFrameForTextLayout:(id)arg1;
-(CGRect*)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2;
-(id)dependentsOfTextLayout:(id)arg1;
-(Class)repClassForTextLayout:(id)arg1;

@end
