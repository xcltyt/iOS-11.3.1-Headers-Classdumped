/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:01:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/ControlCenter/Bundles/ReplayKitModule.bundle/ReplayKitModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReplayKitModule/ReplayKitModule-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSString, UIImage, UIImageView, UILabel, NSBundle;

@interface RPControlCenterModuleCellView : UIView <UIGestureRecognizerDelegate> {

	BOOL _isSelected;
	BOOL _isWideModule;
	NSString* _extBundleID;
	NSString* _currentRecordingTime;
	UIImage* _extAppImg;
	UIImage* _extSelectedImg;
	NSString* _extDisplayName;
	UIImageView* _extImageView;
	UIImageView* _extSelectedImageView;
	UILabel* _extDisplayLabel;
	UILabel* _recordingTimer;
	NSBundle* _RPCCModuleBundle;

}

@property (nonatomic,retain) NSString * extBundleID;                          //@synthesize extBundleID=_extBundleID - In the implementation block
@property (nonatomic,retain) NSString * currentRecordingTime;                 //@synthesize currentRecordingTime=_currentRecordingTime - In the implementation block
@property (nonatomic,retain) UIImage * extAppImg;                             //@synthesize extAppImg=_extAppImg - In the implementation block
@property (nonatomic,retain) UIImage * extSelectedImg;                        //@synthesize extSelectedImg=_extSelectedImg - In the implementation block
@property (nonatomic,retain) NSString * extDisplayName;                       //@synthesize extDisplayName=_extDisplayName - In the implementation block
@property (nonatomic,retain) UIImageView * extImageView;                      //@synthesize extImageView=_extImageView - In the implementation block
@property (nonatomic,retain) UIImageView * extSelectedImageView;              //@synthesize extSelectedImageView=_extSelectedImageView - In the implementation block
@property (nonatomic,retain) UILabel * extDisplayLabel;                       //@synthesize extDisplayLabel=_extDisplayLabel - In the implementation block
@property (nonatomic,retain) UILabel * recordingTimer;                        //@synthesize recordingTimer=_recordingTimer - In the implementation block
@property (assign,nonatomic) BOOL isSelected;                                 //@synthesize isSelected=_isSelected - In the implementation block
@property (nonatomic,retain) NSBundle * RPCCModuleBundle;                     //@synthesize RPCCModuleBundle=_RPCCModuleBundle - In the implementation block
@property (assign,nonatomic) BOOL isWideModule;                               //@synthesize isWideModule=_isWideModule - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSBundle *)RPCCModuleBundle;
-(BOOL)getSelected;
-(void)setIsWideModule:(BOOL)arg1 ;
-(void)setExtAppImg:(UIImage *)arg1 ;
-(void)setExtBundleID:(NSString *)arg1 ;
-(void)setExtDisplayName:(NSString *)arg1 ;
-(void)setCurrentRecordingTime:(NSString *)arg1 ;
-(void)setRPCCModuleBundle:(NSBundle *)arg1 ;
-(void)setExtSelectedImg:(UIImage *)arg1 ;
-(UIImage *)extSelectedImg;
-(void)setExtSelectedImageView:(UIImageView *)arg1 ;
-(UILabel *)extDisplayLabel;
-(UIImageView *)extSelectedImageView;
-(void)setUpExtensionImageView;
-(void)setUpExtensionNameLabel;
-(UILabel *)recordingTimer;
-(BOOL)isWideModule;
-(UIImageView *)extImageView;
-(void)setRecordingTimer:(UILabel *)arg1 ;
-(NSString *)currentRecordingTime;
-(UIImage *)extAppImg;
-(void)setExtImageView:(UIImageView *)arg1 ;
-(void)setExtDisplayLabel:(UILabel *)arg1 ;
-(NSString *)extDisplayName;
-(id)initWithDictionary:(id)arg1 rect:(CGRect)arg2 ;
-(void)setLabels;
-(NSString *)extBundleID;
-(void)removeRecordingTimer;
-(void)addFooterLine;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)setIsSelected:(BOOL)arg1 ;
@end
