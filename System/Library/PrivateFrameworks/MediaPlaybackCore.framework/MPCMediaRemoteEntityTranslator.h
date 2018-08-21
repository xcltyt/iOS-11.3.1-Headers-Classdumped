/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MPCMediaRemoteEntityTranslator : NSObject {

	NSMutableDictionary* _propertiesToTranslators;
	NSMutableDictionary* _relationshipsToTranslators;
	Class _MPModelClass;

}

@property (nonatomic,readonly) Class MPModelClass;              //@synthesize MPModelClass=_MPModelClass - In the implementation block
+(id)translatorForMPModelClass:(Class)arg1 ;
+(id)_translatorForMPModelClass:(Class)arg1 create:(BOOL)arg2 ;
+(id)_translatorForMPModelClass:(Class)arg1 ;
-(id)_propertyTranslatorForKeyPath:(id)arg1 ;
-(Class)MPModelClass;
-(id)objectForPropertySet:(id)arg1 contentItem:(id)arg2 middleware:(id)arg3 ;
-(void)mapPropertyKey:(id)arg1 toValueTransformer:(/*^block*/id)arg2 ;
-(id)objectForPropertySet:(id)arg1 contentItem:(id)arg2 middleware:(id)arg3 baseTranslator:(id)arg4 prependKeyPath:(id)arg5 ;
-(id)_valueForKeyPath:(id)arg1 forContentItem:(id)arg2 middleware:(id)arg3 ;
-(void)mapIdentifierCreationBlock:(/*^block*/id)arg1 ;
-(void)mapPropertyKey:(id)arg1 toMPContentItemSelector:(SEL)arg2 ;
-(void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 ;
-(id)identifiersForContentItem:(id)arg1 middleware:(id)arg2 ;
@end
