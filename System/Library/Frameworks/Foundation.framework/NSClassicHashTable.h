/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSHashTable.h>

@interface NSClassicHashTable : NSHashTable {

	SCD_Struct_NS23* _callBacks;
	CFBasicHashRef _ht;

}
-(void*)getItem:(const void*)arg1 ;
-(void)insertKnownAbsentItem:(const void*)arg1 ;
-(void)getKeys:(const void*)arg1 count:(unsigned long long*)arg2 ;
-(void)insertItem:(const void*)arg1 ;
-(id)init;
-(id)copy;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)allObjects;
-(void)removeItem:(const void*)arg1 ;
-(void)removeAllItems;
@end
