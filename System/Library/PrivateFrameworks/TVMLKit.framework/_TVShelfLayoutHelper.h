/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class _TVShelfViewLayout;

@interface _TVShelfLayoutHelper : NSObject {

	long long _sectionCount;
	long long* _sectionOffsets;
	CGRect* _cellFrames;
	CGRect* _headerFrames;
	UIEdgeInsets* _sectionInsets;
	_TVShelfViewLayout* _shelfViewLayout;
	long long _actualRowCount;
	double _tallestInsetTop;
	double _tallestInsetBottom;
	double _tallestHeaderHeight;
	double _tallestColumnHeight;

}

@property (nonatomic,__weak,readonly) _TVShelfViewLayout * shelfViewLayout;              //@synthesize shelfViewLayout=_shelfViewLayout - In the implementation block
@property (nonatomic,readonly) long long actualRowCount;                                 //@synthesize actualRowCount=_actualRowCount - In the implementation block
@property (nonatomic,readonly) double tallestInsetTop;                                   //@synthesize tallestInsetTop=_tallestInsetTop - In the implementation block
@property (nonatomic,readonly) double tallestInsetBottom;                                //@synthesize tallestInsetBottom=_tallestInsetBottom - In the implementation block
@property (nonatomic,readonly) double tallestHeaderHeight;                               //@synthesize tallestHeaderHeight=_tallestHeaderHeight - In the implementation block
@property (nonatomic,readonly) double tallestColumnHeight;                               //@synthesize tallestColumnHeight=_tallestColumnHeight - In the implementation block
-(void)dealloc;
-(CGRect)frameForItemAtIndexPath:(id)arg1 ;
-(id)initWithShelfViewLayout:(id)arg1 ;
-(CGRect)frameForHeaderInSection:(long long)arg1 ;
-(UIEdgeInsets)insetForSection:(long long)arg1 ;
-(long long)actualRowCount;
-(double)tallestHeaderHeight;
-(double)tallestInsetTop;
-(double)tallestColumnHeight;
-(double)tallestInsetBottom;
-(void)_compute;
-(void)_freeBuffers;
-(_TVShelfViewLayout *)shelfViewLayout;
@end
