/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOMapFeatureBuildingSection : NSObject {

	SCD_Struct_GE29* _coordinates;
	unsigned long long _coordinateCount;
	double _baseHeight;
	double _height;
	SCD_Struct_GE97* _feature;
	unsigned long long _sectionIndex;

}

@property (nonatomic,readonly) SCD_Struct_GE29* coordinates; 
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) double baseHeight;                               //@synthesize baseHeight=_baseHeight - In the implementation block
@property (nonatomic,readonly) double height;                                   //@synthesize height=_height - In the implementation block
-(unsigned long long)coordinateCount;
-(SCD_Struct_GE29*)coordinates;
-(double)baseHeight;
-(id)initWithFeature:(SCD_Struct_GE97*)arg1 sectionIndex:(unsigned long long)arg2 ;
-(void)dealloc;
-(double)height;
@end
