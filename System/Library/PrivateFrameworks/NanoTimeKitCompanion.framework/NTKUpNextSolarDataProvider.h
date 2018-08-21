/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NTKUpNextElementDataSourceDelegate;
@class NTKUpNextTimer;

@interface NTKUpNextSolarDataProvider : NSObject {

	NTKUpNextTimer* _sunriseTimer;
	NTKUpNextTimer* _sunsetTimer;
	id<NTKUpNextElementDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NTKUpNextElementDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sampleContentElements;
+(id)_elementWithDate:(id)arg1 isSunrise:(BOOL)arg2 action:(id)arg3 ;
+(id)_countdownTextProviderWithDate:(id)arg1 ;
-(id<NTKUpNextElementDataSourceDelegate>)delegate;
-(void)setDelegate:(id<NTKUpNextElementDataSourceDelegate>)arg1 ;
-(void)dealloc;
@end
