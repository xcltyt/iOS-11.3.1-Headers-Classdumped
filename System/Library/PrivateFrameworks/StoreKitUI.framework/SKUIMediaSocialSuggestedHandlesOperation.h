/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVComplexOperation.h>

@class SKUIClientContext, NSLock, NSArray;

@interface SKUIMediaSocialSuggestedHandlesOperation : SSVComplexOperation {

	SKUIClientContext* _clientContext;
	NSLock* _lock;
	/*^block*/id _outputBlock;
	NSArray* _words;

}

@property (copy) id outputBlock; 
@property (copy) NSArray * words; 
-(void)main;
-(void)setWords:(NSArray *)arg1 ;
-(NSArray *)words;
-(void)setOutputBlock:(id)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(id)outputBlock;
@end
