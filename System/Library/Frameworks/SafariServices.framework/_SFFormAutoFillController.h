/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFFormMetadataObserver.h>
#import <libobjc.A.dylib/_SFAuthenticationClient.h>

@protocol WBUFormAutoFillWebView, SFFormAutoFillControllerDelegate, SFFormAutoFiller;
@class WKWebView, _WKRemoteObjectInterface, SFFormAutocompleteState, NSTimer, NSMutableIndexSet, NSMutableSet, _SFAutoFillAuthenticationCache, _SFAuthenticationContext, NSString;

@interface _SFFormAutoFillController : NSObject <SFFormMetadataObserver, _SFAuthenticationClient> {

	WKWebView*<WBUFormAutoFillWebView> _webView;
	id<SFFormAutoFillControllerDelegate> _delegate;
	_WKRemoteObjectInterface* _remoteObjectInterface;
	id<SFFormAutoFiller> _autoFiller;
	BOOL _isCurrentlyAuthenticating;
	SFFormAutocompleteState* _state;
	NSTimer* _prefillTimer;
	NSMutableIndexSet* _uniqueIDsOfFormsThatWereAutoFilled;
	NSMutableSet* _uniqueIDsOfControlsThatWereAutoFilled;
	BOOL _metadataCorrectionsEnabled;

}

@property (nonatomic,readonly) UIView*<WBUFormAutoFillWebView> webView; 
@property (assign,nonatomic) BOOL metadataCorrectionsEnabled;                                     //@synthesize metadataCorrectionsEnabled=_metadataCorrectionsEnabled - In the implementation block
@property (nonatomic,readonly) _SFAutoFillAuthenticationCache * authenticationCache; 
@property (nonatomic,readonly) _SFAuthenticationContext * authenticationContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)dealloc;
-(UIView*<WBUFormAutoFillWebView>)webView;
-(void)didCollectURLsForPreFilling:(id)arg1 atURL:(id)arg2 ;
-(void)didCollectFormMetadataForPreFilling:(id)arg1 atURL:(id)arg2 ancestorFramesOfFormToPreFill:(id)arg3 ;
-(void)textDidChangeInTextField:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 ;
-(void)didFillGeneratedPasswordInForm:(id)arg1 inFrame:(id)arg2 ;
-(void)willNavigateFrame:(id)arg1 withUnsubmittedForm:(id)arg2 loadingIsDeferred:(BOOL)arg3 ;
-(void)autoFillDidFinishWithUpdatedFormMetadata:(id)arg1 ;
-(void)autoFillForm:(long long)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3 ;
-(void)annotateForm:(long long)arg1 inFrame:(id)arg2 withValues:(id)arg3 ;
-(void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3 ;
-(void)setFormControls:(id)arg1 areAutoFilled:(BOOL)arg2 andClearField:(id)arg3 inFrame:(id)arg4 ;
-(void)_prefillTimerFired:(id)arg1 ;
-(void)_fieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4 ;
-(void)_removeUniqueIDsOfAutoFilledForm:(id)arg1 ;
-(void)authenticateForAutoFillOnPageLoad:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)usernameFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4 ;
-(void)passwordFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4 ;
-(void)textFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4 ;
-(void)willSubmitForm:(id)arg1 inFrame:(id)arg2 submissionHandler:(/*^block*/id)arg3 ;
-(void)_didCollectURLsForPreFilling:(id)arg1 atURL:(id)arg2 ;
-(_SFAutoFillAuthenticationCache *)authenticationCache;
-(void)_authenticateForAutoFillForHighLevelDomain:(id)arg1 onPageLoad:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_autoFillLoginFormSynchronouslyAndClearMetadata:(id)arg1 inFrame:(id)arg2 ;
-(void)_addUniqueIDsOfAutoFilledForm:(id)arg1 ;
-(id)authenticationCustomUIProgressObserverForContext:(id)arg1 ;
-(id)authenticationMessageForContext:(id)arg1 ;
-(id)initWithWebView:(id)arg1 delegate:(id)arg2 ;
-(void)prefillFormsSoonIfNeeded;
-(void)fetchMetadataForTextField:(id)arg1 inFrame:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(BOOL)arg3 andFocusField:(id)arg4 ;
-(void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(BOOL)arg3 focusFieldAfterFilling:(BOOL)arg4 fieldToFocus:(id)arg5 ;
-(void)fieldFocusedWithInputSession:(id)arg1 ;
-(void)willSubmitFormValues:(id)arg1 userObject:(id)arg2 submissionHandler:(/*^block*/id)arg3 ;
-(BOOL)metadataCorrectionsEnabled;
-(void)setMetadataCorrectionsEnabled:(BOOL)arg1 ;
-(_SFAuthenticationContext *)authenticationContext;
-(void)autoFill;
@end
