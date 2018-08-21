/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CompassUI/CompassUI-Structs.h>
@class CompassImageNode;

@interface CompassAtlasManifest : NSObject {

	CompassImageNode* _rootNode;
	map<std::__1::basic_string<char>, CGRect, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, CGRect> > >* _items;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;              //@synthesize size=_size - In the implementation block
-(CGSize)size;
-(id)initWithSize:(CGSize)arg1 ;
-(CGRect)addItem:(id)arg1 size:(CGSize)arg2 ;
-(CGRect)boundsForItem:(id)arg1 ;
@end
