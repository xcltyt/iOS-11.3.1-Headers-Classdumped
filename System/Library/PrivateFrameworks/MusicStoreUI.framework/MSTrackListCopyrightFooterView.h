/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicStoreUI/MusicStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString;

@interface MSTrackListCopyrightFooterView : UIView {

	CGSize _textSize;
	NSString* _text;

}

@property (nonatomic,retain) NSString * text;              //@synthesize text=_text - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)sizeToFit;
-(CGSize)_textSize;
@end
