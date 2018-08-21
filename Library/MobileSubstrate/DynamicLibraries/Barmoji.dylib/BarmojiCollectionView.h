/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 11:44:59 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /Library/MobileSubstrate/DynamicLibraries/Barmoji.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Barmoji.dylib/Barmoji.dylib-Structs.h>
#import <UIKit/UICollectionView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class UIKeyboardEmojiKeyDisplayController, NSArray, NSString;

@interface BarmojiCollectionView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegate> {

	int _feedbackType;
	UIKeyboardEmojiKeyDisplayController* _emojiManager;
	NSArray* _recentEmojis;

}

@property (nonatomic,retain) UIKeyboardEmojiKeyDisplayController * emojiManager;              //@synthesize emojiManager=_emojiManager - In the implementation block
@property (nonatomic,retain) NSArray * recentEmojis;                                          //@synthesize recentEmojis=_recentEmojis - In the implementation block
@property (assign,nonatomic) int feedbackType;                                                //@synthesize feedbackType=_feedbackType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRecentEmojis:(NSArray *)arg1 ;
-(UIKeyboardEmojiKeyDisplayController *)emojiManager;
-(void)setEmojiManager:(UIKeyboardEmojiKeyDisplayController *)arg1 ;
-(void)setFeedbackType:(int)arg1 ;
-(int)feedbackType;
-(id)init;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(NSArray *)recentEmojis;
@end
