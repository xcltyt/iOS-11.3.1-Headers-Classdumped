/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, NSURL, SKUIImageViewElement, SKUILabelViewElement, SKUIURLViewElement;

@interface SKUIShareSheetActivityViewElement : SKUIViewElement {

	NSString* _activityType;
	NSURL* _contentSourceURL;

}

@property (nonatomic,readonly) NSString * activityType;                     //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) NSURL * contentSourceURL;                    //@synthesize contentSourceURL=_contentSourceURL - In the implementation block
@property (nonatomic,readonly) SKUIImageViewElement * image; 
@property (nonatomic,readonly) SKUILabelViewElement * message; 
@property (nonatomic,readonly) SKUILabelViewElement * title; 
@property (nonatomic,readonly) SKUIURLViewElement * URL; 
-(SKUILabelViewElement *)title;
-(SKUIImageViewElement *)image;
-(SKUIURLViewElement *)URL;
-(NSString *)activityType;
-(SKUILabelViewElement *)message;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(NSURL *)contentSourceURL;
@end
