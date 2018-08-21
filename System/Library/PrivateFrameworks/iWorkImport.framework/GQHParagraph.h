/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface GQHParagraph : NSObject
+(int)handleParagraph:(id)arg1 state:(id)arg2 bulletStates:(CFDictionaryRef)arg3 isMultiColumn:(BOOL)arg4 ;
+(int)mapParagraphStyle:(id)arg1 paragraph:(id)arg2 state:(id)arg3 bulletStates:(CFDictionaryRef)arg4 isMultiColumn:(BOOL)arg5 ;
+(int)handleInlineList:(id)arg1 state:(id)arg2 ;
+(int)handleLink:(id)arg1 state:(id)arg2 ;
+(int)handleBookmark:(id)arg1 state:(id)arg2 ;
+(id)getBulletStyle:(id)arg1 level:(int)arg2 ;
+(BOOL)retrieveFontSizeForFirstCharacter:(id)arg1 fontSize:(float*)arg2 ;
+(BOOL)setupBulletStatesForParagraphStyle:(id)arg1 paragraph:(id)arg2 state:(id)arg3 bulletStates:(CFDictionaryRef)arg4 ;
+(CFDictionaryRef)prepareBullet:(id)arg1 paragraph:(id)arg2 style:(id)arg3 state:(id)arg4 bulletStates:(CFDictionaryRef)arg5 showBullet:(BOOL)arg6 ;
+(void)mapBullet:(CFDictionaryRef)arg1 state:(id)arg2 ;
@end
