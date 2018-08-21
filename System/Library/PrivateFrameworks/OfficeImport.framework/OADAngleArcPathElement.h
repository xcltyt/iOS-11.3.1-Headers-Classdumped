/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADPathElement.h>

@interface OADAngleArcPathElement : OADPathElement {

	OADAdjustPoint mCenter;
	OADAdjustPoint mSemiaxes;
	OADAdjustCoord mStartAngle;
	OADAdjustCoord mAngleLength;
	BOOL mConnectedToPrevious;

}
-(OADAdjustPoint)center;
-(OADAdjustCoord)startAngle;
-(id)initWithCenter:(OADAdjustPoint)arg1 semiaxes:(OADAdjustPoint)arg2 startAngle:(OADAdjustCoord)arg3 angleLength:(OADAdjustCoord)arg4 connectedToPrevious:(BOOL)arg5 ;
-(OADAdjustPoint)semiaxes;
-(OADAdjustCoord)angleLength;
-(BOOL)connectedToPrevious;
@end
