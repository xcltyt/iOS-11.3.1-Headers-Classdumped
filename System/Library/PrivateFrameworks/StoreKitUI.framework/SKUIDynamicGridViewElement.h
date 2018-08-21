/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIGridViewElement.h>

@class NSMutableDictionary;

@interface SKUIDynamicGridViewElement : SKUIGridViewElement {

	BOOL _hasValidTemplateDefinitionMap;
	NSMutableDictionary* _templateDefinitionTypeToModeValueMap;
	long long _minimumEntityCountForSections;

}

@property (nonatomic,readonly) BOOL hasSectionHeaders; 
@property (getter=isMalformed,nonatomic,readonly) BOOL malformed; 
@property (nonatomic,readonly) long long minimumEntityCountForSections;              //@synthesize minimumEntityCountForSections=_minimumEntityCountForSections - In the implementation block
-(BOOL)allowsMultipleSelectionDuringEditing;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(BOOL)isDynamicContainer;
-(id)templateDefinitionViewElementsForType:(id)arg1 mode:(id)arg2 ;
-(id)bestTemplateDefinitionViewElementFromTemplateDefinitionViewElements:(id)arg1 entityValueProvider:(id)arg2 ;
-(long long)minimumEntityCountForSections;
-(BOOL)hasSectionHeaders;
-(id)_templateDefinitionTypeToModeValueMap;
-(void)_unfilteredEnumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isMalformed;
@end
