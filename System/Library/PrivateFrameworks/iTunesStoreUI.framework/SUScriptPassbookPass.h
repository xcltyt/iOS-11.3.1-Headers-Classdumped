/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class PKPass, NSString;

@interface SUScriptPassbookPass : SUScriptObject {

	PKPass* _pass;

}

@property (readonly) NSString * passTypeIdentifier; 
@property (readonly) NSString * passURL; 
@property (readonly) NSString * serialNumber; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)attributeKeys;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(id)_className;
-(NSString *)passURL;
-(id)initWithPass:(id)arg1 ;
-(NSString *)passTypeIdentifier;
-(NSString *)serialNumber;
@end
