/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>
#import <UIKit/UIManagedConfigurationRestrictableActivity.h>
#import <UIKit/UIPrintInteractionControllerActivityDelegate.h>

@class NSString, UIViewController, UIWindow;

@interface UIPrintActivity : UIActivity <UIManagedConfigurationRestrictableActivity, UIPrintInteractionControllerActivityDelegate> {

	BOOL _sourceIsManaged;
	NSString* _sourceApplicationBundleID;
	UIViewController* _wrapperViewController;
	UIWindow* _windowHoldingActivityViewController;

}

@property (retain) UIViewController * wrapperViewController;                    //@synthesize wrapperViewController=_wrapperViewController - In the implementation block
@property (retain) UIWindow * windowHoldingActivityViewController;              //@synthesize windowHoldingActivityViewController=_windowHoldingActivityViewController - In the implementation block
@property (assign,nonatomic) BOOL sourceIsManaged;                              //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleID;                //@synthesize sourceApplicationBundleID=_sourceApplicationBundleID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_xpcAttributes;
-(BOOL)sourceIsManaged;
-(id)activityTitle;
-(void)activityDidFinish:(BOOL)arg1 ;
-(id)activityType;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(NSString *)sourceApplicationBundleID;
-(id)printInteractionController;
-(void)setSourceIsManaged:(BOOL)arg1 ;
-(void)setSourceApplicationBundleID:(NSString *)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)_embeddedActivityViewController;
-(id)_activityImage;
-(id)printInteractionControllerParentViewController:(id)arg1 ;
-(id)printInteractionControllerWindowForPresentation:(id)arg1 ;
-(void)setWindowHoldingActivityViewController:(UIWindow *)arg1 ;
-(void)setWrapperViewController:(UIViewController *)arg1 ;
-(UIWindow *)windowHoldingActivityViewController;
-(void)cancelPrintOptions;
-(UIViewController *)wrapperViewController;
@end
