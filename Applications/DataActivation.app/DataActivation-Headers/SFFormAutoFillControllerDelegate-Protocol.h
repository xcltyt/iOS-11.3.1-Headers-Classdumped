//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, _SFFormAutoFillController;

@protocol SFFormAutoFillControllerDelegate <NSObject>
- (_Bool)formAutoFillControllerShouldDisableAutoFill:(_SFFormAutoFillController *)arg1;
- (NSURL *)formAutoFillControllerURLForFormAutoFill:(_SFFormAutoFillController *)arg1;
- (_Bool)formAutoFillControllerCanPrefillForm:(_SFFormAutoFillController *)arg1;

@optional
- (void)formAutoFillControllerGetAuthenticationForAutoFill:(_SFFormAutoFillController *)arg1 onPageLoad:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (void)formAutoFillControllerGetAuthenticationForAutoFillOnPageLoad:(_SFFormAutoFillController *)arg1 completion:(void (^)(_Bool))arg2;
@end

