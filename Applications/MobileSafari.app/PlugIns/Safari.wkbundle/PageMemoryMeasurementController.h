/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 11:42:33 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /Applications/MobileSafari.app/PlugIns/Safari.wkbundle/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/MeasurementControllerBase.h>

@class NSTimer, NSArray;

@interface PageMemoryMeasurementController : MeasurementControllerBase {

	NSTimer* _waitForMemoryPressureHandler;
	NSArray* _pagesNeedingMemoryWarningSent;
	int _currentPageIndex;

}
-(id)_memoryUsage:(BOOL)arg1 ;
-(void)_postPageLoadEnd;
-(void)_doBeforePageLoad;
-(void)_waitForMemoryPressureHandlerTimerFired:(id)arg1 ;
-(id)initWithPluginPageContextController:(id)arg1 pagesNeedingMemoryWarningSent:(id)arg2 ;
@end
