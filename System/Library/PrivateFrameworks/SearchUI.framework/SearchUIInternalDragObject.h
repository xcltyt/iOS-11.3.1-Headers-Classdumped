/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIItemProviderWriting.h>

@protocol SearchUIDragObject;
@class NSString, NSArray;

@interface SearchUIInternalDragObject : NSObject <UIItemProviderWriting> {

	id<SearchUIDragObject> _dragObject;

}

@property (retain) id<SearchUIDragObject> dragObject;                                              //@synthesize dragObject=_dragObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
+(id)writableTypeIdentifiersForItemProvider;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(NSArray *)writableTypeIdentifiersForItemProvider;
-(void)setDragObject:(id<SearchUIDragObject>)arg1 ;
-(id)initWithDragObject:(id)arg1 ;
-(BOOL)shouldShareDragURL;
-(id<SearchUIDragObject>)dragObject;
@end
