/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSURL;

@interface SAFmfVisibilityView : SAUISnippet

@property (nonatomic,copy) NSURL * searchContext; 
@property (assign,nonatomic) BOOL visible; 
+(id)visibilityView;
+(id)visibilityViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSURL *)searchContext;
-(void)setSearchContext:(NSURL *)arg1 ;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(id)encodedClassName;
@end
