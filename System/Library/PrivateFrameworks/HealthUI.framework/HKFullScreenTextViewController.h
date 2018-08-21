/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSString, UITextView;

@interface HKFullScreenTextViewController : UIViewController {

	NSString* _detailText;

}

@property (readonly) UITextView * textView; 
@property (nonatomic,retain) NSString * detailText;              //@synthesize detailText=_detailText - In the implementation block
-(id)description;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UITextView *)textView;
-(NSString *)detailText;
-(void)setDetailText:(NSString *)arg1 ;
-(void)createTextView;
@end
