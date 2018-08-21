/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKMapModelDelegate <NSObject>
@optional
-(void)mapModel:(id)arg1 didUpdateContainsOverlay:(BOOL)arg2;
-(void)mapModelDidReloadStylesheet:(id)arg1;
-(void)mapModelStylesheetDidChange:(id)arg1;

@required
-(void)mapModelDidBecomePartiallyDrawn:(id)arg1;
-(void)mapModelWillBecomeFullyDrawn:(id)arg1;
-(void)mapModelDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
-(void)mapModelDidStartLoadingTiles:(id)arg1;
-(void)mapModelDidFinishLoadingTiles:(id)arg1;
-(void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
-(void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(const shared_ptr<md::LabelMarker>Ref)arg2;
-(void)mapModel:(id)arg1 labelMarkerDidChangeState:(const shared_ptr<md::LabelMarker>Ref)arg2;
-(void)mapModelLabelsDidLayout:(id)arg1;
-(void)mapModel:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
-(void)mapModelDidUpdateMinMaxZoomLevel:(id)arg1;

@end
