/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@protocol HFServiceLikeBuilder;
@class HMHome, HFItemBuilder, HFRoomBuilderItem;

@interface HFSelectedRoomItemProvider : HFItemProvider {

	/*^block*/id _filter;
	HMHome* _home;
	HFItemBuilder*<HFServiceLikeBuilder> _serviceLikeBuilder;
	HFRoomBuilderItem* _roomBuilderItem;

}

@property (nonatomic,retain) HFItemBuilder*<HFServiceLikeBuilder> serviceLikeBuilder;              //@synthesize serviceLikeBuilder=_serviceLikeBuilder - In the implementation block
@property (nonatomic,retain) HFRoomBuilderItem * roomBuilderItem;                                  //@synthesize roomBuilderItem=_roomBuilderItem - In the implementation block
@property (nonatomic,copy) id filter;                                                              //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                      //@synthesize home=_home - In the implementation block
-(HMHome *)home;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)items;
-(id)filter;
-(void)setFilter:(id)arg1 ;
-(id)initWithHome:(id)arg1 serviceLikeBuilder:(id)arg2 ;
-(HFItemBuilder*<HFServiceLikeBuilder>)serviceLikeBuilder;
-(HFRoomBuilderItem *)roomBuilderItem;
-(void)setRoomBuilderItem:(HFRoomBuilderItem *)arg1 ;
-(void)setServiceLikeBuilder:(HFItemBuilder*<HFServiceLikeBuilder>)arg1 ;
-(id)invalidationReasons;
-(id)reloadItems;
@end
