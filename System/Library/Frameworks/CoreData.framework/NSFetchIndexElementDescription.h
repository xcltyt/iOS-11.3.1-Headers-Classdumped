/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSPropertyDescription, NSString, NSFetchIndexDescription;

@interface NSFetchIndexElementDescription : NSObject <NSSecureCoding, NSCoding> {

	NSPropertyDescription* _property;
	NSString* _propertyName;
	unsigned long long _collationType;
	NSFetchIndexDescription* _indexDescription;
	struct {
		unsigned _ascending : 1;
		unsigned _propertyIsRetained : 1;
		unsigned _reservedEntityDescription : 30;
	}  _indexElementDescriptionFlags;

}

@property (retain,readonly) NSPropertyDescription * property; 
@property (retain,readonly) NSString * propertyName;                                    //@synthesize propertyName=_propertyName - In the implementation block
@property (assign) unsigned long long collationType; 
@property (getter=isAscending) BOOL ascending; 
@property (nonatomic,readonly) NSFetchIndexDescription * indexDescription; 
+(BOOL)supportsSecureCoding;
-(void)_setAscending:(BOOL)arg1 ;
-(void)_throwIfNotEditable;
-(id)initWithPropertyName:(id)arg1 collationType:(unsigned long long)arg2 ;
-(id)initWithProperty:(id)arg1 collationType:(unsigned long long)arg2 ;
-(unsigned long long)collationType;
-(id)initWithPropertyName:(id)arg1 property:(id)arg2 collationType:(unsigned long long)arg3 ascending:(BOOL)arg4 ;
-(void)_setIndexDescription:(id)arg1 ;
-(NSFetchIndexDescription *)indexDescription;
-(void)_validateCollationType:(unsigned long long)arg1 forProperty:(id)arg2 ;
-(id)_resolveProperty;
-(void)setCollationType:(unsigned long long)arg1 ;
-(void)setAscending:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)propertyName;
-(BOOL)isAscending;
-(NSPropertyDescription *)property;
-(BOOL)_isEditable;
@end
