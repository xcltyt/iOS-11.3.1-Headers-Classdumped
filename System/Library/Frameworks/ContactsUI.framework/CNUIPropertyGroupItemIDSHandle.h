/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNUIIDSHandle.h>

@class NSString, CNPropertyGroupItem, CNUIContactPropertyIDSHandle;

@interface CNUIPropertyGroupItemIDSHandle : NSObject <CNUIIDSHandle> {

	CNPropertyGroupItem* _propertyGroupItem;
	CNUIContactPropertyIDSHandle* _contactPropertyHandle;

}

@property (nonatomic,readonly) CNUIContactPropertyIDSHandle * contactPropertyHandle;              //@synthesize contactPropertyHandle=_contactPropertyHandle - In the implementation block
@property (nonatomic,copy,readonly) CNPropertyGroupItem * propertyGroupItem;                      //@synthesize propertyGroupItem=_propertyGroupItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * _cnui_IDSIDRepresentation; 
+(BOOL)supportsPropertyGroupItem:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CNPropertyGroupItem *)propertyGroupItem;
-(id)initWithPropertyGroupItem:(id)arg1 ;
-(CNUIContactPropertyIDSHandle *)contactPropertyHandle;
-(NSString *)_cnui_IDSIDRepresentation;
@end
