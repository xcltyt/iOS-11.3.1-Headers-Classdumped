/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class _MKSpatialColliderPairSet;

@interface MKSpatialCollider : NSObject <NSFastEnumeration> {

	long long _options;
	_MKSpatialColliderPairSet* _previousCollisionPairs;
	_MKSpatialColliderPairSet* _registeredCollisonPairs;
	BOOL _isVertical;
	vector<MKAnnotationView *, std::__1::allocator<MKAnnotationView *> >* _sortedAnnotationViews;
	double _maxLength;
	unsigned long long mutator;

}
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MK30*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)initWithAnnotationViews:(id)arg1 previousCollissions:(id)arg2 options:(long long)arg3 ;
-(id)annotationViewAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)insertAnnotationView:(id)arg1 ;
-(id)viewsCollidingWithAnnotationView:(id)arg1 ;
-(id)viewsCollidingWithAnnotationViewAtIndex:(unsigned long long)arg1 ;
-(id)viewsCollidingWithAnnotationView:(id)arg1 fromIndex:(long long)arg2 length:(double)arg3 ;
-(id)registeredCollissions;
-(unsigned long long)viewCount;
@end
