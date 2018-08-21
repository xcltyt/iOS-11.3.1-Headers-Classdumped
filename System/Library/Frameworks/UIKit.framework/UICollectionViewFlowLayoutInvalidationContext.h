/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@interface UICollectionViewFlowLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	struct {
		unsigned invalidateDelegateMetrics : 1;
		unsigned invalidateAttributes : 1;
	}  _flowLayoutInvalidationFlags;

}

@property (assign,nonatomic) BOOL invalidateFlowLayoutDelegateMetrics; 
@property (assign,nonatomic) BOOL invalidateFlowLayoutAttributes; 
-(id)init;
-(void)setInvalidateFlowLayoutDelegateMetrics:(BOOL)arg1 ;
-(void)setInvalidateFlowLayoutAttributes:(BOOL)arg1 ;
-(BOOL)invalidateFlowLayoutAttributes;
-(BOOL)invalidateFlowLayoutDelegateMetrics;
@end
