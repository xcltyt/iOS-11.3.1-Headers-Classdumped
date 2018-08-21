/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewController.h>

@protocol SKUISwooshViewControllerDelegate;
@class SKUIClientContext, SKUIColorScheme;

@interface SKUISwooshViewController : UIViewController {

	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	id<SKUISwooshViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                 //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) SKUIColorScheme * colorScheme;                                       //@synthesize colorScheme=_colorScheme - In the implementation block
@property (assign,nonatomic,__weak) id<SKUISwooshViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SKUISwooshViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKUISwooshViewControllerDelegate>)arg1 ;
-(id)indexPathsForVisibleItems;
-(void)setImage:(id)arg1 forItemAtIndex:(long long)arg2 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(CGRect)frameForItemAtIndex:(long long)arg1 ;
-(void)deselectAllItems;
-(id)popImageViewForItemAtIndex:(long long)arg1 ;
-(void)unhideImages;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
@end
