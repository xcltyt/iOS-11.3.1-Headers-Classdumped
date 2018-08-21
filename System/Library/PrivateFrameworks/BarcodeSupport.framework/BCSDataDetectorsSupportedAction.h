/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BarcodeSupport/BarcodeSupport-Structs.h>
#import <BarcodeSupport/BCSAction.h>
#import <libobjc.A.dylib/BCSActionDelegate.h>

@class NSArray, DDScannerResult, CNContact, NSString;

@interface BCSDataDetectorsSupportedAction : BCSAction <BCSActionDelegate> {

	NSArray* _actions;
	DDScannerResult* _scannerResult;
	CNContact* _contact;
	NSString* _icsString;

}

@property (nonatomic,readonly) DDScannerResult * scannerResult;              //@synthesize scannerResult=_scannerResult - In the implementation block
@property (nonatomic,copy,readonly) CNContact * contact;                     //@synthesize contact=_contact - In the implementation block
@property (nonatomic,copy,readonly) NSString * icsString;                    //@synthesize icsString=_icsString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)url;
-(id)initWithData:(id)arg1 ;
-(void)performDefaultAction;
-(CNContact *)contact;
-(id)actionPickerItems;
-(id)localizedDefaultActionDescription;
-(id)defaultActionTargetApplicationBundleIdentifier;
-(void)performAction;
-(NSString *)icsString;
-(void)determineActionabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)localizedActionDescription;
-(id)debugDescriptionExtraInfoDictionary;
-(DDScannerResult *)scannerResult;
-(void)_performActionAndShowActionPickerIfNeeded:(BOOL)arg1 ;
-(id)_actionStringsArray;
@end
