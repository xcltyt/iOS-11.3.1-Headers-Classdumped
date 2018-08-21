/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKRasterTile.h>

@interface VKRasterizedMapTile : VKRasterTile
-(void)buildTexture;
-(id)initWithKey:(const VKTileKey*)arg1 gglTexture:(const shared_ptr<ggl::Texture2D>*)arg2 styleManager:(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)arg3 ;
-(void)gglBuildTexture;
@end
