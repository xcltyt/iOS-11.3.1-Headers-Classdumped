/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OFUIGridViewDataSource <NSObject>
@optional
-(void)gridView:(id)arg1 willDisplayCell:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)gridView:(id)arg1 didRecycleCell:(id)arg2 atIndex:(unsigned long long)arg3;

@required
-(long long)numberOfCellsInGridView:(id)arg1;
-(id)gridView:(id)arg1 cellAtIndex:(unsigned long long)arg2;

@end
