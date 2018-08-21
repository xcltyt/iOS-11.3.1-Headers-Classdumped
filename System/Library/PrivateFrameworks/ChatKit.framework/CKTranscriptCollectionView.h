/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKEditableCollectionView.h>

@interface CKTranscriptCollectionView : CKEditableCollectionView {

	BOOL _ignoresContentOffsetChanges;
	BOOL _dynamicsDisabled;

}

@property (assign,nonatomic) BOOL ignoresContentOffsetChanges;              //@synthesize ignoresContentOffsetChanges=_ignoresContentOffsetChanges - In the implementation block
@property (assign,nonatomic) BOOL dynamicsDisabled;                         //@synthesize dynamicsDisabled=_dynamicsDisabled - In the implementation block
-(void)layoutSubviews;
-(void)setContentSize:(CGSize)arg1 ;
-(void)reloadData;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setDynamicsDisabled:(BOOL)arg1 ;
-(void)setIgnoresContentOffsetChanges:(BOOL)arg1 ;
-(BOOL)ignoresContentOffsetChanges;
-(BOOL)dynamicsDisabled;
@end
