/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPPageRep.h>

@interface TNPageRep : TSWPPageRep {

	CGRect _shadowPathRect;
	CGPathRef _shadowPath;

}
-(void)dealloc;
-(BOOL)isOpaque;
-(void)drawInContext:(CGContextRef)arg1 ;
-(BOOL)directlyManagesLayerContent;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
@end
