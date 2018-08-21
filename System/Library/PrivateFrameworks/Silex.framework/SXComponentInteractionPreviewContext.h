/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXComponentInteractionPreviewContext.h>
@class UIViewController;


@protocol SXComponentInteractionPreviewContext <NSObject>
@property (nonatomic,readonly) UIViewController * viewController; 
@property (nonatomic,readonly) CGRect sourceRect; 
@required
-(CGRect)sourceRect;
-(UIViewController *)viewController;

@end


@class UIViewController, NSString;

@interface SXComponentInteractionPreviewContext : NSObject <SXComponentInteractionPreviewContext> {

	UIViewController* _viewController;
	CGRect _sourceRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) CGRect sourceRect;                              //@synthesize sourceRect=_sourceRect - In the implementation block
-(CGRect)sourceRect;
-(UIViewController *)viewController;
-(id)initWithViewController:(id)arg1 sourceRect:(CGRect)arg2 ;
@end
