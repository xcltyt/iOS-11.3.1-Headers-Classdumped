//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HFItemManager.h"

@class HFAssociatedServiceTypeOptionItemProvider, HFItem, HFItem<HFItemBuilderItem>, HFItemBuilder<HFServiceLikeBuilder>, HFStaticItemProvider, HFTransformItemProvider, HSSetupServiceSelectedRoomItemProvider, HUValveItemModule, NSArray, NSSet;

@interface HSSetupServiceItemManager : HFItemManager
{
    _Bool _showRoomsList;
    _Bool _showAssociatedServiceTypeList;
    HFItem<HFItemBuilderItem> *_builderItem;
    HFItemBuilder<HFServiceLikeBuilder> *_serviceLikeBuilder;
    HFItem *_nameAndIconItem;
    HFItem *_roomItem;
    HFItem *_associatedServiceTypeItem;
    HFItem *_createNewRoomItem;
    HFItem *_favoriteItem;
    HFTransformItemProvider *_existingRoomItemProvider;
    HFTransformItemProvider *_suggestedRoomItemProvider;
    HUValveItemModule *_valveItemModule;
    HFStaticItemProvider *_staticItemProvider;
    HSSetupServiceSelectedRoomItemProvider *_selectedRoomItemProvider;
    HFAssociatedServiceTypeOptionItemProvider *_associatedServiceTypeOptionItemProvider;
    NSArray *_valveItemSections;
}

@property(retain, nonatomic) NSArray *valveItemSections; // @synthesize valveItemSections=_valveItemSections;
@property(retain, nonatomic) HFAssociatedServiceTypeOptionItemProvider *associatedServiceTypeOptionItemProvider; // @synthesize associatedServiceTypeOptionItemProvider=_associatedServiceTypeOptionItemProvider;
@property(retain, nonatomic) HSSetupServiceSelectedRoomItemProvider *selectedRoomItemProvider; // @synthesize selectedRoomItemProvider=_selectedRoomItemProvider;
@property(retain, nonatomic) HFStaticItemProvider *staticItemProvider; // @synthesize staticItemProvider=_staticItemProvider;
@property(nonatomic) _Bool showAssociatedServiceTypeList; // @synthesize showAssociatedServiceTypeList=_showAssociatedServiceTypeList;
@property(nonatomic) _Bool showRoomsList; // @synthesize showRoomsList=_showRoomsList;
@property(retain, nonatomic) HUValveItemModule *valveItemModule; // @synthesize valveItemModule=_valveItemModule;
@property(retain, nonatomic) HFTransformItemProvider *suggestedRoomItemProvider; // @synthesize suggestedRoomItemProvider=_suggestedRoomItemProvider;
@property(retain, nonatomic) HFTransformItemProvider *existingRoomItemProvider; // @synthesize existingRoomItemProvider=_existingRoomItemProvider;
@property(retain, nonatomic) HFItem *favoriteItem; // @synthesize favoriteItem=_favoriteItem;
@property(retain, nonatomic) HFItem *createNewRoomItem; // @synthesize createNewRoomItem=_createNewRoomItem;
@property(retain, nonatomic) HFItem *associatedServiceTypeItem; // @synthesize associatedServiceTypeItem=_associatedServiceTypeItem;
@property(retain, nonatomic) HFItem *roomItem; // @synthesize roomItem=_roomItem;
@property(retain, nonatomic) HFItem *nameAndIconItem; // @synthesize nameAndIconItem=_nameAndIconItem;
@property(readonly, nonatomic) HFItemBuilder<HFServiceLikeBuilder> *serviceLikeBuilder; // @synthesize serviceLikeBuilder=_serviceLikeBuilder;
@property(readonly, nonatomic) HFItem<HFItemBuilderItem> *builderItem; // @synthesize builderItem=_builderItem;
- (void).cxx_destruct;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (_Bool)_shouldShowFavoriteSection;
- (_Bool)isRoomItem:(id)arg1;
- (void)updateBuilderUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSSet *allRoomSectionItems;
@property(readonly, nonatomic) HFItem *selectedAssociatedServiceTypeItem;
@property(readonly, nonatomic) HFItem *selectedRoomItem;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 builderItem:(id)arg2 serviceLikeBuilder:(id)arg3;

@end

