/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@interface ASMessagesProvider.SelectCategoryViewController : UINavigationController <UIPopoverPresentationControllerDelegate> {

	 selectionHandler;

}

@property (copy,nonatomic) id selectionHandler; 
-(void)presentFrom:(id)arg1 in:(id)arg2 animated:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
-(void)setSelectionHandler:(id)arg1 ;
-(id)selectionHandler;
@end
