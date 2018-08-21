/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSDEditableBezierPathSource, TSUPointerKeyDictionary;

@interface TSDEditableBezierPathSourceMorphInfo : NSObject {

	TSDEditableBezierPathSource* mOriginal;
	TSDEditableBezierPathSource* mSmoothOriginal;
	TSUPointerKeyDictionary* mOriginalNodeIndexMapping;

}

@property (nonatomic,retain) TSDEditableBezierPathSource * original; 
@property (nonatomic,retain) TSDEditableBezierPathSource * smoothOriginal; 
-(TSDEditableBezierPathSource *)original;
-(id)initWithEditableBezierPathSource:(id)arg1 ;
-(id)originalNodeForNode:(id)arg1 ;
-(unsigned long long)originalSubpathIndexForNode:(id)arg1 ;
-(unsigned long long)originalNodeIndexForNode:(id)arg1 ;
-(id)originalSmoothNodeForNode:(id)arg1 ;
-(TSDEditableBezierPathSource *)smoothOriginal;
-(void)setSmoothOriginal:(TSDEditableBezierPathSource *)arg1 ;
-(void)dealloc;
-(void)setOriginal:(TSDEditableBezierPathSource *)arg1 ;
@end
