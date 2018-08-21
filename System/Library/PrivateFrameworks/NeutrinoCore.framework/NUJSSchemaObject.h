/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUJSModelObject.h>

@class NUSchema;

@interface NUJSSchemaObject : NUJSModelObject

@property (nonatomic,readonly) NUSchema * schema; 
@property (nonatomic,readonly) id<NUIdentifiable> item; 
+(id)JSValueWithSchema:(id)arg1 identifiableItem:(id)arg2 context:(id)arg3 ;
-(id<NUIdentifiable>)item;
-(id)initWithModel:(id)arg1 representedObject:(id)arg2 context:(id)arg3 ;
-(id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
-(id)initWithWithSchema:(id)arg1 identifiableItem:(id)arg2 context:(id)arg3 ;
-(BOOL)hasProperty:(id)arg1 ;
-(NUSchema *)schema;
@end
