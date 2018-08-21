/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <TSReading/TSReading-Structs.h>
@class NSObject;

@interface TSTMergeRangeSortedSet : NSObject {

	set<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::__1::allocator<TSTMergeRangeElem> >* mSet;
	tree_const_iterator<TSTMergeRangeElem, std::__1::__tree_node<TSTMergeRangeElem, void *> *, long>* mIter;
	NSObject*<OS_dispatch_semaphore> mSem;

}
-(id)init;
-(unsigned long long)count;
-(void)dealloc;
-(void)reset;
-(SCD_Struct_TS141)begin;
-(void)addRange:(SCD_Struct_TS141)arg1 andSize:(CGSize)arg2 andPaddingInsets:(UIEdgeInsets)arg3 andIsCheckbox:(BOOL)arg4 ;
-(SCD_Struct_TS141)iter;
-(CGSize)getSize;
-(BOOL)isCheckbox;
-(UIEdgeInsets)getPaddingInsets;
@end
