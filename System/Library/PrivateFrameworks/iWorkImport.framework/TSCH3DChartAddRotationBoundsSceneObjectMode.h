/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartAddBoundsSceneObjectMode.h>

@interface TSCH3DChartAddRotationBoundsSceneObjectMode : TSCH3DChartAddBoundsSceneObjectMode {

	int mRotationType;

}

@property (assign,nonatomic) int rotationType; 
-(void)getBounds:(id)arg1 ;
-(double)p_radiusFromBounds:(const box<glm::detail::tvec3<float> >*)arg1 pivot:(const tvec3<float>*)arg2 ;
-(void)p_submitGeometryForChartBounds:(const box<glm::detail::tvec3<float> >*)arg1 pivot:(const tvec3<float>*)arg2 thicknessIndex:(unsigned long long)arg3 pipeline:(id)arg4 ;
-(int)rotationType;
-(void)setRotationType:(int)arg1 ;
@end
