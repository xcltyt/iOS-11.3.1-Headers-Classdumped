/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSTIntegerKeyDict : NSObject {

	hash_map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, TSTIntHasher, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject> > > >* mMap;

}
-(id)init;
-(long long)count;
-(id)objectForKey:(unsigned)arg1 ;
-(void)dealloc;
-(void)removeAllObjects;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(void)removeObjectForKey:(unsigned)arg1 ;
-(void)setObject:(id)arg1 forKey:(unsigned)arg2 ;
-(id)allValues;
-(void)transformWithFunction:(/*function pointer*/void*)arg1 withState:(void*)arg2 ;
-(void)removeFirstObject;
-(void)applyFunction:(/*function pointer*/void*)arg1 withState:(void*)arg2 ;
-(void)applyFunction:(/*function pointer*/void*)arg1 withState:(void*)arg2 andState:(void*)arg3 ;
@end
