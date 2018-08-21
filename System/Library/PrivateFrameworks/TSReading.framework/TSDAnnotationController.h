/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TSDAnnotationController : NSObject

@property (nonatomic,readonly) BOOL hasAnnotations; 
@property (nonatomic,readonly) NSString * annotationNavigationString; 
@property (assign,nonatomic) BOOL textSelectionChangeShouldDismissAnnotations; 
-(BOOL)hasAnnotations;
-(void)nextAnnotation:(id)arg1 ;
-(void)previousAnnotation:(id)arg1 ;
-(id)annotationNavigationTypeStringUsedForNavigating:(BOOL)arg1 ;
-(NSString *)annotationNavigationString;
-(void)setTextSelectionChangeShouldDismissAnnotations:(BOOL)arg1 ;
-(BOOL)textSelectionChangeShouldDismissAnnotations;
-(void)registerDelegate:(id)arg1 ;
-(void)unregisterDelegate:(id)arg1 ;
-(void)willShowAnnotation:(id)arg1 ;
-(void)didShowAnnotation:(id)arg1 ;
-(void)commitCommentText:(id)arg1 forAnnotation:(id)arg2 ;
@end
