/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol MPMutableIdentifierListSection <NSObject>
@property (nonatomic,copy,readonly) NSArray * itemIdentifiers; 
@required
-(void)removeItem:(id)arg1;
-(void)insertItemsAtHead:(id)arg1;
-(void)insertItems:(id)arg1 afterItem:(id)arg2;
-(void)moveItemToHead:(id)arg1;
-(void)moveItem:(id)arg1 afterItem:(id)arg2;
-(void)insertItemsAtTail:(id)arg1;
-(void)moveItemToTail:(id)arg1;
-(void)applyChanges:(id)arg1 itemLookupBlock:(/*^block*/id)arg2;
-(void)updateItem:(id)arg1;
-(NSArray *)itemIdentifiers;

@end
