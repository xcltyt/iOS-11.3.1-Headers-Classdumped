/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXAdControllerContainer.h>

@protocol SXAdControllerContainer <SXAdControllerProvider>
@required
-(void)registerAdController:(id)arg1;

@end


@class SXAdController, NSString;

@interface SXAdControllerContainer : NSObject <SXAdControllerContainer> {

	SXAdController* _adController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXAdController * adController;              //@synthesize adController=_adController - In the implementation block
-(SXAdController *)adController;
-(void)registerAdController:(id)arg1 ;
@end
