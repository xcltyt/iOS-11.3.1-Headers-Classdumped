/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 9:31:57 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/AccessibilityBundles/AssistiveTouch.axuiservice/AssistiveTouch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXUIAlertDelegate.h>
#import <libobjc.A.dylib/AXUIService.h>

@class HNDScannerInputViewController, NSString;

@interface HNDUIServer : NSObject <AXUIAlertDelegate, AXUIService> {

	HNDScannerInputViewController* _scannerInputViewController;
	NSString* _lastShownAlertIdentifier;
	NSString* _lastShownBannerIdentifier;

}

@property (nonatomic,retain) HNDScannerInputViewController * scannerInputViewController;              //@synthesize scannerInputViewController=_scannerInputViewController - In the implementation block
@property (nonatomic,copy) NSString * lastShownAlertIdentifier;                                       //@synthesize lastShownAlertIdentifier=_lastShownAlertIdentifier - In the implementation block
@property (nonatomic,copy) NSString * lastShownBannerIdentifier;                                      //@synthesize lastShownBannerIdentifier=_lastShownBannerIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)hideContentViewController;
-(HNDScannerInputViewController *)scannerInputViewController;
-(void)setScannerInputViewController:(HNDScannerInputViewController *)arg1 ;
-(NSString *)lastShownAlertIdentifier;
-(NSString *)lastShownBannerIdentifier;
-(void)showContentViewController;
-(void)setLastShownAlertIdentifier:(NSString *)arg1 ;
-(void)setLastShownBannerIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4 ;
-(void)connectionWillBeInterruptedForClientWithIdentifier:(id)arg1 ;
-(double)desiredWindowLevelForAlertWithIdentifier:(id)arg1 ;
@end
