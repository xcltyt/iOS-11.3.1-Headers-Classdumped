/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CompassUI/CompassUI-Structs.h>
@class CompassAtlasManifest;

@interface CompassAtlas : NSObject {

	unsigned _texName;
	CompassAtlasManifest* _manifest;
	CGSize _size;

}
-(void)dealloc;
-(void)bind;
-(id)initWithImageData:(char*)arg1 manifest:(id)arg2 ;
-(SCD_Struct_Co12)metadataForImageNamed:(id)arg1 ;
@end
